#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"gfpae_main"};
        authors[] = {""};
        VERSION_CONFIG;
    };
};

// information on the whole mod (only needed once)
class CfgMods {
    class PREFIX {
        dir = "gfpae";
        name = "My Cool Mod";
        
        author = "gfpae Team";                    // probably shown somewhere in the mods menu, but probably ignored by CBA/HEMTT

        picture         = "gobp2_256.paa";       // Picture displayed from the expansions menu. Optimal size is 2048x1024
        hideName        = "false";              // Hide the extension name in main menu and extension menu
        hidePicture     = "false";              // Hide the extension picture in the extension menu

        action          = "https://ghostsofbattle.com"; // Website URL, that can accessed from the expansions menu 
        actionName      = "Web Site";              // label of button/tooltip in extension menu
        description     = "Ghosts of Battle Custom Mod - Here you will return, you will not die in war"; // Probably in context with action

        // Color used for DLC stripes and backgrounds (RGBA)
        dlcColor[] =
        {
            1,
            0.0,
            0.86,
            1
        };
    };
};

