#include "script_component.hpp"
class XtdGearModels {
    class CfgWeapons {
        class GFPGP_2_Assulycar {
            options[] = {"type"};
            label = "Assult Carrier";
            class type {
                alwaysSelectable = 1;
                values[] = { "s1", "s2", "s3", "s4", "s5" };
                label = "Style";
                class s1 {
                    label = "Style 1";
                };
                class s2 {
                    label = "Style 2";
                };
                class s3 {
                    label = "Style 3";
                };
                class s4 {
                    label = "Style 4";
                };
                class s5 {
                    label = "Style 5";
                };
                class s6 {
                    label = "Style 6";
                };
                class s7 {
                    label = "Style 7";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
      class FPGP_PC_Tan_7 {
          model = "GFPGP_2_Assulycar";
          type = "s7";
      };
      class FPGP_PC_Tan_5 {
          model = "GFPGP_2_Assulycar";
          type = "s5";
      };
      class FPGP_PC_Tan_4 {
          model = "GFPGP_2_Assulycar";
          type = "s4";
      };
      class FPGP_PC_Tan_3 {
          model = "GFPGP_2_Assulycar";
          type = "s3";
      };
      class FPGP_PC_Tan_2 {
          model = "GFPGP_2_Assulycar";
          type = "s2";
      };
      class FPGP_PC_Tan_1 {
          model = "GFPGP_2_Assulycar";
          type = "s1";
      };
      class FPGP_PC_Tan_6 {
          model = "GFPGP_2_Assulycar";
          type = "s6";
      };
    };
};
