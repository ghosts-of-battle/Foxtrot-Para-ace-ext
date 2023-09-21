#include "\a3\UI_F_Orange\UI\resincl.inc"

#define PREVIEW_SOUNDVOLUME	0.25

_mode = _this select 0;
_params = _this select 1;
_class = _this select 2;

switch _mode do {
	case "onLoad": {
		_display = _params select 0;

		_data = missionnamespace getvariable ["RscDisplayRead_data",[]];
		_data params [
			["_textureData","",["",[]]],
			["_text","",[""]],
			["_sound","",[""]],
			["_textureRatio",-1,[0]]
		];
		_textureData params [
			["_texture","",[""]]
		];

		_ctrlTexture = _display displayctrl 1001;
		_ctrlTextGroup = _display displayctrl 1003;
		_ctrlText = _display displayctrl 1005;
		_ctrlButtonShowText = _display displayctrl 1004;
		_ctrlButtonClose = _display displayctrl 2;
		_activeButtons = [_ctrlButtonClose];

		if (_textureRatio >= 0) then {
			_ctrlTexture ctrlshow false;
			_ctrlTextureNew = _display ctrlcreate ["RscPicture",1001];
			_ctrlTexturePos = ctrlposition _ctrlTexture;
			_ctrlTexturePos set [2,(_ctrlTexturePos select 3) * 3/4 * _textureRatio];
			_ctrlTexturePos set [0,0.5 - (_ctrlTexturePos select 2) / 2];
			_ctrlTextureNew ctrlsetposition _ctrlTexturePos;
			_ctrlTextureNew ctrlcommit 0;
			_ctrlTexture = _ctrlTextureNew;
		};

		_ctrlTexture ctrlsettext _texture;
		_isText = _text != "";
		if (_isText) then 
		{
			_ctrlText ctrlSetStructuredText parseText _text;
			private _textParent = ctrlParentControlsGroup _ctrlText;
			if (ctrlTextHeight _ctrlText >= ctrlPosition _textParent select 3) then 
			{
				private _parentWidth = ctrlPosition _textParent select 2;
				_ctrlText ctrlSetPositionW (_parentWidth - getNumber (configFile >> "RscControlsGroup" >> "VScrollBar" >> "width")); // width minus scrollbar
				_ctrlText ctrlCommit 0;		
			};
			_ctrlText ctrlSetStructuredText parseText _text;
			_ctrlText ctrlSetPositionH ctrlTextHeight _ctrlText;
			_ctrlText ctrlCommit 0;
			_activeButtons pushBack _ctrlButtonShowText;
		} 
		else 
		{
			_ctrlTextGroup ctrlShow false;
			_ctrlButtonShowText ctrlShow false;
		};

		missionnamespace setvariable ["RscDisplayRead_data",nil];
		_pp = ppeffectcreate ["dynamicBlur",437];
		_pp ppeffectadjust [3];
		_pp ppeffectcommit 0;
		_pp ppeffectenable true;
		_display setvariable ["pp",_pp];

		//--- Enable buttons after short delay to avoid instant activations caused by held spacebar
		_activeButtons spawn {
			disableserialization;
			uisleep 0.01;
			{_x ctrlshow true;} foreach _this;
		};

		if (_sound != "") then {playsound [_sound,true];};
		missionnamespace setvariable ["RscDisplayRead_soundvolume",soundvolume];
		0.2 fadesound PREVIEW_SOUNDVOLUME;
	};
	case "onUnload": {
		_display = _params select 0;
		ppeffectdestroy (_display getvariable ["pp",-1]);
		if (soundvolume == PREVIEW_SOUNDVOLUME) then {
			0.2 fadesound (missionnamespace getvariable ["RscDisplayRead_soundvolume",soundvolume]);
		};
	};
};