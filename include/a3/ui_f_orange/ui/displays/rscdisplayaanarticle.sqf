#include "\a3\UI_F_Orange\UI\resincl.inc"
#define COLOR_AAN	[0.52,0.08,0.08,1]

_mode = _this select 0;
_params = _this select 1;
_class = _this select 2;

switch _mode do {
	case "onLoad": {
		_display = _params select 0;
		_yearCopyright = 2035;
		_isUppercase = false;
		_local = switch tolower language do {
			case "czech":		{localize "str_a3_cfgmarkers_flag_czechrepublic";};
			case "french":		{localize "str_a3_cfgmarkers_flag_france";};
			case "german": 		{_isUppercase = "true"; localize "str_a3_cfgmarkers_flag_germany";};
			case "hungarian":	{localize "str_a3_cfgmarkers_flag_hungary";};
			case "italian":		{localize "str_a3_cfgmarkers_flag_italy";};
			//case "korean":	{localize "";};
			//case "japanese":	{localize "";};
			case "polish":		{localize "str_a3_cfgmarkers_flag_poland";};
			case "portuguese":	{localize "str_a3_cfgmarkers_flag_portugal";};
			//case "russian":	{localize "";};
			case "spanish":		{ _isUppercase = "true"; localize "str_a3_cfgmarkers_flag_spain";};
			default {localize "str_a3_cfgmarkers_flag_usa";};
		};

		//--- Menus
		{
			_ctrlMenu = _display displayctrl _x;
			_text = "";
			{
				_text = _text + format ["<a href=' '>%1</a>      ",if (_isUppercase) then {toupper _x} else {tolower _x}];
			} foreach [
				localize "STR_A3_RscDisplayAANArticle_menu_0",
				_local,
				localize "STR_A3_RscDisplayAANArticle_menu_1",
				localize "STR_A3_RscDisplayAANArticle_menu_2",
				localize "STR_A3_RscDisplayAANArticle_menu_3",
				localize "STR_A3_RscDisplayAANArticle_menu_4",
				localize "STR_A3_RscDisplayAANArticle_menu_5",
				localize "STR_A3_RscDisplayAANArticle_menu_6",
				localize "STR_A3_RscDisplayAANArticle_menu_7",
				localize "STR_A3_RscDisplayAANArticle_menu_8"
			];
			_ctrlMenu ctrlsetstructuredtext parsetext format ["<t shadow='0' font='RobotoCondensedLight' colorLink='#ffffff'>%1</t>",_text];
			_ctrlMenu ctrladdeventhandler ["HTMLLink",{_this call bis_fnc_log;}];
		} foreach [
			IDC_RSCDISPLAYAANARTICLE_MENU,
			IDC_RSCDISPLAYAANARTICLE_MENUFOOTER
		];

		_ctrlSubmenu = _display displayctrl IDC_RSCDISPLAYAANARTICLE_SUBMENU;
		_text = "";
		{
			_text = _text + format ["<a href=' '>%1</a>      ",if (_isUppercase) then {toupper _x} else {tolower _x}];
		} foreach [
			localize "STR_A3_RscDisplayAANArticle_submenu_0",
			localize "STR_A3_RscDisplayAANArticle_submenu_1",
			localize "STR_A3_RscDisplayAANArticle_submenu_2",
			localize "STR_A3_RscDisplayAANArticle_submenu_3",
			localize "STR_A3_RscDisplayAANArticle_submenu_4",
			localize "STR_A3_RscDisplayAANArticle_submenu_5"
		];
		_ctrlSubmenu ctrlsetstructuredtext parsetext format ["<t shadow='0' font='RobotoCondensedLight' colorLink='#000000'>%1</t>",_text];
		_ctrlSubmenu ctrladdeventhandler ["HTMLLink",{_this call bis_fnc_log;}];

		_ctrlWebMenu = _display displayctrl IDC_RSCDISPLAYAANARTICLE_WEBMENU;
		_ctrlWebMenu ctrlsetstructuredtext parsetext format [
			"<t align='right'shadow='0' font='RobotoCondensed' colorLink='#ffffff' size='0.8'>
			<a href=' '><img image='\a3\Ui_f\data\GUI\RscCommon\RscButtonSearch\search_start_ca.paa' /> %1</a>
			<a href=' '><img image='\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\profile_player_ca.paa' />%2</a>
			</t>",
			localize "str_3den_display3den_menubar_search_text",
			format [localize "str_disp_xbox_hint_mp_sign_in"]
		];
		_ctrlWebMenu ctrladdeventhandler ["HTMLLink",{_this call bis_fnc_log;}];

		//--- Article
		_article = missionnamespace getvariable ["RscDisplayOrangeArticle_data",[]];
		//if (count _article == 0) then {
		//	_article = [
		//		["title","Remnants of War"],
		//		["meta",[]],
		//		["textbold","Interdum et malesuada fames ac ante ipsum primis in faucibus. Quisque viverra mauris ac leo euismod, a imperdiet nunc elementum. Vestibulum luctus odio ut rhoncus tincidunt. Fusce sed sodales est."],
		//		["image",["\a3\Missions_F_Orange\Data\Img\Faction_IDAP_ground_CA.paa","Schnobble schnobble schnobble schnobble schnobble schnobble schnobble schnobble schnobble schnobble schnobble schnobble schnobble"]],
		//		["text","ALTIS - Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed semper, nisi sed pharetra porta, mauris tortor semper eros, vel convallis quam est non nulla. Pellentesque sed libero condimentum, tincidunt urna ac, dictum justo. Integer felis dolor, lacinia sit amet egestas ac, pellentesque ut velit. In consequat diam vitae arcu aliquet, ac tempus ex tempor. Aliquam molestie augue ante, dignissim cursus nulla ultricies sed. Nunc vel orci non nulla vehicula finibus sed sed felis. Sed vulputate enim ac tincidunt elementum. Maecenas condimentum mattis metus, at maximus enim commodo quis. Donec luctus volutpat vehicula. Phasellus odio ligula, gravida sed ultricies vitae, aliquam et nunc. Sed sollicitudin a eros vel tincidunt. Etiam eu mattis mauris. Nulla facilisi. Proin convallis rutrum fringilla. Etiam dictum metus sem, quis consequat lacus porta ac. Suspendisse ut turpis facilisis, dictum purus eget, condimentum ligula."],
		//		["box",["\a3\Missions_F_Orange\Data\Img\Faction_IDAP_autonomous_CA.paa","Armstrong: CSAT understands who's boss on Altis"]],
		//		["text","Nulla rutrum eu tellus eget sodales. Cras viverra faucibus massa. Pellentesque dapibus, nibh at malesuada elementum, dolor velit fermentum velit, quis accumsan est felis non eros. Etiam ligula enim, egestas eu tempus eget, hendrerit sit amet quam. Maecenas vehicula ante id dui porta, at efficitur dui facilisis. Interdum et malesuada fames ac ante ipsum primis in faucibus. Maecenas ornare pulvinar elementum. Aenean cursus lectus quis aliquam tempor."],
		//		["textlocked",["Phasellus volutpat sed orci at sagittis. Praesent fermentum placerat nisi nec ultrices. Fusce in turpis sed mi condimentum pharetra. Quisque pretium luctus magna, ac pretium sapien feugiat quis. Etiam laoreet, dui non laoreet efficitur, risus dolor tempus metus, quis elementum nulla arcu vestibulum nunc. Morbi feugiat, leo non egestas varius, elit dui posuere dolor, ac accumsan lacus est eget lacus. Cras a pharetra ligula. Duis pharetra ligula ut urna tincidunt hendrerit. Aliquam euismod mattis pellentesque. Praesent semper maximus justo a interdum. Donec non erat pretium, ornare nisi id, sodales erat. Duis id augue tortor. Quisque rutrum eget lectus id vehicula.","Finish Laws of War campaign to gain access to the rest of the article."]],
		//		["author",["\a3\Missions_F_Orange\Data\Img\avatar_journalist_ca.paa","Catherine Bishop writes about foreign affairs for the AAN World News. She previously was a senior editor at KMN, based first in Prague and later in Amsterdam."]]
		//	];
		//};

		_ctrlDisplay = _display displayctrl IDC_RSCDISPLAYAANARTICLE_DISPLAY;
		_ctrlGroupMenu = _display displayctrl IDC_RSCDISPLAYAANARTICLE_GROUPMENU;
		_ctrlGroupBody = _display displayctrl IDC_RSCDISPLAYAANARTICLE_GROUPBODY;
		_ctrlGroupBodyPos = ctrlposition _ctrlGroupBody;
		_posY = 0;
		_posW = _ctrlGroupBodyPos select 2;

		_posBoxW = ((ctrlposition _ctrlGroupMenu select 2) - _posW) / 2;
		_posBoxX = (ctrlposition _ctrlGroupMenu select 0) + _posBoxW * 0.05;
		_posBoxW = _posBoxW * 0.9;
		_posBoxY = _ctrlGroupBodyPos select 1;

		_fnc_createText = {
			_ctrl = _display ctrlcreate ["RscStructuredText",-1,_ctrlGroupBody];
			_ctrl ctrlsetposition [0,_posY,_posW,0];
			_ctrl ctrlcommit 0;
			_ctrl ctrlsetstructuredtext parsetext format _this;
			_posH = ctrltextheight _ctrl;
			_ctrl ctrlsetposition [0,_posY,_posW,_posH];
			_ctrl ctrlcommit 0;
			_ctrl ctrlenable false;
			_ctrl
		};
		_fnc_createLineIn = {
			_ctrl = _display ctrlcreate ["RscText",-1,_ctrlGroupBody];
			_ctrl ctrlsetbackgroundcolor [0,0,0,0.1];
			_ctrl ctrlsetposition [0,_posY,_posW,pixelH];
			_ctrl ctrlcommit 0;
			_posY = _posY + _posW * 0.06;
		};

		{
			_x params [
				["_xMode","",[""]],
				["_xParams","",["",[]]]
			];

			_posH = 0;
			switch (_xMode) do {
				case "text": {
					_xParams params [["_text","",[""]]];
					["<t font='RobotoCondensedLight' color='#000000' shadow='0'>%1</t><br /><br />",_text] call _fnc_createText;
				};
				case "textbold": {
					_xParams params [["_text","",[""]]];
					["<t font='RobotoCondensed' color='#000000' shadow='0'>%1</t><br /><br />",_text] call _fnc_createText;
				};
				case "textlocked": {
					_xParams params [
						["_text","",[""]],
						["_prompt",localize "STR_A3_RscDisplayAANArticle_textLocked",[""]]
					];
					_ctrlText = ["<t font='RobotoCondensedLight' color='#000000' shadow='0'>%1</t><br /><br />",_text] call _fnc_createText;
					_ctrlOverlay = _display ctrlcreate ["RscPicture",-1,_ctrlGroupBody];
					_ctrlOverlay ctrlsettext "\a3\UI_F_Orange\Data\Displays\RscDisplayAANArticle\gradient_ca.paa";
					_ctrlOverlay ctrlsetposition ctrlposition _ctrlText;
					_ctrlOverlay ctrlcommit 0;

					_posY = _posY + _posH;
					_ctrlPrompt = [
						"<t font='RobotoCondensedLight' color='#000000' shadow='0' align='center'><br /><img image='\a3\UI_F_Orange\Data\Displays\RscDisplayAANArticle\lock_ca.paa' size='2' color='#33000000' /><br />%2</t><br /><br />",
						_text,
						_prompt
					] call _fnc_createText;
					_ctrlPrompt ctrlsetbackgroundcolor [0,0,0,0.1];
					_posY = _posY + _posW * 0.06;
				};
				case "image": {
					_xParams params [
						["_path","#(argb,8,8,3)color(1,0,1,1)",[""]],
						["_description","",[""]],
						["_author",localize "STR_A3_RscDisplayAANArticle_author",[""]]
					];
					_posHImage = _posW / 2 * 4/3;
					_ctrl = _display ctrlcreate ["RscPictureKeepAspect",-1,_ctrlGroupBody];
					_ctrl ctrlsettext _path;
					_ctrl ctrlsetposition [0,_posY,_posW,_posHImage];
					_ctrl ctrlcommit 0;
					_posY = _posY + _posHImage;
					["<t font='RobotoCondensedLight' color='#99000000' shadow='0' size='0.8'>%1 (%2)</t><br /><br />",_description,_author] call _fnc_createText;
				};
				case "box": {
					_xParams params [
						["_path","#(argb,8,8,3)color(1,0,1,1)",[""]],
						["_description","",[""]]
					];
					_posPictureH = _posBoxW / 2 * 4/3;

					_ctrlPicture = _display ctrlcreate ["RscPictureKeepAspect",-1,_ctrlDisplay];
					_ctrlPicture ctrlsettext _path;
					_ctrlPicture ctrlsetposition [_posBoxX,_posBoxY + _posY,_posBoxW,_posPictureH];
					_ctrlPicture ctrlcommit 0;

					_ctrlLine = _display ctrlcreate ["RscText",-1,_ctrlDisplay];
					_ctrlLine ctrlsetbackgroundcolor COLOR_AAN;
					_ctrlLine ctrlsetposition [_posBoxX,_posBoxY + _posY,_posBoxW,pixelH];
					_ctrlLine ctrlcommit 0;

					_ctrlDescription = _display ctrlcreate ["RscStructuredText",-1,_ctrlDisplay];
					_ctrlDescription ctrlsetbackgroundcolor [0,0,0,0.1];
					_ctrlDescription ctrlsetposition [_posBoxX,_posBoxY + _posY + _posPictureH,_posBoxW,0.1];
					_ctrlDescription ctrlcommit 0;
					_ctrlDescription ctrlsetstructuredtext parsetext format ["<a href=' ' colorLink='#000000' shadow='0'>%1<br /><t size='0.8' colorLink='#851414'>%2</t></a>",_description,localize "STR_A3_RscDisplayAANArticle_box"];
					_ctrlDescription call bis_fnc_ctrlFitToTextHeight;
				};
				case "title": {
					_xParams params [["_text","",[""]]];
					["<t font='RobotoCondensedBold' color='#000000' shadow='0' size='2'>%1</t><br />",_text] call _fnc_createText;
				};
				case "meta": {
					_xParams params [
						["_author","Catherine Bishop",[""]],
						["_date",[],[[]]],
						["_timeZone",localize "STR_A3_RscDisplayAANArticle_timezoneCET",[""]]
					];
					_date params [
						["_year",2035,[0]],
						["_month",2,[0]],
						["_day",24,[0]],
						["_hour",09,[0]],
						["_minute",3,[0]]
					];
					_yearCopyright = _year;
					_dateFormat = ((((((localize "STR_3DEN_Display3DENSave_textDate" + " ") splitstring "Y" joinstring "1") splitstring "m" joinstring "2") splitstring "d" joinstring "3") splitstring "H" joinstring "4") splitstring "M" joinstring "5");
					_dateText = format [_dateFormat,_year,_month,_day,_hour,if (_minute < 10) then {"0" + str _minute} else {_minute}];
					[
						"<t shadow='0' color='#000000'>%1  <t font='RobotoCondensedLight' color='#99000000'>%2%3</t></t><br /><br />",
						format [localize "STR_FORMAT_AUTHOR_SCRIPTED",format ["<t color='#851414'>%1</t>",_author]],
						_dateText,
						_timeZone
					] call _fnc_createText;
				};
				case "draft": {
					_xParams params [
						["_text","",[""]],
						["_colorBackground",[0.670588,0.835294,0.898039],[[]],3]
					];
					if (_text == "") then {_text = localize "str_a3_orange_aan_draft";};
					_colorText = _colorBackground vectormultiply 0.5;
					_ctrlDraft = [
						"%3<t color='%2' shadow='0' align='center'>%1</t><br />%3",
						_text,
						_colorText call bis_fnc_colorRGBtoHTML,
						"<t size='0.15' color='#00000000' shadow='0'>-<br /></t>"
					] call _fnc_createText;
					_ctrlDraft ctrlsetbackgroundcolor (_colorBackground + [1]);

					_ctrlDraftPos = ctrlposition _ctrlDraft;
					_ctrlDraftPos params ["_ctrlDraftPosX","_ctrlDraftPosY","_ctrlDraftPosW","_ctrlDraftPosH"];
					{
						_ctrlFrameLine = _display ctrlcreate ["RscText",-1,_ctrlGroupBody];
						_ctrlFrameLine ctrlsetbackgroundcolor (_colorText + [1]);
						_ctrlFrameLine ctrlsetposition _x;
						_ctrlFrameLine ctrlcommit 0;
					} foreach [
						[_ctrlDraftPosX,_ctrlDraftPosY,_ctrlDraftPosW,pixelH],
						[_ctrlDraftPosX,_ctrlDraftPosY + _ctrlDraftPosH - pixelH,_ctrlDraftPosW,pixelH],
						[_ctrlDraftPosX,_ctrlDraftPosY,pixelW,_ctrlDraftPosH],
						[_ctrlDraftPosX + _ctrlDraftPosW - pixelW,_ctrlDraftPosY,pixelW,_ctrlDraftPosH]
					];

					_posH = _posH + 0.02;
				};
				case "author": {
					_xParams params [
						["_path","#(argb,8,8,3)color(1,0,1,1)",[""]],
						["_description","",[""]]
					];
					[] call _fnc_createLineIn;
					_posH = _posW / 2 / 4 * 4/3;

					//--- Image
					_posImageW = _posH * 3/4;
					_ctrl = _display ctrlcreate ["RscPictureKeepAspect",-1,_ctrlGroupBody];
					_ctrl ctrlsettext _path;
					_ctrl ctrlsetposition [0,_posY,_posImageW,_posH];
					_ctrl ctrlcommit 0;

					//--- Text
					_ctrl = _display ctrlcreate ["RscStructuredText",-1,_ctrlGroupBody];
					_ctrl ctrlsetstructuredtext parsetext format ["<t font='RobotoCondensedLight' color='#99000000' shadow='0' size='0.8'>%1</t>",_description];
					_ctrl ctrlsetposition [_posImageW,_posY,_posW - _posImageW,_posH];
					_ctrl ctrlcommit 0;

					_posH = _posH + _posW * 0.06;
				};
				default {0}
			};

			_posY = _posY + _posH;

		} foreach _article;

		_ctrlGroupBodyPos set [3,_posY];
		_ctrlGroupBody ctrlsetposition _ctrlGroupBodyPos;
		_ctrlGroupBody ctrlcommit 0;

		//--- Footer
		_posY = (_ctrlGroupBodyPos select 1) + _posY;
		_ctrl = controlnull;
		{
			_ctrl = _display displayctrl _x;
			_ctrlPos = ctrlposition _ctrl;
			_ctrlPos set [1,_posY];
			_ctrl ctrlsetposition _ctrlPos;
			_ctrl ctrlcommit 0;
		} foreach [
			IDC_RSCDISPLAYAANARTICLE_BACKGROUNDBOTTOM,
			IDC_RSCDISPLAYAANARTICLE_GROUPFOOTER
		];

		//--- Copyright
		_posY = (ctrlposition _ctrl select 3) + _posY;

		_ctrl = _display displayctrl IDC_RSCDISPLAYAANARTICLE_BACKGROUNDCOPYRIGHT;
		_ctrlPos = ctrlposition _ctrl;
		_ctrlPos set [1,_posY];
		_ctrlPos set [3,(_ctrlPos select 3) max (safezoneH - (_ctrlPos select 1))];
		_ctrl ctrlsetposition _ctrlPos;
		_ctrl ctrlcommit 0;

		_ctrl = _display displayctrl IDC_RSCDISPLAYAANARTICLE_GROUPCOPYRIGHT;
		_ctrlPos = ctrlposition _ctrl;
		_ctrlPos set [1,_posY max (safezoneH - (_ctrlPos select 3))];
		_ctrl ctrlsetposition _ctrlPos;
		_ctrl ctrlcommit 0;

		_ctrlCopyright = _display displayctrl IDC_RSCDISPLAYAANARTICLE_COPYRIGHT;
		_ctrlCopyright ctrlsettext format [ctrltext _ctrlCopyright,_yearCopyright];

		//--- Black in
		_fade = missionnamespace getvariable ["RscDisplayOrangeArticle_fade",false];
		if (_fade) then {
			_ctrlBlack = _display ctrlcreate ["RscTextMulti",-1];
			_ctrlBlack ctrlsetbackgroundcolor [0,0,0,1];
			_ctrlBlack ctrlsetposition [safezoneXAbs,safezoneY,safezoneWAbs,safezoneH];
			_ctrlBlack ctrlcommit 0;
			_ctrlBlack ctrlsetfade 1;
			_ctrlBlack ctrlcommit 1;
			ctrlsetfocus _ctrlBlack;
			[_ctrlBlack] spawn {
				disableserialization;
				_ctrlBlack = _this select 0;
				waituntil {ctrlcommitted _ctrlBlack};
				ctrldelete _ctrlBlack;
			};
		};
	};
};
