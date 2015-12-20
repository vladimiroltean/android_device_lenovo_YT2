LOCAL_PATH := $(call my-dir)

ifeq ($(TARGET_BOARD_PLATFORM),baytrail)

include $(CLEAR_VARS)
LOCAL_COPY_HEADERS_TO := ufo

LOCAL_COPY_HEADERS := \
    graphics.h

include $(BUILD_COPY_HEADERS)

endif
