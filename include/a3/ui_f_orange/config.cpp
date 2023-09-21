class CfgPatches
{
	class A3_Ui_F_Orange
	{
		author="$STR_A3_Bohemia_Interactive";
		name="Arma 3 Orange - User Interface";
		url="https://www.arma3.com";
		requiredAddons[]=
		{
			"A3_Data_F_Orange"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class RscStandardDisplay;
class RscText;
class RscStructuredText;
class RscPicture;
class RscPictureKeepAspect;
class RscActivePicture;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscButton;
class RscButtonMenuSteam;
class RscMapControl;
class RscVignette;
class RscInterlacingScreen;
class RscLadderPicture;
class VScrollbar;
class HScrollbar;
class DefaultFont
{
	font="RobotoCondensed";
};
class ScrollBar
{
	color[]={1,1,1,0.60000002};
	colorActive[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.30000001};
	thumb="\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	arrowEmpty="\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
	arrowFull="\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
	border="\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	shadow=0;
	scrollSpeed=0.059999999;
	width=0;
	height=0;
	autoScrollEnabled=0;
	autoScrollSpeed=-1;
	autoScrollDelay=5;
	autoScrollRewind=0;
};
class RscDisplayRead
{
	idd=2035;
	enableSimulation=1;
	closeOnMissionEnd=0;
	scriptName="RscDisplayRead";
	scriptPath="OrangeDisplays";
	onLoad="[""onLoad"",_this,""RscDisplayRead"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="[""onUnload"",_this,""RscDisplayRead"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class Controls
	{
		class Picture: RscPictureKeepAspect
		{
			idc=1001;
			text="#(argb,8,8,3)color(1,0,0,0.2)";
			x="safezoneX + 	5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y="safezoneY + 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="safezoneW - 2 * 	5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h="safezoneH - 2 * 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TextBackground: RscText
		{
			idc=1002;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
			colorBackground[]={0,0,0,0.69999999};
			fade=1;
		};
		class ButtonShowText: RscButtonMenu
		{
			idc=1004;
			show=0;
			text="$STR_A3_RscDisplayRead_ButtonShowText_text";
			x="safezoneX + safezoneW - (2 * 	6 + 1) * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y="safezoneY + safezoneH - 2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="(	6 - 0.1) * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h="(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onButtonClick="				_display = ctrlparent (_this select 0);				{					_ctrl = _display displayctrl _x;					_ctrl ctrlsetfade floor ((ctrlfade _ctrl + 1) % 2);					_ctrl ctrlcommit 0.1;				} foreach [1002,1003];			";
		};
		class ButtonClose: RscButtonMenuCancel
		{
			text="$STR_DISP_CLOSE";
			show=0;
			x="safezoneX + safezoneW - (	6 + 1) * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y="safezoneY + safezoneH - 2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="(	6 - 0.1) * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h="(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TextGroup: RscControlsGroup
		{
			idc=1003;
			x="0.5 - 0.5 * (safezoneH - 2 * 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			y="safezoneY + 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="safezoneH - 2 * 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			h="safezoneH - 2 * 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			fade=1;
			class Controls
			{
				class Text: RscStructuredText
				{
					idc=1005;
					x=0;
					y=0;
					w="safezoneH - 2 * 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					h="safezoneH - 2 * 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
};
class RscCustomInfoMineDetect
{
	iconMineUnknown="\a3\UI_F_Orange\Data\Displays\RscCustomInfoMineDetect\iconMineUnknown_ca.paa";
	sizeMineUnknown=4;
	sizeMine=1.5;
	fadeStart=1;
	fadeEnd=1.25;
};
class RscDisplayPhoneCallIncoming
{
	idd=-1;
	enableSimulation=1;
	scriptName="RscDisplayPhoneCallIncoming";
	scriptPath="OrangeDisplays";
	onLoad="[""onLoad"",_this,""RscDisplayPhoneCallIncoming"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="[""onUnload"",_this,""RscDisplayPhoneCallIncoming"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class Controls
	{
		class Call: RscControlsGroup
		{
			x="0.5 - 9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y="0.5 - 2.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc=38125;
			w="18 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h="6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Controls
			{
				class Background: RscText
				{
					idc=36825;
					x="0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y="0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="18 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="5.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[]={0.30000001,0.30000001,0.30000001,1};
				};
				class Title: RscText
				{
					idc=36826;
					x="0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y="0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="18 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[]={0.2,0.2,0.2,1};
				};
				class Logo: RscPicture
				{
					idc=37025;
					text="\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\logo_ca.paa";
					x="0.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y="0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Avatar: RscPicture
				{
					idc=37026;
					text="#(argb,8,8,3)color(1,1,1,1)";
					x="0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y="1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="3.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="3.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class BackgroundOK: RscPicture
				{
					idc=37027;
					text="\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\buttonBackground_ca.paa";
					x="13 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y="3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorText[]={0.18000001,0.72000003,0.18000001,1};
				};
				class IconOK: RscActivePicture
				{
					shadow=0;
					color[]={1,1,1,1};
					default=1;
					idc=37029;
					text="\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\ok_ca.paa";
					x="13 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y="3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class BackgroundCancel: RscPicture
				{
					idc=37028;
					text="\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\buttonBackground_ca.paa";
					x="15.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y="3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorText[]={0.89999998,0,0,1};
				};
				class IconCancel: IconOK
				{
					idc=37030;
					text="\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\cancel_ca.paa";
					x="15.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y="3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Name: RscText
				{
					shadow=0;
					idc=36827;
					text="$STR_A3_RscDisplayPhoneCallIncoming_Name";
					x="4.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y="1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="13 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
};
class RscDisplayOrangeChoice
{
	idd=-1;
	enableSimulation=1;
	scriptName="RscDisplayOrangeChoice";
	scriptPath="OrangeDisplays";
	onLoad="[""onLoad"",_this,""RscDisplayOrangeChoice"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="[""onUnload"",_this,""RscDisplayOrangeChoice"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class ControlsBackground
	{
		class MouseArea: RscText
		{
			idc=999;
			style=16;
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
	};
	class Controls
	{
		class Title: RscText
		{
			style=2;
			fade=1;
			shadow=0;
			idc=24334;
			text="$STR_a3_orange_hub_minedispenser_001_hbi_post_mine_dispenser_journalist_2";
			x="0 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y="5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
			w="40 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			h="2 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
			sizeEx="1.2 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
		};
		class Hover: RscPicture
		{
			fade=1;
			idc=24539;
			text="\a3\UI_F_Orange\Data\Displays\RscDisplayOrangeChoice\background_ca.paa";
			x="5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y="9.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
			w="5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			h="5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
			colorText[]={0,0,0,0.1};
		};
		class NATO: RscActivePicture
		{
			color[]={1,1,1,1};
			shadow=0;
			fade=1;
			idc=24534;
			text="\a3\UI_F_Orange\Data\Displays\RscDisplayOrangeChoice\faction_nato_ca.paa";
			x="10 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y="9.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
			w="5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			h="5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
		};
		class FIA: NATO
		{
			idc=24535;
			text="\a3\UI_F_Orange\Data\Displays\RscDisplayOrangeChoice\faction_fia_ca.paa";
			x="15 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y="9.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
			w="5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			h="5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
		};
		class CSAT: NATO
		{
			idc=24536;
			text="\a3\UI_F_Orange\Data\Displays\RscDisplayOrangeChoice\faction_csat_ca.paa";
			x="20 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y="9.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
			w="5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			h="5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
		};
		class AAF: NATO
		{
			idc=24537;
			text="\a3\UI_F_Orange\Data\Displays\RscDisplayOrangeChoice\faction_aaf_ca.paa";
			x="25 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y="9.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
			w="5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			h="5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
		};
		class None: NATO
		{
			idc=24538;
			text="\a3\UI_F_Orange\Data\Displays\RscDisplayOrangeChoice\faction_none_ca.paa";
			x="30 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y="9.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
			w="5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			h="5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
		};
		class DescriptionBackground: RscText
		{
			fade=1;
			idc=24335;
			x="8 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y="17.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
			w="24 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			h="5.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.25};
		};
		class Description: RscStructuredText
		{
			idc=24434;
			x="8.5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y="18 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
			w="23 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			h="1 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
		};
		class BlackOut: RscText
		{
			idc=998;
			colorBackground[]={0,0,0,1};
			fade=1;
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
	};
};
class RscDisplayAANArticle
{
	idd=-1;
	enableSimulation=1;
	scriptName="RscDisplayAANArticle";
	scriptPath="OrangeDisplays";
	onLoad="[""onLoad"",_this,""RscDisplayAANArticle"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="[""onUnload"",_this,""RscDisplayAANArticle"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class ControlsBackground
	{
		class Background: RscText
		{
			colorBackground[]={0.95999998,0.95999998,0.95999998,1};
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
		class BackgroundWhite: RscText
		{
			colorBackground[]={1,1,1,1};
			x="0.5 - 				((safezoneW / safezoneH) min 1.2) / 2";
			y="safezoneY";
			w="((safezoneW / safezoneH) min 1.2)";
			h="safezoneH";
		};
	};
	class Controls
	{
		class Display: RscControlsGroup
		{
			idc=12345;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
			class Controls
			{
				class BackgroundTop: RscText
				{
					x=0;
					y=0;
					w="safezoneW";
					idc=19513;
					h="4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[]={0.51999998,0.079999998,0.079999998,1};
				};
				class GroupMenu: RscControlsGroup
				{
					idc=20813;
					x="0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)	 + 		((safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2)";
					y="0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
					w="40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class Controls
					{
						class Logo: RscPicture
						{
							idc=19714;
							text="\a3\UI_F_Orange\Data\Displays\RscDisplayAANArticle\logo_ca.paa";
							x="0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y="0.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							w="8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							h="2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class WebMenu: RscStructuredText
						{
							idc=19616;
							x="8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y="0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							w="31.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							h="2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							colorBackground[]={0,0,0,0};
						};
						class BackgroundMenu: RscText
						{
							idc=19514;
							x="0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y="2.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							w="40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							h="1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							colorBackground[]={0,0,0,0.2};
						};
						class Menu: RscStructuredText
						{
							idc=19613;
							x="0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y="2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							w="40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							h="1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							colorBackground[]={0,0,0,0};
						};
						class BackgroundSubmenu: RscText
						{
							idc=19515;
							x="0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y="4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							w="40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							h="1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							colorBackground[]={0,0,0,0.1};
						};
						class Submenu: RscStructuredText
						{
							idc=19614;
							x="0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y="4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							w="40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							h="1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							colorBackground[]={0,0,0,0};
						};
					};
				};
				class GroupBody: RscControlsGroup
				{
					idc=20814;
					x="8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)	 + 		((safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2)";
					y="6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
					w="24 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="6.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class Controls
					{
					};
				};
				class BackgroundBottom: BackgroundTop
				{
					idc=19516;
					y="19 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
					h="3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class GroupFooter: RscControlsGroup
				{
					idc=20815;
					x="0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)	 + 		((safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2)";
					y="19 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
					w="40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class Controls
					{
						class LogoFooter: RscPicture
						{
							idc=19713;
							text="\a3\UI_F_Orange\Data\Displays\RscDisplayAANArticle\logo_ca.paa";
							x="0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y="0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							w="6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							h="1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class BackgroundMenuFooter: RscText
						{
							idc=19517;
							x="0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y="1.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							w="40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							h="1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							colorBackground[]={0,0,0,0.2};
						};
						class MenuFooter: RscStructuredText
						{
							idc=19615;
							x="0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y="1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							w="40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							h="1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							colorBackground[]={0,0,0,0};
						};
					};
				};
				class BackgroundCopyright: BackgroundTop
				{
					idc=19518;
					h="3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[]={0.30000001,0.30000001,0.30000001,1};
				};
				class GroupCopyright: RscControlsGroup
				{
					idc=20816;
					x="0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)	 + 		((safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2)";
					y="22 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
					w="40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class Controls
					{
						class ButtonClose: RscButtonMenuCancel
						{
							text="$STR_DISP_CLOSE";
							x="32 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y="1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							w="7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							h="1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class Copyright: RscText
						{
							shadow=0;
							font="RobotoCondensedLight";
							idc=19519;
							text="$STR_A3_RscDisplayAANArticle_Copyright";
							x="0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y="2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							w="30 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							h="1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							colorText[]={1,1,1,0.69999999};
							sizeEx="0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
					};
				};
			};
		};
	};
};
class RscTitles
{
	class RscPhoneCall
	{
		idd=-1;
		duration=10;
		fadeIn=0;
		scriptName="RscPhoneCall";
		scriptPath="OrangeTitles";
		onLoad="[""onLoad"",_this,""RscPhoneCall"",'OrangeTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload="[""onUnload"",_this,""RscPhoneCall"",'OrangeTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		class Controls
		{
			class Call: RscControlsGroup
			{
				x="safezoneX + safezoneW - 15.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y="safezoneY + safezoneH - 4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc=8868;
				w="14.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h="5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class Controls
				{
					class Background: RscText
					{
						idc=7568;
						x="0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y="0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w="14.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h="3.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[]={0.30000001,0.30000001,0.30000001,1};
					};
					class Title: RscText
					{
						idc=7569;
						x="0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y="0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w="14.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[]={0.2,0.2,0.2,1};
					};
					class Logo: RscPicture
					{
						idc=7768;
						text="\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\logo_ca.paa";
						x="0.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y="0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w="2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Avatar: RscPicture
					{
						idc=7769;
						text="#(argb,8,8,3)color(1,1,1,1)";
						x="0.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y="1.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w="2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h="1.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class BackgroundMute: RscPicture
					{
						idc=7770;
						text="\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\buttonBackground_ca.paa";
						x="10.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y="1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w="1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h="1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorText[]={0,0.60000002,0.89999998,1};
					};
					class IconMute: RscPicture
					{
						idc=7772;
						text="\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\mute_ca.paa";
						x="10.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y="1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w="1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h="1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class BackgroundCancel: RscPicture
					{
						idc=7771;
						text="\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\buttonBackground_ca.paa";
						x="12.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y="1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w="1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h="1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorText[]={1,0,0,1};
					};
					class IconCancel: RscPicture
					{
						idc=7773;
						text="\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\cancel_ca.paa";
						x="12.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y="1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w="1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h="1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Name: RscText
					{
						shadow=0;
						idc=7570;
						text="AAN - Catherine Bishop";
						x="2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y="1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w="8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						sizeEx="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Timestamp: RscText
					{
						font="RobotoCondensedLight";
						shadow=0;
						idc=7571;
						text="11:38";
						x="2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y="2.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w="6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorText[]={1,1,1,0.75};
						sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
		};
	};
	class SplashArma3
	{
		class Picture;
	};
	class SplashArma3Orange: SplashArma3
	{
		name="";
		duration=20;
		fadein=0.5;
		scriptName="SplashArma3Orange";
		scriptPath="OrangeTitles";
		onLoad="[""onLoad"",_this,""SplashArma3Orange"",'OrangeTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload="[""onUnload"",_this,""SplashArma3Orange"",'OrangeTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		class Picture: Picture
		{
			text="\a3\Data_F_Orange\Logos\arma3_orange_logoTitle_ca.paa";
		};
	};
};
class RscIngameUI
{
	class RscUnitInfoAirPlane;
	class RscUnitInfo;
	class RscOptics_UAV_06: RscUnitInfo
	{
		idd=300;
		onLoad="bis_fnc_uav_06_optics = compileFinal preprocessFileLineNumbers 'a3\UI_F_Orange\scripts\uav_06_optic.sqf';((_This select 0) displayctrl 6001) ctrladdeventhandler ['draw',{_this call bis_fnc_uav_06_optics}]";
		controls[]=
		{
			"WeaponInfoControlsGroupRight",
			"CA_BackgroundVehicle",
			"CA_BackgroundVehicleTitle",
			"CA_BackgroundVehicleTitleDark",
			"CA_BackgroundFuel",
			"CA_Vehicle",
			"CA_VehicleRole",
			"CA_HitZones",
			"CA_VehicleTogglesBackground",
			"CA_VehicleToggles",
			"CA_SpeedBackground",
			"CA_SpeedUnits",
			"CA_Speed",
			"CA_ValueFuel",
			"CA_AltBackground",
			"CA_AltUnits",
			"CA_Alt",
			"DriverOpticsGroup"
		};
		class DriverOpticsGroup: RscControlsGroup
		{
			idc=392;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class TextMag: RscText
				{
					idc=1001;
					sizeEx="0.03*SafezoneH";
					style=0;
					shadow=0;
					font="EtelkaMonospacePro";
					text="";
					x="0 * 		(0.01875 * SafezoneH)";
					y="0 * 		(0.025 * SafezoneH)";
					w="0 * 		(0.01875 * SafezoneH)";
					h="0 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,0};
				};
				class ValueTime: TextMag
				{
					idc=101;
					style=1;
					text="20:28:35";
					x="(2+6) * 		(0.01875 * SafezoneH)";
					y="(27.5+7.5) * 		(0.025 * SafezoneH)";
					w="4.8 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Position: TextMag
				{
					idc=189;
					style=1;
					text="20:28:35";
					x="(2+6) * 		(0.01875 * SafezoneH)";
					y="(28.5+7.5) * 		(0.025 * SafezoneH)";
					w="4.8 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class TextAlt: TextMag
				{
					idc=1002;
					text="    AGL";
					x="(15+0) * 		(0.01875 * SafezoneH)";
					y="(34+1) * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Alt: TextMag
				{
					idc=191;
					style=1;
					text="3825";
					x="(14+5) * 		(0.01875 * SafezoneH)";
					y="(34+1) * 		(0.025 * SafezoneH)";
					w="3.5 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class TextSpd: TextMag
				{
					idc=1003;
					text="    IAS";
					x="(15+0) * 		(0.01875 * SafezoneH)";
					y="(35+1) * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: TextMag
				{
					idc=190;
					style=1;
					text="120";
					x="(14+5) * 		(0.01875 * SafezoneH)";
					y="(35+1) * 		(0.025 * SafezoneH)";
					w="3.5 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Fuel: TextMag
				{
					idc=5001;
					style=1;
					sizeEx="0.04*SafezoneH";
					text="100%";
					x="(36+5) * 		(0.01875 * SafezoneH)";
					y="(34.5+1) * 		(0.025 * SafezoneH)";
					w="3.5 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class DirectionText: RscText
				{
					style=0;
					sizeEx="0.03*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					idc=1000;
					text="DIR:";
					x="(14+13) * 		(0.01875 * SafezoneH)";
					y="(35+1) * 		(0.025 * SafezoneH)";
					w="3 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class ValueDirection: RscText
				{
					style=1;
					sizeEx="0.03*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					idc=148;
					text="2456";
					x="(15+13) * 		(0.01875 * SafezoneH)";
					y="(35+1) * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class AnalogueHorizonStatic: RscPicture
				{
					idc=1200;
					text="\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\attitude_static.paa";
					x="2.8 * 		(0.01875 * SafezoneH)";
					y="28.55 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="5 * 		(0.025 * SafezoneH)";
				};
				class AnalogueHorizon: RscLadderPicture
				{
					idc=383;
					topValue=0;
					bottomValue=0;
					visibleRange=-1;
					text="\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\attitude.paa";
					x="2.8 * 		(0.01875 * SafezoneH)";
					y="28.7 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="5 * 		(0.025 * SafezoneH)";
				};
				class DrawMap: RscMapControl
				{
					idc=6001;
					type=101;
					x=0;
					y=0;
					w=0;
					h=0;
				};
				class RestrictedFire: RscPicture
				{
					idc=5002;
					text="\a3\UI_F_Orange\Data\IGUI\RscIngameUI\RestrictedFire_ca.paa";
					x="22.65 * 		(0.01875 * SafezoneH)";
					y="15.95 * 		(0.025 * SafezoneH)";
					w="8 * 		(0.01875 * SafezoneH)";
					h="8 * 		(0.025 * SafezoneH)";
				};
				class TextMinimalHeight: TextMag
				{
					idc=5003;
					style=2;
					text="WARNING";
					sizeEx="0.02*SafezoneH";
					colorText[]={1,0.5,0,1};
					x="23.15 * 		(0.01875 * SafezoneH)";
					y="5 * 		(0.025 * SafezoneH)";
					w="7 * 		(0.01875 * SafezoneH)";
					h="8.5 * 		(0.025 * SafezoneH)";
				};
				class TextMinimalHeight2: TextMinimalHeight
				{
					idc=5004;
					text="MIN SAFE ALT >25M";
					colorText[]={1,0.5,0,1};
					y="6 * 		(0.025 * SafezoneH)";
				};
				class Traverse: RscPicture
				{
					idc=5005;
					text="\a3\UI_F_Orange\Data\IGUI\RscIngameUI\TraverseIndicator_ca.paa";
					x="11.485 * 		(0.01875 * SafezoneH)";
					y="1.4 * 		(0.025 * SafezoneH)";
					w="30 * 		(0.01875 * SafezoneH)";
					h="5 * 		(0.025 * SafezoneH)";
				};
				class Elevation: RscPicture
				{
					idc=5006;
					text="\a3\UI_F_Orange\Data\IGUI\RscIngameUI\ElevationIndicator_ca.paa";
					x="2.75 * 		(0.01875 * SafezoneH)";
					y="6.55 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="20 * 		(0.025 * SafezoneH)";
				};
				class TraverseArrow: RscPicture
				{
					idc=5007;
					text="\a3\UI_F_Orange\Data\IGUI\RscIngameUI\TraverseArrow_ca.paa";
					x="12.95 * 		(0.01875 * SafezoneH)";
					y="5.2 * 		(0.025 * SafezoneH)";
					w="1 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class ElevationArrow: RscPicture
				{
					idc=5008;
					text="\a3\UI_F_Orange\Data\IGUI\RscIngameUI\ElevationArrow_ca.paa";
					x="6.9 * 		(0.01875 * SafezoneH)";
					y="7.55 * 		(0.025 * SafezoneH)";
					w="1 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscOptics_UAV_06_TGP: RscUnitInfo
	{
		idd=300;
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class RangeText: RscText
				{
					style=0;
					sizeEx="0.02*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					idc=1000;
					text="RANGE:";
					x="(14+13) * 		(0.01875 * SafezoneH)";
					y="(34+1) * 		(0.025 * SafezoneH)";
					w="3 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class ValueDistance: RscText
				{
					style=1;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					idc=198;
					text="2456";
					x="(17+13) * 		(0.01875 * SafezoneH)";
					y="(34+1) * 		(0.025 * SafezoneH)";
					w="3 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc=152;
					sizeEx="0.03*SafezoneH";
					style=0;
					shadow=0;
					font="EtelkaMonospacePro";
					text="DTV";
					x="48.2 * 		(0.01875 * SafezoneH)";
					y="8.4 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
					colorBackground[]={0,0,0,1};
				};
				class CA_FlirMode: CA_VisionMode
				{
					idc=153;
					text="BHOT";
					x="48.2 * 		(0.01875 * SafezoneH)";
					y="9.4 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc=158;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					x="31.1 * 		(0.01875 * SafezoneH)";
					y="12.85 * 		(0.025 * SafezoneH)";
					w="3.5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class TextTrackArea: ValueDistance
				{
					idc=194;
					style=2;
					sizeEx="0.038*SafezoneH";
					text="AREA";
					x="24.2 * 		(0.01875 * SafezoneH)";
					y="25.8 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class TextTrackPoint: TextTrackArea
				{
					idc=195;
					text="POINT";
				};
			};
		};
	};
};
class CfgScriptPaths
{
	OrangeDisplays="a3\UI_F_Orange\UI\Displays\";
	OrangeTitles="a3\UI_F_Orange\UI\RscTitles\";
};
class CfgVehicleIcons
{
	iconExplosiveUXO="\A3\ui_f_orange\Data\CfgVehicleIcons\iconExplosiveUXO_ca.paa";
};
class CfgLeaflets
{
	scriptWest="\a3\Functions_F_Orange\Scripts\leafletWest.sqf";
	scriptEast="\a3\Functions_F_Orange\Scripts\leafletEast.sqf";
	scriptGuer="\a3\Functions_F_Orange\Scripts\leafletGuer.sqf";
	scriptCiv="\a3\Functions_F_Orange\Scripts\leafletCiv.sqf";
	scriptCustom_01="\a3\Functions_F_Orange\Scripts\leafletCustom_01.sqf";
	scriptCustom_02="\a3\Functions_F_Orange\Scripts\leafletCustom_02.sqf";
	scriptCustom_03="\a3\Functions_F_Orange\Scripts\leafletCustom_03.sqf";
	scriptCustom_04="\a3\Functions_F_Orange\Scripts\leafletCustom_04.sqf";
	scriptCustom_05="\a3\Functions_F_Orange\Scripts\leafletCustom_05.sqf";
	scriptCustom_06="\a3\Functions_F_Orange\Scripts\leafletCustom_06.sqf";
	scriptCustom_07="\a3\Functions_F_Orange\Scripts\leafletCustom_07.sqf";
	scriptCustom_08="\a3\Functions_F_Orange\Scripts\leafletCustom_08.sqf";
	scriptCustom_09="\a3\Functions_F_Orange\Scripts\leafletCustom_09.sqf";
	scriptCustom_10="\a3\Functions_F_Orange\Scripts\leafletCustom_10.sqf";
	class Default
	{
		text="";
		texture="#(argb,8,8,3)color(1,1,1,1)";
	};
	class West
	{
		text="$STR_A3_ORANGE_CFGLEAFLETS_GENERIC";
		texture="\a3\UI_F_Orange\Data\CfgLeaflets\west_ca.paa";
		model="\a3\Weapons_F_Orange\Ammo\leaflet_05_west_f.p3d";
	};
	class East
	{
		text="$STR_A3_ORANGE_CFGLEAFLETS_GENERIC";
		texture="\a3\UI_F_Orange\Data\CfgLeaflets\east_ca.paa";
		model="\a3\Weapons_F_Orange\Ammo\leaflet_05_east_f.p3d";
	};
	class Guer
	{
		text="$STR_A3_ORANGE_CFGLEAFLETS_GENERIC";
		texture="\a3\UI_F_Orange\Data\CfgLeaflets\guer_ca.paa";
		model="\a3\Weapons_F_Orange\Ammo\leaflet_05_guer_f.p3d";
	};
	class Civ
	{
		text="$STR_A3_ORANGE_CFGLEAFLETS_GENERIC";
		texture="\a3\UI_F_Orange\Data\CfgLeaflets\civ_ca.paa";
		model="\a3\Weapons_F_Orange\Ammo\leaflet_05_civ_f.p3d";
	};
	class Custom_01: Default
	{
	};
	class Custom_02: Default
	{
	};
	class Custom_03: Default
	{
	};
	class Custom_04: Default
	{
	};
	class Custom_05: Default
	{
	};
	class Custom_06: Default
	{
	};
	class Custom_07: Default
	{
	};
	class Custom_08: Default
	{
	};
	class Custom_09: Default
	{
	};
	class Custom_10: Default
	{
	};
};
class CfgUIColors
{
	class GUI
	{
		class Presets
		{
			class PresetOrange
			{
				displayName="$STR_A3_CfgUIColors_PresetOrange";
				class Variables
				{
					BCG_RGB[]={0.89803898,0.40392199,0.133333,0.80000001};
					TITLETEXT_RGB[]={1,1,1,1};
				};
			};
		};
	};
	class Subtitles
	{
		displayName="$STR_A3_CfgUIColors_Subtitles";
		class Variables
		{
			class Background
			{
				displayName="$STR_A3_CfgUIColors_IGUI_Variables_BCG_RGB_0";
				previewBackground="\A3\ui_f\data\GUI\Cfg\UIDefault\preview_co.paa";
				preview="#(argb,8,8,3)color(1,1,1,1)";
				previewW="4 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				previewH="4 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class Text
			{
				displayName="$STR_A3_CfgUIColors_IGUI_Variables_TEXT_RGB_0";
				previewBackground="\A3\ui_f\data\GUI\Cfg\UIDefault\preview_co.paa";
				preview="\A3\ui_f\data\IGUI\Cfg\WeaponCursors\arifle_gs.paa";
				previewW="4 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				previewH="4 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
		};
		class Presets
		{
			class White
			{
				displayName="$STR_A3_CfgUIColors_Subtitles_White";
				default=1;
				class Variables
				{
					Background[]={0,0,0,0};
					Text[]={1,1,1,1};
				};
			};
			class WhiteBackground
			{
				displayName="$STR_A3_CfgUIColors_Subtitles_WhiteBackground";
				class Variables
				{
					Background[]={0,0,0,0.25};
					Text[]={1,1,1,1};
				};
			};
			class Yellow
			{
				displayName="$STR_A3_CfgUIColors_Subtitles_Yellow";
				class Variables
				{
					Background[]={0,0,0,0};
					Text[]={0.86666697,0.87843102,0.26274499,1};
				};
			};
			class YellowBackground
			{
				displayName="$STR_A3_CfgUIColors_Subtitles_YellowBackground";
				class Variables
				{
					Background[]={0,0,0,0.25};
					Text[]={0.86666697,0.87843102,0.26274499,1};
				};
			};
		};
	};
};
class CfgMainMenuSpotlight
{
	class Orange_Campaign
	{
		text="$STR_A3_Orange_Campaign_briefingName";
		picture="\a3\UI_F_Orange\Data\Displays\RscDisplayMain\spotlight_A_CO.paa";
		video="\a3\UI_f_Orange\Video\spotlight_A.ogv";
		action="uiNamespace setVariable ['RscDisplayCampaignLoad_filter', 'Orange']; ctrlActivate ((ctrlParent (_this select 0)) displayCtrl 101);";
		actionText="$STR_A3_RscDisplayMain_Spotlight_Play";
		condition="(language != 'German') && (571710 in (getDLCs 1)) && (getstatvalue 'BCFirstDeployment' == 1)";
		textIsQuote=1;
	};
	class Orange_CampaignGerman: Orange_Campaign
	{
		text="KAMPFMITTEL-<br />RÜCKSTÄNDE";
		condition="(language == 'German') && (571710 in (getDLCs 1)) && (getstatvalue 'BCFirstDeployment' == 1)";
		disableUpperCase=1;
	};
	class Orange_Showcase_IDAP
	{
		text="$STR_A3_orange_cfgmods_faction_idap_displayname_spotlight";
		picture="\a3\UI_F_Orange\Data\Displays\RscDisplayMain\spotlight_B_CO.paa";
		video="\a3\UI_f_Orange\Video\spotlight_B.ogv";
		action="ctrlActivate ((ctrlParent (_this select 0)) displayCtrl 150); ((findDisplay 2) displayCtrl 101) tvSetCurSel [23];";
		actionText="$STR_A3_RscDisplayMain_Spotlight_Play";
		condition="!(iskeyactive 'BIS_Faction_IDAP.Altis_done') && (getstatvalue 'BCFirstDeployment' == 1)";
		textIsQuote=0;
		disableUpperCase=1;
	};
	class Orange_Showcase_LoW
	{
		text="$STR_A3_orange_cfgmods_showcase_lawsofwar_displayname_spotlight";
		picture="\a3\UI_F_Orange\Data\Displays\RscDisplayMain\spotlight_C_CO.paa";
		video="\a3\UI_f_Orange\Video\spotlight_C.ogv";
		action="ctrlactivate ((ctrlparent (_this select 0)) displayctrl 150); ((findDisplay 2) displayCtrl 101) tvSetCurSel [24];";
		actionText="$STR_A3_RscDisplayMain_Spotlight_Play";
		condition="!(iskeyactive 'BIS_Showcase_LawsOfWar.VR_done') && (getstatvalue 'BCFirstDeployment' == 1)";
		textIsQuote=0;
		disableUpperCase=1;
	};
};
class CfgUnitInsignia
{
	class IDAP
	{
		displayName="$STR_a3_cfgfactionclasses_civ_idap_f0";
		texture="\a3\UI_F_Orange\Data\CfgUnitInsignia\IDAP_ca.paa";
		author="$STR_A3_Bohemia_Interactive";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class AAF_3rdRegiment
	{
		displayName="$STR_A3_CfgUnitInsignia_AAF_3rdRegiment";
		texture="\a3\UI_F_Orange\Data\CfgUnitInsignia\aaf_3rdRegiment_ca.paa";
		author="$STR_A3_Bohemia_Interactive";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
};
class CfgLocationTypes
{
	class Invisible
	{
		drawStyle="area";
		color[]={0,0,0,0};
		texture="#(argb,8,8,3)color(0,0,0,0)";
		font="RobotoCondensed";
		textSize=0;
		shadow=0;
	};
	class HistoricalSite
	{
		drawStyle="area";
		color[]={0,0,0,0};
		texture="#(argb,8,8,3)color(1,1,1,1)";
		font="RobotoCondensed";
		textSize=0;
		shadow=0;
	};
	class Strategic;
	class CivilDefense: Strategic
	{
		font="RobotoCondensed";
		icon="\A3\ui_f_orange\data\cfgmarkers\civildefense.paa";
		color[]={1,1,1,1};
	};
	class CulturalProperty: Strategic
	{
		font="RobotoCondensed";
		icon="\A3\ui_f_orange\data\cfgmarkers\culturalproperty_ca.paa";
		color[]={1,1,1,1};
	};
	class DangerousForces: Strategic
	{
		font="RobotoCondensed";
		icon="\A3\ui_f_orange\data\cfgmarkers\dangerousforces_ca.paa";
		color[]={1,1,1,1};
	};
	class SafetyZone: Strategic
	{
		font="RobotoCondensed";
		icon="\A3\ui_f_orange\data\cfgmarkers\safetyzone_ca.paa";
		color[]={1,1,1,1};
	};
};
class CfgMarkers
{
	class Flag;
	class flag_NATO;
	class loc_Tree;
	class b_unknown;
	class o_unknown;
	class n_unknown;
	class flag_IDAP: flag_NATO
	{
		name="$STR_A3_CfgMarkers_flag_IDAP";
		icon="\A3\ui_f_orange\data\cfgmarkers\IDAP_ca.paa";
		texture="\A3\ui_f_orange\data\cfgmarkers\IDAP_ca.paa";
		shadow=1;
	};
	class MemoryFragment: Flag
	{
		scope=0;
		icon="\A3\ui_f_orange\data\cfgmarkers\memoryFragment_ca.paa";
		color[]={1,1,1,1};
		shadow=0;
		markerClass="System";
	};
	class RedCrystal: flag_NATO
	{
		scope=2;
		name="$STR_A3_CfgMarkers_RedCrystal0";
		icon="\A3\ui_f_orange\data\cfgmarkers\redcrystal_ca.paa";
		texture="\A3\ui_f_orange\data\cfgmarkers\redcrystal_ca.paa";
		color[]={1,1,1,1};
		shadow=1;
	};
	class White: flag_NATO
	{
		scope=2;
		name="$STR_A3_CfgMarkers_White0";
		icon="\A3\ui_f_orange\data\cfgmarkers\white_ca.paa";
		texture="\A3\ui_f_orange\data\cfgmarkers\white_ca.paa";
		color[]={1,1,1,1};
		shadow=1;
	};
	class loc_CivilDefense: loc_Tree
	{
		size=24;
		name="$STR_A3_CfgMarkers_loc_CivilDefense0";
		icon="\A3\ui_f_orange\data\cfgmarkers\civildefense.paa";
		color[]={1,1,1,1};
	};
	class loc_CulturalProperty: loc_Tree
	{
		size=24;
		name="$STR_A3_CfgMarkers_loc_CulturalProperty0";
		icon="\A3\ui_f_orange\data\cfgmarkers\culturalproperty_ca.paa";
		color[]={1,1,1,1};
	};
	class loc_DangerousForces: loc_Tree
	{
		size=24;
		name="$STR_A3_CfgMarkers_loc_DangerousForces0";
		icon="\A3\ui_f_orange\data\cfgmarkers\dangerousforces_ca.paa";
		color[]={1,1,1,1};
	};
	class loc_SafetyZone: loc_Tree
	{
		size=24;
		name="$STR_A3_CfgMarkers_loc_SafetyZone0";
		icon="\A3\ui_f_orange\data\cfgmarkers\safetyzone_ca.paa";
		color[]={1,1,1,1};
	};
	class b_Ordnance: b_unknown
	{
		name="$STR_A3_CfgMarkers_NATO_Ordnance";
		icon="\a3\UI_F_Orange\Data\CfgMarkers\b_Ordnance_ca.paa";
		texture="\a3\UI_F_Orange\Data\CfgMarkers\b_Ordnance_ca.paa";
	};
	class o_Ordnance: o_unknown
	{
		name="$STR_A3_CfgMarkers_NATO_Ordnance";
		icon="\a3\UI_F_Orange\Data\CfgMarkers\o_Ordnance_ca.paa";
		texture="\a3\UI_F_Orange\Data\CfgMarkers\o_Ordnance_ca.paa";
	};
	class n_Ordnance: n_unknown
	{
		name="$STR_A3_CfgMarkers_NATO_Ordnance";
		icon="\a3\UI_F_Orange\Data\CfgMarkers\n_Ordnance_ca.paa";
		texture="\a3\UI_F_Orange\Data\CfgMarkers\n_Ordnance_ca.paa";
	};
};
class CfgNotifications
{
	class Warning
	{
		title="$STR_cfg_markers_warning";
		iconPicture="\a3\Ui_f\data\Map\Markers\Military\warning_ca.paa";
		color[]=
		{
			"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])",
			"(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])",
			"(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])",
			1
		};
		sound="defaultNotification";
		soundClose="defaultNotificationClose";
	};
	class WarningFireAreaRestricted: Warning
	{
		description="$STR_A3_CfgNotifications_WarningFireAreaRestricted";
	};
	class WarningFireAreaRestrictedDetonate: Warning
	{
		description="$STR_A3_CfgNotifications_WarningFireAreaRestrictedDetonate";
	};
};
class CfgTaskTypes
{
	class airdrop
	{
		displayName="airdrop";
		icon="\A3\ui_f_orange\data\cfgTaskTypes\airdrop_ca.paa";
	};
};
