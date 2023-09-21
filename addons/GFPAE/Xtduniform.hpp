#include "script_component.hpp"
class XtdGearModels {
    class CfgWeapons {
        class GFPGP_2_Opsuni {
            options[] = { "top","pants"};
            label = "Uniform";
            class pants {
                alwaysSelectable = 1;
                values[] = { "aor1","aor2","mcb","khk","mc","m81", "mcar", "mct","rgr","dts","ts","jeans" };
                label = "Uniform Pants";
                class aor1 {
                  label = "AOR1";
                  image = "z\aceax\addons\gearinfo\data\camo\aor1.paa";
                };
                class aor2 {
                  label = "AOR2";
                  image = "z\aceax\addons\gearinfo\data\camo\aor2.paa";
                };
                class mcb {
                  label = "MCB";
                  image = "z\aceax\addons\gearinfo\data\camo\mcb.paa";
                };
                class mct {
                  label = "MCT";
                  image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class mc {
                  label = "MC";
                  image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class jeans {
                  label = "Jeans";
                  image = "z\aceax\addons\gearinfo\data\camo\blu.paa";
                };
                class khk {
                  label = "KHK";
                  image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class m81 {
                  label = "M81";
                  image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
                class mcar {
                  label = "MCAR";
                  image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class rgr {
                  label = "RGR";
                  image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class dts {
                  label = "DTS";
                  image = "z\aceax\addons\gearinfo\data\camo\tsd.paa";
                };
                class ts {
                  label = "TS";
                  image = "z\aceax\addons\gearinfo\data\camo\tsw.paa";
                };
            };
            class top {
                alwaysSelectable = 1;
                values[] = { "aor1","aor2","mcb","khk","mc","m81", "mcar", "mct","rgr","dts","ts","flannel","Shirt1","Shirt2","Hoodie","tee"};
                label = "Uniform Top";
                class aor1 {
                  label = "AOR1";
                  image = "z\aceax\addons\gearinfo\data\camo\aor1.paa";
                };
                class aor2 {
                  label = "AOR2";
                  image = "z\aceax\addons\gearinfo\data\camo\aor2.paa";
                };
                class mcb {
                  label = "MCB";
                  image = "z\aceax\addons\gearinfo\data\camo\mcb.paa";
                };
                class mct {
                  label = "MCT";
                  image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class mc {
                  label = "MC";
                  image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class khk {
                  label = "KHK";
                  image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class m81 {
                  label = "M81";
                  image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
                class mcar {
                  label = "MCAR";
                  image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class rgr {
                  label = "RGR";
                  image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class dts {
                  label = "DTS";
                  image = "z\aceax\addons\gearinfo\data\camo\tsd.paa";
                };
                class ts {
                  label = "TS";
                  image = "z\aceax\addons\gearinfo\data\camo\tsw.paa";
                };
                class flannel {
                  label = "flannel";
                };
                class Shirt1 {
                  label = "Shirt1";
                };
                class Shirt2 {
                  label = "Shirt2";
                };
                class Hoodie {
                  label = "Hoodie";
                };
                class tee {
                  label = "Tee";
                };
            };
        };
    };
};

class XtdGearInfos {
  class CfgWeapons {
    class FPGP2_Uni_Jeans1_Cryetop_AOR1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "aor1";
      pants = "jeans";
    };
    class FPGP2_Uni_Jeans1_Cryetop_AOR2_1_U {
      model = "GFPGP_2_Opsuni";
      top = "aor2";
      pants = "jeans";
    };
    class FPGP2_Uni_Jeans1_Cryetop_dts_1_U {
      model = "GFPGP_2_Opsuni";
      top = "dts";
      pants = "jeans";
    };
    class FPGP2_Uni_Jeans1_Cryetop_khk_1_U {
      model = "GFPGP_2_Opsuni";
      top = "khk";
      pants = "jeans";
    };
    class FPGP2_Uni_Jeans1_Cryetop_m81_1_U {
      model = "GFPGP_2_Opsuni";
      top = "m81";
      pants = "jeans";
    };
    class FPGP2_Uni_Jeans1_Cryetop_mc_1_U {
      model = "GFPGP_2_Opsuni";
      top = "mc";
      pants = "jeans";
    };
    class FPGP2_Uni_Jeans1_Cryetop_mcar_1_U {
      model = "GFPGP_2_Opsuni";
      top = "mcar";
      pants = "jeans";
    };
    class FPGP2_Uni_Jeans1_Cryetop_mcb_1_U {
      model = "GFPGP_2_Opsuni";
      top = "mcb";
      pants = "jeans";
    };
    class FPGP2_Uni_Jeans1_Cryetop_mct_1_U {
      model = "GFPGP_2_Opsuni";
      top = "mct";
      pants = "jeans";
    };
    class FPGP2_Uni_Jeans1_Cryetop_rgr_1_U {
      model = "GFPGP_2_Opsuni";
      top = "rgr";
      pants = "jeans";
    };
    class FPGP2_Uni_Jeans1_Cryetop_ts_1_U {
      model = "GFPGP_2_Opsuni";
      top = "";
      pants = "jeans";
    };
    class FPGP2_Uni_Jeans1_flannel_1_U {
      model = "GFPGP_2_Opsuni";
      top = "flannel";
      pants = "jeans";
    };
    class FPGP2_Uni_Jeans1_Hoodie_U {
      model = "GFPGP_2_Opsuni";
      top = "Hoodie";
      pants = "jeans";
    };
    class FPGP2_Uni_Jeans1_Shirt1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt1";
      pants = "jeans";
    };
    class FPGP2_Uni_Jeans1_Shirt2_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt2";
      pants = "jeans";
    };
    class FPGP2_Uni_Jeans1_tee1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "tee";
      pants = "jeans";
    };
    class FPGP2_Uni_Crye_1_U {
      model = "GFPGP_2_Opsuni";
      top = "mc";
      pants = "mc";
    };
    class FPGP2_Uni_Crye_AOR1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "aor1";
      pants = "aor1";
    };
    class FPGP2_Uni_Crye_AOR2_1_U {
      model = "GFPGP_2_Opsuni";
      top = "aor2";
      pants = "aor2";
    };
    class FPGP2_Uni_Crye_dts_1_U {
      model = "GFPGP_2_Opsuni";
      top = "dts";
      pants = "dts";
    };
    class FPGP2_Uni_Crye_khk_1_U {
      model = "GFPGP_2_Opsuni";
      top = "khk";
      pants = "khk";
    };
    class FPGP2_Uni_Crye_m81_1_U {
      model = "GFPGP_2_Opsuni";
      top = "m81";
      pants = "m81";
    };
    class FPGP2_Uni_Crye_mcar_1_U {
      model = "GFPGP_2_Opsuni";
      top = "mcar";
      pants = "mcar";
    };
    class FPGP2_Uni_Crye_mcb_1_U {
      model = "GFPGP_2_Opsuni";
      top = "mcb";
      pants = "mcb";
    };
    class FPGP2_Uni_Crye_mct_1_U {
      model = "GFPGP_2_Opsuni";
      top = "mct";
      pants = "mct";
    };
    class FPGP2_Uni_Crye_rgr_1_U {
      model = "GFPGP_2_Opsuni";
      top = "rgr";
      pants = "rgr";
    };
    class FPGP2_Uni_Crye_ts_1_U {
      model = "GFPGP_2_Opsuni";
      top = "ts";
      pants = "ts";
    };
    class FPGP2_Uni_Cryepants_AOR1_flannel_1_U {
      model = "GFPGP_2_Opsuni";
      top = "flannel";
      pants = "aor1";
    };
    class FPGP2_Uni_Cryepants_AOR1_Hoodie_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Hoodie";
      pants = "aor1";
    };
    class FPGP2_Uni_Cryepants_AOR1_Shirt1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt1";
      pants = "aor1";
    };
    class FPGP2_Uni_Cryepants_AOR1_Shirt2_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt2";
      pants = "aor1";
    };
    class FPGP2_Uni_Cryepants_AOR1_Tee1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "tee";
      pants = "aor1";
    };
    class FPGP2_Uni_Cryepants_AOR2_flannel_1_U {
      model = "GFPGP_2_Opsuni";
      top = "flannel";
      pants = "aor2";
    };
    class FPGP2_Uni_Cryepants_AOR2_Hoodie_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Hoodie";
      pants = "aor2";
    };
    class FPGP2_Uni_Cryepants_AOR2_Shirt1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt1";
      pants = "aor2";
    };
    class FPGP2_Uni_Cryepants_AOR2_Shirt2_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt2";
      pants = "aor2";
    };
    class FPGP2_Uni_Cryepants_AOR2_Tee1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "tee";
      pants = "aor2";
    };
    class FPGP2_Uni_Cryepants_dts_flannel_1_U {
      model = "GFPGP_2_Opsuni";
      top = "flannel";
      pants = "dts";
    };
    class FPGP2_Uni_Cryepants_dts_Hoodie_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Hoodie";
      pants = "dts";
    };
    class FPGP2_Uni_Cryepants_dts_Shirt1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt1";
      pants = "dts";
    };
    class FPGP2_Uni_Cryepants_dts_Shirt2_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt2";
      pants = "dts";
    };
    class FPGP2_Uni_Cryepants_dts_Tee1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "tee";
      pants = "dts";
    };
    class FPGP2_Uni_Cryepants_flannel_1_U {
      model = "GFPGP_2_Opsuni";
      top = "flannel";
      pants = "mc";
    };
    class FPGP2_Uni_Cryepants_Hoodie_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Hoodie";
      pants = "mc";
    };
    class FPGP2_Uni_Cryepants_Shirt1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt1";
      pants = "mc";
    };
    class FPGP2_Uni_Cryepants_Shirt2_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt2";
      pants = "mc";
    };
    class FPGP2_Uni_Cryepants_Tee1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "tee";
      pants = "mc";
    };
    class FPGP2_Uni_Cryepants_khk_flannel_1_U {
      model = "GFPGP_2_Opsuni";
      top = "flannel";
      pants = "khk";
    };
    class FPGP2_Uni_Cryepants_khk_Hoodie_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Hoodie";
      pants = "khk";
    };
    class FPGP2_Uni_Cryepants_khk_Shirt1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt1";
      pants = "khk";
    };
    class FPGP2_Uni_Cryepants_khk_Shirt2_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt2";
      pants = "khk";
    };
    class FPGP2_Uni_Cryepants_khk_Tee1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "tee";
      pants = "khk";
    };
    class FPGP2_Uni_Cryepants_m81_flannel_1_U {
      model = "GFPGP_2_Opsuni";
      top = "flannel";
      pants = "m81";
    };
    class FPGP2_Uni_Cryepants_m81_Hoodie_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Hoodie";
      pants = "m81";
    };
    class FPGP2_Uni_Cryepants_m81_Shirt1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt1";
      pants = "m81";
    };
    class FPGP2_Uni_Cryepants_m81_Shirt2_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt2";
      pants = "m81";
    };
    class FPGP2_Uni_Cryepants_m81_Tee1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "tee";
      pants = "m81";
    };
    class FPGP2_Uni_Cryepants_mcar_flannel_1_U {
      model = "GFPGP_2_Opsuni";
      top = "flannel";
      pants = "mcar";
    };
    class FPGP2_Uni_Cryepants_mcar_Hoodie_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Hoodie";
      pants = "mcar";
    };
    class FPGP2_Uni_Cryepants_mcar_Shirt1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt1";
      pants = "mcar";
    };
    class FPGP2_Uni_Cryepants_mcar_Shirt2_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt2";
      pants = "mcar";
    };
    class FPGP2_Uni_Cryepants_mcar_Tee1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "tee";
      pants = "mcar";
    };
    class FPGP2_Uni_Cryepants_mcb_flannel_1_U {
      model = "GFPGP_2_Opsuni";
      top = "flannel";
      pants = "mcb";
    };
    class FPGP2_Uni_Cryepants_mcb_Hoodie_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Hoodie";
      pants = "mcb";
    };
    class FPGP2_Uni_Cryepants_mcb_Shirt1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt1";
      pants = "mcb";
    };
    class FPGP2_Uni_Cryepants_mcb_Shirt2_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt2";
      pants = "mcb";
    };
    class FPGP2_Uni_Cryepants_mcb_Tee1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "tee";
      pants = "mcb";
    };
    class FPGP2_Uni_Cryepants_mct_flannel_1_U {
      model = "GFPGP_2_Opsuni";
      top = "flannel";
      pants = "mct";
    };
    class FPGP2_Uni_Cryepants_mct_Hoodie_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Hoodie";
      pants = "mct";
    };
    class FPGP2_Uni_Cryepants_mct_Shirt1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt1";
      pants = "mct";
    };
    class FPGP2_Uni_Cryepants_mct_Shirt2_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt2";
      pants = "mct";
    };
    class FPGP2_Uni_Cryepants_mct_Tee1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "tee";
      pants = "mct";
    };
    class FPGP2_Uni_Cryepants_rgr_flannel_1_U {
      model = "GFPGP_2_Opsuni";
      top = "flannel";
      pants = "rgr";
    };
    class FPGP2_Uni_Cryepants_rgr_Hoodie_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Hoodie";
      pants = "rgr";
    };
    class FPGP2_Uni_Cryepants_rgr_Shirt1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt1";
      pants = "rgr";
    };
    class FPGP2_Uni_Cryepants_rgr_Shirt2_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt2";
      pants = "rgr";
    };
    class FPGP2_Uni_Cryepants_rgr_Tee1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "tee";
      pants = "rgr";
    };
    class FPGP2_Uni_Cryepants_ts_flannel_1_U {
      model = "GFPGP_2_Opsuni";
      top = "flannel";
      pants = "ts";
    };
    class FPGP2_Uni_Cryepants_ts_Hoodie_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Hoodie";
      pants = "ts";
    };
    class FPGP2_Uni_Cryepants_ts_Shirt1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt1";
      pants = "ts";
    };
    class FPGP2_Uni_Cryepants_ts_Shirt2_1_U {
      model = "GFPGP_2_Opsuni";
      top = "Shirt2";
      pants = "ts";
    };
    class FPGP2_Uni_Cryepants_ts_Tee1_1_U {
      model = "GFPGP_2_Opsuni";
      top = "tee";
      pants = "ts";
    };
  };
};
