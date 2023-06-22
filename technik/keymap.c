/* Copyright 2020 Boardsource
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "reinier.c"
#define LAYOUT_wrapper(...) LAYOUT_ortho_4x12(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_wrapper(
    QW18_BASE_L1,  RGB_SPD,        RGB_SPI,   QW18_BASE_R1,
    QW18_BASE_L2,  RGB_SAD,        RGB_SAI,   QW18_BASE_R2,
    QW18_BASE_L3,  RGB_HUD,        RGB_HUI,   QW18_BASE_R3,
    RGB_TOG, RGB_M_B, QW18_BASE_LT, RGB_VAD, RGB_VAI, QW18_BASE_RT,   RGB_RMOD,   RGB_MOD
  ),

  [1] = LAYOUT_wrapper(
    QW18_SYM1_L1,  _______,        _______,   QW18_SYM1_R1,
    QW18_SYM1_L2,  _______,        _______,   QW18_SYM1_R2,
    QW18_SYM1_L3,  _______,        _______,   QW18_SYM1_R3,
    _______,   _______,   QW18_SYM1_LT,  _______, _______,  QW18_SYM1_RT,   _______,   _______
  ),

  [2] = LAYOUT_wrapper(
    QW18_SYM2_L1,  _______,        _______,   QW18_SYM2_R1,
    QW18_SYM2_L2,  _______,        _______,   QW18_SYM2_R2,
    QW18_SYM2_L3,  _______,        _______,   QW18_SYM2_R3,
    _______,   _______,   QW18_SYM2_LT,  _______, _______,  QW18_SYM2_RT,   _______,   _______
  ),
  
  [3] = LAYOUT_wrapper(
    QW18_NUM_L1,  _______,        _______,   QW18_NUM_R1,
    QW18_NUM_L2,  _______,        _______,   QW18_NUM_R2,
    QW18_NUM_L3,  _______,        _______,   QW18_NUM_R3,
    _______,   _______,   QW18_NUM_LT,  _______, _______,  QW18_NUM_RT,   _______,   _______
  ),
  
  [4] = LAYOUT_wrapper(
    QW18_EXT_L1,  _______,        _______,   QW18_EXT_R1,
    QW18_EXT_L2,  _______,        _______,   QW18_EXT_R2,
    QW18_EXT_L3,  _______,        _______,   QW18_EXT_R3,
    _______,   _______,   QW18_EXT_LT,  _______, _______,  QW18_EXT_RT,   _______,   _______
  )
};
