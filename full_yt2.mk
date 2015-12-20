#
# Copyright 2015 The CyanogenMod Project
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
#

# Inherit some common CM stuff.
$(call inherit-product, vendor/cm/config/common_full_tablet_wifionly.mk)

# Inherit from yt2 device
$(call inherit-product, device/lenovo/yt2/device.mk)

PRODUCT_RUNTIMES := runtime_libart_default

PRODUCT_NAME := full_yt2
PRODUCT_DEVICE := yt2
PRODUCT_BRAND := Lenovo
PRODUCT_MODEL := YOGA Tablet 2-830F
PRODUCT_MANUFACTURER := LENOVO
