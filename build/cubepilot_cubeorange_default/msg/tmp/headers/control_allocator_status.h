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

/* Auto-generated by genmsg_cpp from file /home/murali/Documents/PX4-Autopilot/msg/control_allocator_status.msg */


#pragma once


#include <uORB/uORB.h>


#ifndef __cplusplus
#define CONTROL_ALLOCATOR_STATUS_ACTUATOR_SATURATION_OK 0
#define CONTROL_ALLOCATOR_STATUS_ACTUATOR_SATURATION_UPPER_DYN 1
#define CONTROL_ALLOCATOR_STATUS_ACTUATOR_SATURATION_UPPER 2
#define CONTROL_ALLOCATOR_STATUS_ACTUATOR_SATURATION_LOWER_DYN -1
#define CONTROL_ALLOCATOR_STATUS_ACTUATOR_SATURATION_LOWER -2

#endif


#ifdef __cplusplus
struct __EXPORT control_allocator_status_s {
#else
struct control_allocator_status_s {
#endif
	uint64_t timestamp;
	float allocated_torque[3];
	float unallocated_torque[3];
	float allocated_thrust[3];
	float unallocated_thrust[3];
	bool torque_setpoint_achieved;
	bool thrust_setpoint_achieved;
	int8_t actuator_saturation[16];
	uint8_t _padding0[6]; // required for logger


#ifdef __cplusplus
	static constexpr int8_t ACTUATOR_SATURATION_OK = 0;
	static constexpr int8_t ACTUATOR_SATURATION_UPPER_DYN = 1;
	static constexpr int8_t ACTUATOR_SATURATION_UPPER = 2;
	static constexpr int8_t ACTUATOR_SATURATION_LOWER_DYN = -1;
	static constexpr int8_t ACTUATOR_SATURATION_LOWER = -2;

#endif
};

/* register this as object request broker structure */
ORB_DECLARE(control_allocator_status);


#ifdef __cplusplus
void print_message(const orb_metadata *meta, const control_allocator_status_s& message);
#endif
