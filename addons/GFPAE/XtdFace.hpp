#include "script_component.hpp"
class XtdGearModels {
    class CfgGlasses {
        class GFPGP_2_Faceware {
            options[] = {"eye","neck"};
            label = "FaceWare";
            class eye {
                alwaysSelectable = 1;
                values[] = { "none", "ESS", "gatorz" };
                label = "Shades";
                class none {
                    label = "None";
                };
                class ESS {
                    label = "ESS";
                };
                class gatorz {
                    label = "gatorz";
                };
            };
            class neck {
                alwaysSelectable = 1;
                values[] = { "none", "blk", "cbr","rgr" };
                label = "Shemagh";
                class none {
                    label = "None";
                };
                class rgr {
                  label = "RGR";
                  image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class cbr {
                  label = "Coyote brown";
                  image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class blk {
                    label = "Black";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgGlasses {
      class FPGP2_Headgear_Face_ESS_1 {
        model = "GFPGP_2_Faceware";
        eye = "ESS";
        neck = "none";
      };
      class FPGP2_Headgear_Face_Shemagh_BLK_ess_1 {
        model = "GFPGP_2_Faceware";
        eye = "ESS";
        neck = "blk";
      };
      class FPGP2_Headgear_Face_Shemagh_cbr_ess_1 {
        model = "GFPGP_2_Faceware";
        eye = "ESS";
        neck = "cbr";
      };
      class FPGP2_Headgear_Face_Shemagh_rgr_ess_1 {
        model = "GFPGP_2_Faceware";
        eye = "ESS";
        neck = "rgr";
      };
      class FPGP2_Headgear_Face_gatorz_1 {
        model = "GFPGP_2_Faceware";
        eye = "gatorz";
        neck = "none";
      };
      class FPGP2_Headgear_Face_Shemagh_BLK_gatorz_1 {
        model = "GFPGP_2_Faceware";
        eye = "gatorz";
        neck = "blk";
      };
      class FPGP2_Headgear_Face_Shemagh_cbr_gatorz_1 {
        model = "GFPGP_2_Faceware";
        eye = "gatorz";
        neck = "cbr";
      };
      class FPGP2_Headgear_Face_Shemagh_rgr_gatorz_1 {
        model = "GFPGP_2_Faceware";
        eye = "gatorz";
        neck = "rgr";
      };
      class FPGP2_Headgear_Face_Shemagh_rgr_1 {
        model = "GFPGP_2_Faceware";
        eye = "none";
        neck = "rgr";
      };
      class FPGP2_Headgear_Face_Shemagh_cbr_1 {
        model = "GFPGP_2_Faceware";
        eye = "none";
        neck = "cbr";
      };
      class FPGP2_Headgear_Face_Shemagh_BLK_1 {
        model = "GFPGP_2_Faceware";
        eye = "none";
        neck = "blk";
      };
    };
};
