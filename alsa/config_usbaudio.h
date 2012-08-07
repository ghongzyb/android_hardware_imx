
/*
 * Copyright (C) 2011 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/* Copyright (C) 2012 Freescale Semiconductor, Inc. */

#ifndef ANDROID_INCLUDE_IMX_CONFIG_USBAUDIO_H
#define ANDROID_INCLUDE_IMX_CONFIG_USBAUDIO_H

#include "audio_hardware.h"

/* ALSA cards for IMX, these must be defined according different board / kernel config*/
static struct audio_card  usbaudio_card = {
    .name = "USB Device",
    .supported_devices   = AUDIO_DEVICE_OUT_ANLG_DOCK_HEADSET | AUDIO_DEVICE_OUT_DGTL_DOCK_HEADSET | 
                           AUDIO_DEVICE_IN_ANLG_DOCK_MIC,
    .defaults            = NULL,
    .bt_output           = NULL,
    .speaker_output      = NULL,
    .hs_output           = NULL,
    .earpiece_output     = NULL,
    .vx_hs_mic_input     = NULL,
    .mm_main_mic_input   = NULL,
    .vx_main_mic_input   = NULL,
    .mm_hs_mic_input     = NULL,
    .vx_bt_mic_input     = NULL,
    .mm_bt_mic_input     = NULL,
    .card                = 0,
};

#endif  /* ANDROID_INCLUDE_IMX_CONFIG_USBAUDIO_H */