#include "\a3\UI_F_Orange\UI\resincl.inc"

_mode = _this select 0;
_params = _this select 1;
_class = _this select 2;

switch _mode do {
	case "onLoad": {
		(missionnamespace getvariable ["RscPhoneCall_data",[]]) params [
			["_name","",[""]],
			["_avatar","",[""]],
			["_callStart",0,[0]]
		];

		_display = _params select 0;
		_ctrlAvatar = _display displayctrl IDC_RSCPHONECALL_AVATAR;
		_ctrlName = _display displayctrl IDC_RSCPHONECALL_NAME;
		_ctrlTimestamp = _display displayctrl IDC_RSCPHONECALL_TIMESTAMP;

		_ctrlName ctrlsettext _name;
		_ctrlAvatar ctrlsettext _avatar;
		_ctrlTimestamp ctrlsettext (((time - _callStart) / 3600) call bis_fnc_timetostring);

		[_ctrlTimestamp,_callStart] spawn {
			scriptname "RscPhoneCall: Timestamp";
			disableserialization;
			_ctrlTimestamp = _this select 0;
			_callStart = _this select 1;
			while {!isnull _ctrlTimestamp} do {
				_ctrlTimestamp ctrlsettext (((time + _callStart) / 3600) call bis_fnc_timetostring);
				_time = time + 1;
				waituntil {time > _time};
			};
		};
	};
};