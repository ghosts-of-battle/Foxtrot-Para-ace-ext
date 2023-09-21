#include "\a3\UI_F_Orange\UI\resincl.inc"

_mode = _this select 0;
_params = _this select 1;
_class = _this select 2;

switch _mode do {
	case "onLoad": {
		setmouseposition [0.5,0.9];

		_display = _params select 0;
		if !(isclass (missionconfigfile >> "CfgOrange")) exitwith {
			"RscDisplayOrangeChoice can be opened only in 'Remnants of War' campaign!" call bis_fnc_error;
			_display closedisplay 2;
		};

		_display setvariable ["hover",controlnull];
		_display setvariable ["selected",controlnull];
		_texts = missionnamespace getvariable ["RscDisplayOrangeChoice_texts",["Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum","1","2","3",""]];
		missionnamespace setvariable ["RscDisplayOrangeChoice_result",-1];

		playmusic "";
		_display setvariable [
			"musicstop",
			addmusiceventhandler [
				"musicstop",
				{
					disableserialization;
					_display = (uinamespace getvariable ["RscDisplayOrangeChoice",displaynull]);
					if !(isnull _display) then {playmusic (_display getvariable ["music",""]);};
				}
			]
		];

		_offsetX = 0;
		if ({_x != ""} count _texts == 5) then {_offsetX = -(ctrlposition (_display displayctrl IDC_RSCDISPLAYORANGECHOICE_HOVER) select 2) / 2};
		{
			_idc = _x select 0;
			_mission = _x select 1;
			_cfg = missionconfigfile >> "CfgOrange" >> "Missions" >> _mission;
			_text = _texts param [_foreachindex,""];

			_ctrl = _display displayctrl _idc;
			if (_text != "") then {
				_color = getarray (_cfg >> "timelineColor");
				_colorBackground = getarray (_cfg >> "timelineColorBackground");
				_ctrl setvariable ["id",_foreachindex];
				_ctrl setvariable ["text",parsetext _text];
				_ctrl setvariable ["color",_color];
				_ctrl setvariable ["colorBackground",_colorBackground];
				_ctrl ctrlsetactivecolor _color;
				_ctrl ctrlenable false;
				if (_offsetX != 0) then {
					_ctrlPos = ctrlposition _ctrl;
					_ctrlPos set [0,(_ctrlPos select 0) + _offsetX];
					_ctrl ctrlsetposition _ctrlPos;
					_ctrl ctrlcommit 0;
				};
				_ctrl ctrladdeventhandler ["buttonclick",{with uinamespace do {["click",_this,""] call RscDisplayOrangeChoice_script};}];
				{
					_ctrl ctrladdeventhandler [_x,{with uinamespace do {["enter",_this,""] call RscDisplayOrangeChoice_script};}];
				} foreach ["mouseenter","setfocus"];
				{
					_ctrl ctrladdeventhandler [_x,{with uinamespace do {["exit",_this,""] call RscDisplayOrangeChoice_script};}];
				} foreach ["mouseexit","killfocus"];
			} else {
				_ctrl ctrlshow false;
			};
		} foreach [
			[IDC_RSCDISPLAYORANGECHOICE_NATO,	"Orange_AirDrop"],
			[IDC_RSCDISPLAYORANGECHOICE_FIA,	"Orange_Leaflets"],
			[IDC_RSCDISPLAYORANGECHOICE_CSAT,	"Orange_Cluster"],
			[IDC_RSCDISPLAYORANGECHOICE_AAF,	"Orange_MineDispenser"],
			[IDC_RSCDISPLAYORANGECHOICE_NONE,	"Orange_Hub_Post"]
		];

		[_display] spawn {
			disableserialization;
			_display = _this select 0;
			sleep 0.1;

			_ctrlBackground = _display displayctrl 999;
			_ctrlBackground ctrlsetfade 0;
			_ctrlBackground ctrlcommit 1;

			sleep 1.2;

			_ctrlTitle = _display displayctrl IDC_RSCDISPLAYORANGECHOICE_TITLE;
			_ctrlTitle ctrlsetfade 0;
			_ctrlTitle ctrlcommit 4;

			waituntil {_display getvariable ["bis_showChoices",false]};

			{
				_ctrl = _display displayctrl _x;
				if (ctrlshown _ctrl) then {
					if (_display getvariable ["bis_selected",false]) exitwith {_ctrl ctrlshow false;};
					playsound ["Orange_Choice_fadeIn_01",true];
					_ctrl ctrlsetfade 0;
					_ctrl ctrlcommit 0.6;
					//_ctrl ctrlenable true;
					_kb = scriptnull;
					with missionnamespace do {
						_conversation = ["ChoiceInit_NATO","ChoiceInit_FIA","ChoiceInit_CSAT","ChoiceInit_AAF","ChoiceInit_This_is_War"] select _foreachindex;
						_kb = _conversation spawn bis_fnc_missionConversations;
					};
					waituntil {scriptdone _kb};
				};
			} foreach [
				IDC_RSCDISPLAYORANGECHOICE_NATO,
				IDC_RSCDISPLAYORANGECHOICE_FIA,
				IDC_RSCDISPLAYORANGECHOICE_CSAT,
				IDC_RSCDISPLAYORANGECHOICE_AAF,
				IDC_RSCDISPLAYORANGECHOICE_NONE
			];
			{
				_ctrl = _display displayctrl _x;
				_ctrl ctrlenable true;
			} foreach [
				IDC_RSCDISPLAYORANGECHOICE_NATO,
				IDC_RSCDISPLAYORANGECHOICE_FIA,
				IDC_RSCDISPLAYORANGECHOICE_CSAT,
				IDC_RSCDISPLAYORANGECHOICE_AAF,
				IDC_RSCDISPLAYORANGECHOICE_NONE
			];
		};

		_display displayaddeventhandler [
			"keydown",
			{
				if ((_this select 1) == 1) then {
					(_this select 0) createdisplay "RscDisplayInterrupt";
					((finddisplay 49) displayctrl 119) ctrlenable false;
					((finddisplay 49) displayctrl 104) ctrladdeventhandler [
						"buttonClick",
						{
							(uinamespace getvariable "RscDisplayOrangeChoice") closedisplay 2;
							(finddisplay 46) closedisplay 4;
						}
					];
					true
				} else {
					false
				};
			}
		];
	};
	case "onUnload": {
		_display = _params select 0;

		removemusiceventhandler ["musicstop",_display getvariable ["musicstop",-1]];
		playmusic "";
	};
	case "enter": {
		_ctrl = _params select 0;
		_display = ctrlparent _ctrl;

		_ctrlHover = _display displayctrl IDC_RSCDISPLAYORANGECHOICE_HOVER;
		_ctrlHover ctrlsetposition ctrlposition _ctrl;
		_ctrlHover ctrlsettextcolor (_ctrl getvariable "colorBackground");
		_ctrlHover ctrlsetfade 1;
		_ctrlHover ctrlcommit 0;
		_ctrlHover ctrlsetfade 0;
		_ctrlHover ctrlcommit 0.2;
		_ctrl ctrlsettextcolor (_ctrl getvariable "color");
		_id = _ctrl getvariable "id";

		if (_ctrl == _display getvariable ["hover",controlnull] || _display getvariable ["bis_selecting",false]) exitwith {};
		_display setvariable ["hover",_ctrl];

		_sound = [
			"Orange_Choice_Hover_OneShot_NATO",
			"Orange_Choice_Hover_OneShot_FIA",
			"Orange_Choice_Hover_OneShot_CSAT",
			"Orange_Choice_Hover_OneShot_AAF",
			"Orange_Choice_Hover_OneShot_War"
		] select _id;
		//_sound = "Orange_Choice_fadeIn_01";
		playsound [_sound,true];

		_music = [
			"Orange_Choice_Hover_Loop_NATO",
			"Orange_Choice_Hover_Loop_FIA",
			"Orange_Choice_Hover_Loop_CSAT",
			"Orange_Choice_Hover_Loop_AAF",
			"Orange_Choice_Hover_Loop_War"
		] select _id;
		_display setvariable ["music",_music];
		playmusic _music;
		0 fademusic 0;
		0.2 fademusic 0.2;

		_ctrlDescription = _display displayctrl IDC_RSCDISPLAYORANGECHOICE_DESCRIPTION;
		_ctrlDescription ctrlsetstructuredtext (_ctrl getvariable "text");
		_posH = _ctrlDescription call bis_fnc_ctrlFitToTextHeight;
		_ctrlDescription ctrlsetfade 0;
		_ctrlDescription ctrlcommit 0.2;

		_ctrlDescriptionBackground = _display displayctrl IDC_RSCDISPLAYORANGECHOICE_DESCRIPTIONBACKGROUND;
		_ctrlDescriptionBackgroundPos = ctrlposition _ctrlDescriptionBackground;
		_ctrlDescriptionBackgroundPos set [3,_posH + 2 * ((ctrlposition _ctrlDescription select 1) - (_ctrlDescriptionBackgroundPos select 1))];
		_ctrlDescriptionBackground ctrlsetposition _ctrlDescriptionBackgroundPos;
		_ctrlDescriptionBackground ctrlcommit 0;
		_ctrlDescriptionBackground ctrlsetfade 0;
		_ctrlDescriptionBackground ctrlcommit 0.2;
	};
	case "exit": {
		_ctrl = _params select 0;
		_display = ctrlparent _ctrl;
		if ((_display getvariable ["selected",controlnull]) == _ctrl || _display getvariable ["bis_selecting",false]) exitwith {};
		_display setvariable ["hover",controlnull];

		_ctrlHover = _display displayctrl IDC_RSCDISPLAYORANGECHOICE_HOVER;
		_ctrlHover ctrlsetfade 1;
		_ctrlHover ctrlcommit 0.2;
		_ctrl ctrlsettextcolor [1,1,1,1];

		_ctrlDescription = _display displayctrl IDC_RSCDISPLAYORANGECHOICE_DESCRIPTION;
		_ctrlDescription ctrlsetfade 1;
		_ctrlDescription ctrlcommit 0.2;

		_ctrlDescriptionBackground = _display displayctrl IDC_RSCDISPLAYORANGECHOICE_DESCRIPTIONBACKGROUND;
		_ctrlDescriptionBackground ctrlsetfade 1;
		_ctrlDescriptionBackground ctrlcommit 0.2;

		0.2 fademusic 0;
	};
	case "click": {
		_ctrl = _params select 0;
		_ctrl ctrlsettextcolor (_ctrl getvariable "color");
		(ctrlparent _ctrl) setvariable ["selected",_ctrl];
		_display setvariable ["hover",_ctrl];
		_display setvariable ["bis_selecting",true];
		0 fademusic 0.2;
		_params spawn {
			disableserialization;
			_ctrl = _this select 0;
			_display = ctrlparent _ctrl;
			_result = [localize "str_sure",nil,true,true,_display,true] call bis_fnc_guiMessage;
			if (_result) then {

				//--- Fade out inactive choices
				_display setvariable ["bis_selected",true];
				_id = _ctrl getvariable "id";
				_ctrlSelected = controlnull;
				{
					_ctrl = _display displayctrl _x;
					_ctrl ctrlenable false;
					if (_foreachindex != _id) then {
						_ctrl ctrlsetfade 1;
						_ctrl ctrlcommit 1;
					} else {
						_ctrlSelected = _ctrl;
					};
				} foreach [
					IDC_RSCDISPLAYORANGECHOICE_NATO,
					IDC_RSCDISPLAYORANGECHOICE_FIA,
					IDC_RSCDISPLAYORANGECHOICE_CSAT,
					IDC_RSCDISPLAYORANGECHOICE_AAF,
					IDC_RSCDISPLAYORANGECHOICE_NONE,
					IDC_RSCDISPLAYORANGECHOICE_TITLE,
					IDC_RSCDISPLAYORANGECHOICE_DESCRIPTIONBACKGROUND,
					IDC_RSCDISPLAYORANGECHOICE_DESCRIPTION
				];
				playsound ["Orange_Choice_select",true];
				1 fademusic 0;

				//--- Keep selected
				_ctrlHover = _display displayctrl IDC_RSCDISPLAYORANGECHOICE_HOVER;
				_ctrlHover ctrlsetposition ctrlposition _ctrlSelected;
				_ctrlHover ctrlsetfade 0;
				_ctrlHover ctrlcommit 0;
				_ctrlHover ctrlsettextcolor (_ctrlSelected getvariable "colorBackground");
				_ctrlSelected ctrlsettextcolor (_ctrlSelected getvariable "color");

				//--- Move to center
				sleep 1;
				{
					_ctrlPos = ctrlposition _x;
					_ctrlPosY = _ctrlPos select 1;
					_ctrlPosW = _ctrlPos select 2;
					_ctrlPosH = _ctrlPos select 3;
					_ctrlPos = [0.5 - _ctrlPosW / 2,_ctrlPosY,_ctrlPosW,_ctrlPosH];
					_x ctrlsetposition _ctrlPos;
					_x ctrlsetfade 0;
					_x ctrlcommit 0.5;
				} foreach [_ctrlSelected,_ctrlHover];
				//sleep 1;

				//--- Start commentary
				missionnamespace setvariable ["RscDisplayOrangeChoice_result",_id];
				waituntil {_display getvariable ["bis_close",false]};
				_ctrlBlackout = _display displayctrl 998;
				_ctrlBlackout ctrlsetfade 0;
				_ctrlBlackout ctrlcommit 1;

				waituntil {ctrlcommitted _ctrlBlackout};
				sleep 0.1;
				_display closedisplay 2;
			} else {
				_ctrl = _display getvariable "selected";
				_display setvariable ["selected",controlnull];
				_display setvariable ["bis_selecting",false];
				["exit",[_ctrl],""] call RscDisplayOrangeChoice_script;
			};
		};
	};
};