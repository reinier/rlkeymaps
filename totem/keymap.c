#include "reinier.c"

#define KR_0_EXTRAL KC_TAB
#define KR_0_EXTRAR KC_ENTER 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_wrapper(
					QW18_BASE_L1, QW18_BASE_R1,
					QW18_BASE_L2, QW18_BASE_R2,
	KR_0_EXTRAL,    QW18_BASE_L3, QW18_BASE_R3,    KR_0_EXTRAR,
					QW18_BASE_LT, QW18_BASE_RT

     ),


   [1] = LAYOUT_wrapper(
					QW18_SYM1_L1, QW18_SYM1_R1,
					QW18_SYM1_L2, QW18_SYM1_R2,
	KC_TRNS,    	QW18_SYM1_L3, QW18_SYM1_R3,    KC_TRNS,
					QW18_SYM1_LT, QW18_SYM1_RT

      ),

   [2] = LAYOUT_wrapper(
					QW18_SYM2_L1, QW18_SYM2_R1,
					QW18_SYM2_L2, QW18_SYM2_R2,
	KC_TRNS,    	QW18_SYM2_L3, QW18_SYM2_R3,    KC_TRNS,
					QW18_SYM2_LT, QW18_SYM2_RT

       ),

   [3] = LAYOUT_wrapper(
					QW18_NUM_L1, QW18_NUM_R1,
					QW18_NUM_L2, QW18_NUM_R2,
	KC_TRNS,    	QW18_NUM_L3, QW18_NUM_R3,    KC_TRNS,
					QW18_NUM_LT, QW18_NUM_RT

        ),
    [4] = LAYOUT_wrapper(
					QW18_EXT_L1, QW18_EXT_R1,
					QW18_EXT_L2, QW18_EXT_R2,
	KC_TRNS,    	QW18_EXT_L3, QW18_EXT_R3,    KC_TRNS,
					QW18_EXT_LT, QW18_EXT_RT
        
          )
};
