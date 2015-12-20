# Copyright (C) 2015 The CyanogenMod Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

$(call inherit-product, device/lenovo/yt2/full_yt2.mk)

# Device identifier. This must come after all inclusions
PRODUCT_NAME := cm_yt2

PRODUCT_BUILD_PROP_OVERRIDES += \
    PRODUCT_NAME=YT2_8_row_wifi \
    BUILD_FINGERPRINT=Lenovo/YT2_8_row_wifi/YT2:5.0.1/LRX22C/YT2-830F_USR_S100191_1511230623_:user/release-keys \
    PRIVATE_BUILD_DESC="YT2_8_row_wifi-user 5.0.1 LRX22C YT2-830F_USR_S100191_1511230623_WW52_ROW release-keys"
