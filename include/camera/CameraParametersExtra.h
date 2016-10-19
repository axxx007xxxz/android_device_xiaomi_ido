/*
 * Copyright (C) 2016 The CyanogenMod Project
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

#define CAMERA_PARAMETERS_EXTRA_C \
const char CameraParameters::KEY_VIDEO_SNAPSHOT_SUPPORTED[] = "video-snapshot-supported"; \
const char CameraParameters::KEY_VIDEO_STABILIZATION[] = "video-stabilization"; \
const char CameraParameters::KEY_VIDEO_STABILIZATION_SUPPORTED[] = "video-stabilization-supported"; \
const char CameraParameters::KEY_QC_LONGSHOT_SUPPORTED[] = "longshot-supported"; \
const char CameraParameters::KEY_QC_MANUAL_FOCUS_POSITION[] = "manual-focus-position"; \
const char CameraParameters::KEY_QC_MANUAL_FOCUS_POS_TYPE[] = "manual-focus-pos-type"; \
const char CameraParameters::FOCUS_MODE_CONTINUOUS_PICTURE[] = "continuous-picture"; \
const char CameraParameters::FOCUS_MODE_CONTINUOUS_VIDEO[] = "continuous-video"; \
const char CameraParameters::FOCUS_MODE_AUTO[] = "auto"; \
const char CameraParameters::FOCUS_MODE_INFINITY[] = "infinity"; \
const char CameraParameters::FOCUS_MODE_MACRO[] = "macro"; \
const char CameraParameters::FOCUS_MODE_FIXED[] = "fixed"; \
const char CameraParameters::LIGHTFX_LOWLIGHT[] = "low-light"; \
const char CameraParameters::ANTIBANDING_OFF[] = "off"; \

#define CAMERA_PARAMETERS_EXTRA_H \
    static const char KEY_VIDEO_SNAPSHOT_SUPPORTED[]; \
    static const char KEY_VIDEO_STABILIZATION[]; \
    static const char KEY_VIDEO_STABILIZATION_SUPPORTED[]; \
    static const char KEY_QC_LONGSHOT_SUPPORTED[]; \
    static const char KEY_QC_MANUAL_FOCUS_POSITION[]; \
    static const char KEY_QC_MANUAL_FOCUS_POS_TYPE[]; \
    static const char FOCUS_MODE_CONTINUOUS_PICTURE[]; \
    static const char FOCUS_MODE_CONTINUOUS_VIDEO[]; \
    static const char FOCUS_MODE_AUTO[]; \
    static const char FOCUS_MODE_INFINITY[]; \
    static const char FOCUS_MODE_MACRO[]; \
    static const char FOCUS_MODE_FIXED[]; \
    static const char LIGHTFX_LOWLIGHT[]; \
    static const char ANTIBANDING_OFF[]; \
