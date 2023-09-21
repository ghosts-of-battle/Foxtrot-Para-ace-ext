#include "\a3\UI_F_Orange\UI\resincl.inc"
#define DELAY_DOTS 0.4
#define DELAY_CALL 1.5

_mode = _this select 0;
_params = _this select 1;
_class = _this select 2;

switch _mode do {
	case "onLoad": {
		(missionnamespace getvariable ["RscDisplayPhoneCallIncoming_data",[]]) params [
			["_name","",[""]],
			["_avatar","",[""]]
		];

		missionnamespace setvariable ["RscDisplayPhoneCallIncoming_result",-1];

		_display = _params select 0;
		_ctrlAvatar = _display displayctrl IDC_RSCDISPLAYPHONECALLINCOMING_AVATAR;
		_ctrlName = _display displayctrl IDC_RSCDISPLAYPHONECALLINCOMING_NAME;
		_ctrlButtonOK = _display displayctrl IDC_RSCDISPLAYPHONECALLINCOMING_ICONOK;
		_ctrlButtonCancel = _display displayctrl IDC_RSCDISPLAYPHONECALLINCOMING_ICONCANCEL;

		_text = format [ctrltext _ctrlName,_name];
		_ctrlName ctrlsettext _text;
		_ctrlName setvariable ["bis_text",_text];
		_ctrlAvatar ctrlsettext _avatar;

		_ctrlBackgroundOK = _display displayctrl IDC_RSCDISPLAYPHONECALLINCOMING_BACKGROUNDOK;
		_ctrlBackgroundOK ctrlsetfade 0.01;
		_ctrlBackgroundOK ctrlcommit 0;

		_display setvariable ["bis_timerCall",0];
		_display setvariable ["bis_timerDots",0];
		{
			_display displayaddeventhandler [
				_x,
				{
					_display = _this select 0;

					//--- Pulse "Accept" button to let player know he should click on it
					_ctrlBackgroundOK = _display displayctrl IDC_RSCDISPLAYPHONECALLINCOMING_BACKGROUNDOK;
					if (ctrlfade _ctrlBackgroundOK != 0) then {
						_ctrlBackgroundOK ctrlsetfade (0.25 * sin (time * 300));
						_ctrlBackgroundOK ctrlcommit 0;
					};

					//--- Play ringtone
					if (diag_ticktime > (_display getvariable ["bis_timerCall",0])) then {
						playsound ["Orange_PhoneCall_Ringtone",true];
						_display setvariable ["bis_timerCall",diag_ticktime + DELAY_CALL];
					};

					//--- Animate ...
					if (diag_ticktime > (_display getvariable ["bis_timerDots",0])) then {
						_ctrlName = _display displayctrl IDC_RSCDISPLAYPHONECALLINCOMING_NAME;
						_text = _ctrlName getvariable ["bis_text",""];
						for "_i" from 1 to ((diag_ticktime / DELAY_DOTS) % 4) do {_text = _text + ".";};
						_ctrlName ctrlsettext _text;
						_display setvariable ["bis_timerDots",diag_ticktime + DELAY_DOTS];
					};
				}
			];
		} foreach ["mousemoving","mouseholding"];

		{
			_ctrlButtonOK ctrladdeventhandler [
				_x,
				{
					_ctrlBackgroundOK = (ctrlparent (_this select 0)) displayctrl IDC_RSCDISPLAYPHONECALLINCOMING_BACKGROUNDOK;
					_ctrlBackgroundOK ctrlsettextcolor [0.2,0.8,0.2,1];
					_ctrlBackgroundOK ctrlsetfade 0; //--- Disable flashing
					_ctrlBackgroundOK ctrlcommit 0;
				}
			];
			_ctrlButtonCancel ctrladdeventhandler [
				_x,
				{
					_ctrlBackgroundCancel = (ctrlparent (_this select 0)) displayctrl IDC_RSCDISPLAYPHONECALLINCOMING_BACKGROUNDCANCEL;
					_ctrlBackgroundCancel ctrlsettextcolor [1,0,0,1];
				}
			];
		} foreach ["mouseenter","setfocus"];
		{
			_ctrlButtonOK ctrladdeventhandler [
				_x,
				{
					_ctrlBackgroundOK = (ctrlparent (_this select 0)) displayctrl IDC_RSCDISPLAYPHONECALLINCOMING_BACKGROUNDOK;
					_ctrlBackgroundOK ctrlsettextcolor [0.18,0.72,0.18,1];
					_ctrlBackgroundOK ctrlsetfade 0.01; //--- Enable flashing
					_ctrlBackgroundOK ctrlcommit 0;
				}
			];
			_ctrlButtonCancel ctrladdeventhandler [
				_x,
				{
					_ctrlBackgroundCancel = (ctrlparent (_this select 0)) displayctrl IDC_RSCDISPLAYPHONECALLINCOMING_BACKGROUNDCANCEL;
					_ctrlBackgroundCancel ctrlsettextcolor [0.9,0,0,1];
				}
			];
		} foreach ["mouseexit","killfocus"];

		_ctrlButtonOK ctrladdeventhandler [
			"buttonclick",
			{
				playsound ["Orange_PhoneCall_Accept",true];
				missionnamespace setvariable ["RscDisplayPhoneCallIncoming_result",1];
				(ctrlparent (_this select 0)) closedisplay 1;
			}
		];
		_ctrlButtonCancel ctrladdeventhandler [
			"buttonclick",
			{
				playsound ["Orange_PhoneCall_Reject",true];
				missionnamespace setvariable ["RscDisplayPhoneCallIncoming_result",0];
				(ctrlparent (_this select 0)) closedisplay 2;
			}
		];
	};
	case "onUnload": {
		if ((missionnamespace getvariable ["RscDisplayPhoneCallIncoming_result",-1]) < 0) then {
			missionnamespace setvariable ["RscDisplayPhoneCallIncoming_result",0];
		};
	};
};