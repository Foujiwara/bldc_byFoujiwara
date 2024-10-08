/*
	Copyright 2018 Benjamin Vedder	benjamin@vedder.se

	This file is part of the VESC firmware.

	The VESC firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The VESC firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef HW_R350_V2
#define HW_R350_V2

#ifdef R350_V2_no_limit
#else
#define R350_V2
#endif 

#define MCCONF_L_MAX_VOLTAGE	85.0

#define MCCONF_L_MAX_ABS_CURRENT		300	// The maximum absolute current above which a fault is generated
#define MCCONF_FOC_SAMPLE_V0_V7			false	// Run control loop in both v0 and v7 (requires phase shunts)
#define MCCONF_L_IN_CURRENT_MAX			100	// Input current limit in Amperes (Upper)
#define MCCONF_L_IN_CURRENT_MIN			-50.0	// Input current limit in Amperes (Lower)

#include "hw_ubox_100_core.h"

#endif /* HW_R350_V2_H_ */
