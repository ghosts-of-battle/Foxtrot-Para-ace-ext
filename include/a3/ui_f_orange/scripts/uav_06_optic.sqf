/*
	Scripted controls for UAV 06 optics. Following features are handled by script:
	* traverese & elevation arrows
	* deminining drone warning for restricted zone & minimal altitude
	* remaining battery power

	Input:
		_ctrl -  Map control to which "draw" event handler is attached to

	A: reyhard
*/

params["_ctrl"];

#define GUI_GRID_OLD_OPTICS_W		(0.01875 * SafezoneH)
#define GUI_GRID_OLD_OPTICS_H		(0.025 * SafezoneH)
#define ARROW_SIZE 1 * GUI_GRID_OLD_OPTICS_W,1 * GUI_GRID_OLD_OPTICS_H
#define AREAS (cameraOn getvariable ["BIS_FireAreaRestricted_Triggers",synchronizedobjects cameraOn select {_x iskindof "EmptyDetector"}])

disableserialization;
// define all controls
private _display		= ctrlparent _ctrl;
private _altitude		= _display displayCtrl 191;
private _fuel			= _display displayCtrl 5001;
private _restricted		= _display displayCtrl 5002;
private _minHeightT1	= _display displayCtrl 5003;
private _minHeightT2	= _display displayCtrl 5004;
private _arrowTraversee	= _display displayCtrl 5007;
private _arrowElevation	= _display displayCtrl 5008;

// battery indicator
_fuel ctrlSetText (format["%1%2",ceil ((fuel cameraon)*100),"%"]);

// animation of pilot camera rotation indicators
private _trav = deg ((getPilotCameraRotation cameraOn) select 0);
private _elev = deg ((getPilotCameraRotation cameraOn) select 1);
_arrowElevation ctrlSetPosition [6.9 * GUI_GRID_OLD_OPTICS_W,(13.25+(_elev*0.127)) * GUI_GRID_OLD_OPTICS_H,ARROW_SIZE];
_arrowTraversee ctrlSetPosition [(26.11-_trav*0.2358) * GUI_GRID_OLD_OPTICS_W,5.2 * GUI_GRID_OLD_OPTICS_H,ARROW_SIZE];
{_x ctrlCommit 0}foreach [_arrowElevation,_arrowTraversee];

// Demining drone specific controls
if((typeOf cameraOn) isKindOf "UAV_06_antimine_base_F" )then
{
	// minimal height for safe demining operations is 25m AGL
	if(((getPosATL cameraOn) select 2) < 25)then
	{
		_altitude ctrlSetTextColor [1,0,0,1];
		{_x ctrlShow true}foreach [_minHeightT1,_minHeightT2];
	}else{
		_altitude ctrlSetTextColor [1,1,1,1];
		{_x ctrlShow false}foreach [_minHeightT1,_minHeightT2];
	};
	// firing zones restricitons
	if (
		(cameraOn getvariable ["BIS_FireAreaRestricted",false]) param [0,false,[false]]
	) then {
		if (
			{cameraOn inarea _x} count AREAS == 0
		) then {
			_restricted ctrlShow true;

		} else {
			_restricted ctrlShow false;
		};
	}else{
		_restricted ctrlShow false;
	};
}else{
	{_x ctrlShow false}foreach [_restricted,_minHeightT1,_minHeightT2];
};