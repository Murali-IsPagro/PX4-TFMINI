/****************************************************************************
 *
 *   Copyright (C) 2013-2021 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file /home/murali/Documents/PX4-Autopilot/msg/px4io_status.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/px4io_status.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>
#include <lib/matrix/matrix/math.hpp>
#include <lib/mathlib/mathlib.h>

constexpr char __orb_px4io_status_fields[] = "\x89 timestamp;\x8a voltage_v;\x8a rssi_v;\x87 free_memory_bytes;\x87[8] pwm;\x87[8] pwm_disarmed;\x87[8] pwm_failsafe;\x87[8] pwm_rate_hz;\x87[18] raw_inputs;\x8c status_arm_sync;\x8c status_failsafe;\x8c status_fmu_initialized;\x8c status_fmu_ok;\x8c status_init_ok;\x8c status_outputs_armed;\x8c status_raw_pwm;\x8c status_rc_ok;\x8c status_rc_dsm;\x8c status_rc_ppm;\x8c status_rc_sbus;\x8c status_rc_st24;\x8c status_rc_sumd;\x8c status_safety_off;\x8c alarm_pwm_error;\x8c alarm_rc_lost;\x8c arming_failsafe_custom;\x8c arming_fmu_armed;\x8c arming_fmu_prearmed;\x8c arming_force_failsafe;\x8c arming_io_arm_ok;\x8c arming_lockdown;\x8c arming_termination_failsafe;\x86[3] _padding0;";

ORB_DEFINE(px4io_status, struct px4io_status_s, 141, __orb_px4io_status_fields, static_cast<uint8_t>(ORB_ID::px4io_status));


void print_message(const orb_metadata *meta, const px4io_status_s& message)
{
	if (sizeof(message) != meta->o_size) {
		printf("unexpected message size for %s: %zu != %i\n", meta->o_name, sizeof(message), meta->o_size);
		return;
	}
	orb_print_message_internal(meta, &message, true);
}
