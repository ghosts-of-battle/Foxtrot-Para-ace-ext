#include "script_component.hpp"
class XtdGearModels {
    class CfgWeapons {
        class GFPGP_2_Opscore {
            options[] = { "color","flag","type","num" };
            label = "OpsCore";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "tan" };
                class blk {
                    label = "Black";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class tan {
                    label = "Tan";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
            class flag {
                alwaysSelectable = 1;
                values[] = { "aus","can","fr","ger","jap","ned","nor","pl","sk","tw","uk","us","none"};
                class aus {
                    label = "AUS";
                    image = "FPGP_2_helmets\icons\opscore_img_aus.paa";
                };
                class can {
                    label = "CAN";
                    image = "FPGP_2_helmets\icons\opscore_img_can.paa";
                };
                class fr {
                    label = "FR";
                    image = "FPGP_2_helmets\icons\opscore_img_fr.paa";
                };
                class ger {
                    label = "GER";
                    image = "FPGP_2_helmets\icons\opscore_img_ger.paa";
                };
                class jap {
                    label = "JAP";
                    image = "FPGP_2_helmets\icons\opscore_img_jap.paa";
                };
                class ned {
                    label = "NED";
                    image = "FPGP_2_helmets\icons\opscore_img_ned.paa";
                };
                class nor {
                    label = "nor";
                    image = "FPGP_2_helmets\icons\opscore_img_nod.paa";
                };
                class pl {
                    label = "PL";
                    image = "FPGP_2_helmets\icons\opscore_img_pl.paa";
                };
                class sk {
                    label = "SK";
                    image = "FPGP_2_helmets\icons\opscore_img_sk.paa";
                };
                class tw {
                    label = "TW";
                    image = "FPGP_2_helmets\icons\opscore_img_tw.paa";
                };
                class uk {
                    label = "UK";
                    image = "FPGP_2_helmets\icons\opscore_img_uk.paa";
                };
                class us {
                    label = "US";
                    image = "FPGP_2_helmets\icons\opscore_img_us.paa";
                };
                class none {
                    label = "NO";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = { "amp", "comtac" };
                class amp {
                    label = "AMP";
                };
                class comtac {
                    label = "COMTAC";
                };
            };
            class num {
                alwaysSelectable = 1;
                values[] = { "s1", "s2", "s3", "s4", "s5" };
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
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_1 {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "none";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_1_Aus {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "aus";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_1_can {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "can";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_1_fr {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "fr";
          type = "amp";
          num = "1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_1_ger {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ger";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_1_jap {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "jap";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_1_ned {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ned";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_1_nor {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "nor";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_1_pl {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "pl";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_1_sk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "sk";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_1_tw {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "tw";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_1_uk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "uk";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_1_us {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "us";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_2 {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "none";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_2_Aus {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "aus";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_2_can {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "can";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_2_fr {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "fr";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_2_ger {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ger";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_2_jap {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "jap";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_2_ned {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ned";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_2_nor {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "nor";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_2_pl {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "pl";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_2_sk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "sk";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_2_tw {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "tw";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_2_uk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "uk";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_2_us {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "us";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_3 {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "none";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_3_Aus {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "aus";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_3_can {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "can";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_3_fr {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "fr";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_3_ger {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ger";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_3_jap {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "jap";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_3_ned {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ned";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_3_nor {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "nor";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_3_pl {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "pl";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_3_sk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "sk";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_3_tw {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "tw";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_3_uk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "uk";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_3_us {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "us";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_4 {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "none";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_4_Aus {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "aus";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_4_can {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "can";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_4_fr {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "fr";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_4_ger {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ger";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_4_jap {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "jap";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_4_ned {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ned";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_4_nor {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "nor";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_4_pl {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "pl";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_4_sk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "sk";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_4_tw {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "tw";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_4_uk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "uk";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_4_us {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "us";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_5 {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "none";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_5_Aus {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "aus";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_5_can {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "can";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_5_fr {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "fr";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_5_ger {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ger";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_5_jap {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "jap";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_5_ned {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ned";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_5_nor {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "nor";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_5_pl {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "pl";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_5_sk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "sk";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_5_tw {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "tw";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_5_uk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "uk";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_amp_5_us {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "us";
          type = "amp";
          num = "s5";
      };

      class FPGP_2_OpscoreMar_Snakeskin_blk_Ct_1 {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "none";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_Ct_1_Aus {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "aus";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_Ct_1_can {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "can";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_Ct_1_fr {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "fr";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_Ct_1_ger {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ger";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_Ct_1_jap {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "jap";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_Ct_1_ned {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ned";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_Ct_1_nor {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "nor";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_Ct_1_pl {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "pl";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_Ct_1_sk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "sk";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_Ct_1_tw {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "tw";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_Ct_1_uk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "uk";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_Ct_1_us {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "us";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_2 {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "none";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_2_Aus {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "aus";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_2_can {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "can";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_2_fr {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "fr";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_2_ger {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ger";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_2_jap {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "jap";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_2_ned {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ned";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_2_nor {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "nor";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_2_pl {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "pl";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_2_sk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "sk";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_2_tw {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "tw";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_2_uk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "uk";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_2_us {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "us";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_3 {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "none";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_3_Aus {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "aus";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_3_can {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "can";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_3_fr {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "fr";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_3_ger {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ger";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_3_jap {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "jap";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_3_ned {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ned";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_3_nor {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "nor";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_3_pl {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "pl";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_3_sk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "sk";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_3_tw {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "tw";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_3_uk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "uk";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_3_us {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "us";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_4 {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "none";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_4_Aus {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "aus";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_4_can {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "can";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_4_fr {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "fr";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_4_ger {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ger";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_4_jap {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "jap";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_4_ned {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ned";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_4_nor {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "nor";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_4_pl {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "pl";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_4_sk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "sk";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_4_tw {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "tw";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_4_uk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "uk";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_4_us {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "us";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_5 {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "none";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_5_Aus {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "aus";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_5_can {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "can";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_5_fr {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "fr";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_5_ger {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ger";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_5_jap {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "jap";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_5_ned {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "ned";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_5_nor {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "nor";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_5_pl {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "pl";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_5_sk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "sk";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_5_tw {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "tw";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_5_uk {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "uk";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_blk_ct_5_us {
          model = "GFPGP_2_Opscore";
          color = "blk";
          flag = "us";
          type = "comtac";
          num = "s5";
      };

      class FPGP_2_OpscoreMar_Snakeskin_Tan_amp_1 {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "none";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_amp_1_Aus {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "aus";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_amp_1_can {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "can";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_amp_1_fr {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "fr";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_amp_1_ger {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ger";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_amp_1_jap {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "jap";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_amp_1_ned {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ned";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_amp_1_nor {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "nor";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_amp_1_pl {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "pl";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_amp_1_sk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "sk";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_amp_1_tw {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "tw";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_amp_1_uk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "uk";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_amp_1_us {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "us";
          type = "amp";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2 {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "none";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2_Aus {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "aus";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2_can {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "can";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2_fr {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "fr";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2_ger {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ger";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2_jap {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "jap";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2_ned {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ned";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2_nor {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "nor";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2_pl {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "pl";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2_sk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "sk";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2_tw {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "tw";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2_uk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "uk";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2_us {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "us";
          type = "amp";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_3 {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "none";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_3_Aus {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "aus";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_3_can {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "can";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_3_fr {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "fr";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_3_ger {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ger";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_3_jap {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "jap";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_3_ned {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ned";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_3_nor {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "nor";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_3_pl {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "pl";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_3_sk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "sk";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_3_tw {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "tw";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_3_uk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "uk";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_3_us {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "us";
          type = "amp";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_4 {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "none";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_4_Aus {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "aus";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_4_can {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "can";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_4_fr {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "fr";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_4_ger {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ger";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_4_jap {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "jap";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_4_ned {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ned";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_4_nor {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "nor";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_4_pl {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "pl";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_4_sk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "sk";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_4_tw {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "tw";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_4_uk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "uk";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_4_us {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "us";
          type = "amp";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_5 {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "none";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_5_Aus {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "aus";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_5_can {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "can";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_5_fr {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "fr";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_5_ger {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ger";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_5_jap {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "jap";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_5_ned {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ned";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_5_nor {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "nor";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_5_pl {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "pl";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_5_sk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "sk";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_5_tw {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "tw";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_5_uk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "uk";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_5_us {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "us";
          type = "amp";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Ct_1 {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "none";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Ct_1_Aus {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "aus";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Ct_1_can {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "can";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Ct_1_fr {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "fr";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Ct_1_ger {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ger";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Ct_1_jap {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "jap";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Ct_1_ned {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ned";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Ct_1_nor {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "nor";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Ct_1_pl {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "pl";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Ct_1_sk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "sk";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Ct_1_tw {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "tw";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Ct_1_uk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "uk";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_Ct_1_us {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "us";
          type = "comtac";
          num = "s1";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2 {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "none";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2_Aus {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "aus";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2_can {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "can";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2_fr {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "fr";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2_ger {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ger";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2_jap {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "jap";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2_ned {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ned";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2_nor {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "nor";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2_pl {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "pl";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2_sk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "sk";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2_tw {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "tw";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2_uk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "uk";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2_us {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "us";
          type = "comtac";
          num = "s2";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_3 {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "none";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_3_Aus {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "aus";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_3_can {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "can";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_3_fr {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "fr";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_3_ger {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ger";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_3_jap {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "jap";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_3_ned {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ned";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_3_nor {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "nor";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_3_pl {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "pl";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_3_sk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "sk";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_3_tw {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "tw";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_3_uk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "uk";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_3_us {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "us";
          type = "comtac";
          num = "s3";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_4 {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "none";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_4_Aus {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "aus";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_4_can {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "can";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_4_fr {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "fr";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_4_ger {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ger";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_4_jap {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "jap";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_4_ned {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ned";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_4_nor {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "nor";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_4_pl {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "pl";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_4_sk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "sk";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_4_tw {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "tw";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_4_uk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "uk";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_4_us {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "us";
          type = "comtac";
          num = "s4";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_5 {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "none";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_5_Aus {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "aus";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_5_can {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "can";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_5_fr {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "fr";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_5_ger {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ger";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_5_jap {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "jap";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_5_ned {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "ned";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_5_nor {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "nor";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_5_pl {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "pl";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_5_sk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "sk";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_5_tw {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "tw";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_5_uk {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "uk";
          type = "comtac";
          num = "s5";
      };
      class FPGP_2_OpscoreMar_Snakeskin_Tan_ct_5_us {
          model = "GFPGP_2_Opscore";
          color = "tan";
          flag = "us";
          type = "comtac";
          num = "s5";
      };

      
      


    };
};
