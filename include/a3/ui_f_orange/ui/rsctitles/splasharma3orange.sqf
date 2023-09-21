#include "\a3\UI_F_Orange\UI\resincl.inc"

_mode = _this select 0;
_params = _this select 1;
_class = _this select 2;

switch _mode do {
	case "onLoad": {
		_params spawn {
			disableserialization;
			params ["_display"];
			_ctrlPicture = _display displayctrl 1200;

			_time = time + 15;
			waituntil {time > _time || isnull _display};
			if (isnull _display) exitwith {};

			_ctrlPicture ctrlsetfade 1;
			_ctrlPicture ctrlcommit 2;
		};
	};
};