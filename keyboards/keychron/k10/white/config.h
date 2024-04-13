/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 * Copyright 2020 Dimitris Mantzouranis <d3xter93@gmail.com>
 * Copyright 2022 Harrison Chan (Xelus)
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

#pragma once

// Connects each switch in the dip switch to the GPIO pin of the MCU
#define DIP_SWITCH_PINS { D6, D7 }

// LED Config
#define LED_MATRIX_ROW_PINS { C0, C1, C2, D4, C9, C10 }

// LED Matrix Effects
#define LED_MATRIX_FRAMEBUFFER_EFFECTS
#define LED_MATRIX_KEYPRESSES

#define MATRIX_UNSELECT_DRIVE_HIGH