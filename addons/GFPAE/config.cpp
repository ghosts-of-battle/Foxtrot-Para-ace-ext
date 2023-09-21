#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"FPGP_2_Headgear", "FPGP_2_Uni", "FPGP_2_Vests"};
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "XtdFace.hpp"
#include "XtdHead.hpp"
#include "Xtduniform.hpp"
#include "XtdVest.hpp"