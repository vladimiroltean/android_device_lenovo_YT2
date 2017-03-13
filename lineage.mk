# Inherit some common CM stuff.
$(call inherit-product, vendor/cm/config/common_full_tablet_wifionly.mk)

# Inherit device configuration
$(call inherit-product, device/lenovo/yt2/full_yt2.mk)

PRODUCT_DEVICE := yt2
PRODUCT_NAME := lineage_yt2
