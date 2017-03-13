# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base.mk)

# Device identifier. This must come after all inclusions
PRODUCT_NAME := full_yt2
PRODUCT_DEVICE := yt2
PRODUCT_BRAND := Lenovo
PRODUCT_MANUFACTURER := LENOVO
PRODUCT_MODEL := YOGA Tablet 2-830F

PRODUCT_BUILD_PROP_OVERRIDES += \
    PRODUCT_NAME=YT2_8_row_wifi \
    BUILD_FINGERPRINT=Lenovo/YT2_8_row_wifi/YT2:5.0.1/LRX22C/YT2-830F_USR_S100250_1601190639_:user/release-keys \
    PRIVATE_BUILD_DESC="YT2_8_row_wifi-user 5.0.1 LRX22C YT2-830F_USR_S100250_1601190639_WW52_ROW release-keys"

# Inherit from yt2 device
$(call inherit-product, device/lenovo/yt2/device.mk)

PRODUCT_RUNTIMES := runtime_libart_default

$(call inherit-product-if-exists, vendor/lenovo/yt2/yt2-vendor.mk)
