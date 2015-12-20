/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _VXD_DRV_H_
#define _VXD_DRV_H_
#include "i915_drv.h"
#include <linux/io-mapping.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/kref.h>
#include <ttm/ttm_object.h>
#include "psb_ttm_fence_driver.h"
#include "psb_ttm_userobj_api.h"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include "ttm/ttm_bo_driver.h"
#include "ttm/ttm_lock.h"
#include "psb_video_drv.h"
#include "psb_msvdx.h"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_PMPOLICY_NOPM 0
#define PSB_PMPOLICY_CLOCKGATING 1
#define PSB_PMPOLICY_POWERDOWN 2
#define PSB_BOTTOM_HALF_WQ 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_BOTTOM_HALF_TQ 2
#define PSB_MSVDX_CLOCKGATING 0x2064
#define PSB_MMU_CACHED_MEMORY 0x0001
#define PSB_MMU_RO_MEMORY 0x0002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_MMU_WO_MEMORY 0x0004
#define PSB_PDE_MASK 0x003FFFFF
#define PSB_PDE_SHIFT 22
#define PSB_PTE_SHIFT 12
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_PTE_VALID 0x0001
#define PSB_PTE_WO 0x0002
#define PSB_PTE_RO 0x0004
#define PSB_PTE_CACHED 0x0008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IS_MDFLD(dev) (0)
#define IS_MRFLD(dev) (0)
enum APM_VXD_STATUS {
  VXD_APM_STS_D0 = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  VXD_APM_STS_D1,
  VXD_APM_STS_D2,
  VXD_APM_STS_D3
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct psb_context;
struct psb_validate_buffer;
struct psb_video_ctx;
struct drm_psb_uopt {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int pad;
};
struct drm_psb_private {
  struct drm_global_reference mem_global_ref;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct ttm_bo_global_ref bo_global_ref;
  int has_global;
  struct drm_device * dev;
  struct ttm_object_device * tdev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct ttm_fence_device fdev;
  struct ttm_bo_device bdev;
  struct ttm_lock ttm_lock;
  struct vm_operations_struct * ttm_vm_ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int has_fence_device;
  int has_bo_device;
  struct drm_psb_dev_info_arg dev_info;
  struct drm_psb_uopt uopt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t sequence[PSB_NUM_ENGINES];
  uint32_t last_sequence[PSB_NUM_ENGINES];
  uint32_t last_submitted_seq[PSB_NUM_ENGINES];
  struct psb_mmu_driver * mmu;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct psb_mmu_pd * pf_pd;
  struct list_head video_ctx;
  spinlock_t video_ctx_lock;
  uint8_t * msvdx_reg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  atomic_t msvdx_mmu_invaldc;
  void * msvdx_private;
  spinlock_t irqmask_lock;
  spinlock_t sequence_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int have_mem_mmu;
  int have_mem_mmu_tiling;
  struct mutex temp_mem;
  spinlock_t reloc_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int rel_mapped_pages;
  wait_queue_head_t rel_mapped_queue;
  struct drm_psb_sizes_arg sizes;
  uint32_t fuse_reg_value;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint8_t platform_rev_id;
  int rpm_enabled;
  struct mutex reset_mutex;
  struct mutex cmdbuf_mutex;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  atomic_t val_seq;
  struct psb_context decode_context;
  spinlock_t watchdog_lock;
  struct timer_list watchdog_timer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct work_struct watchdog_wq;
  struct work_struct msvdx_watchdog_wq;
  struct work_struct topaz_watchdog_wq;
  struct work_struct hdmi_hotplug_wq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct work_struct hdmi_audio_wq;
  atomic_t hotplug_wq_done;
  int timer_available;
  int count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  char buf[256];
  struct pci_dev * pci_root;
  struct mutex vxd_pm_mutex;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_D_GENERAL (1 << 0)
#define PSB_D_INIT (1 << 1)
#define PSB_D_IRQ (1 << 2)
#define PSB_D_ENTRY (1 << 3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_D_HV (1 << 4)
#define PSB_D_DBI_BF (1 << 5)
#define PSB_D_PM (1 << 6)
#define PSB_D_RENDER (1 << 7)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_D_REG (1 << 8)
#define PSB_D_MSVDX (1 << 9)
#define PSB_D_TOPAZ (1 << 10)
#define VSP_D_LOG (1 << 11)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VSP_D_PERF (1 << 12)
#define PSB_D_WARN (1 << 13)
#define PSB_D_MIPI (1 << 14)
#define VXD_TTM_MMAP_OFFSET_START DRM_PSB_FILE_PAGE_OFFSET
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VXD_TTM_MMAP_OFFSET_END (DRM_PSB_FILE_PAGE_OFFSET + 0x10000000)
#define PSB_DEBUG_GENERAL(_fmt,_arg...) PSB_DEBUG(PSB_D_GENERAL, _fmt, ##_arg)
#define PSB_DEBUG_INIT(_fmt,_arg...) PSB_DEBUG(PSB_D_INIT, _fmt, ##_arg)
#define PSB_DEBUG_IRQ(_fmt,_arg...) PSB_DEBUG(PSB_D_IRQ, _fmt, ##_arg)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_DEBUG_ENTRY(_fmt,_arg...) PSB_DEBUG(PSB_D_ENTRY, _fmt, ##_arg)
#define PSB_DEBUG_HV(_fmt,_arg...) PSB_DEBUG(PSB_D_HV, _fmt, ##_arg)
#define PSB_DEBUG_DBI_BF(_fmt,_arg...) PSB_DEBUG(PSB_D_DBI_BF, _fmt, ##_arg)
#define PSB_DEBUG_PM(_fmt,_arg...) PSB_DEBUG(PSB_D_PM, _fmt, ##_arg)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_DEBUG_RENDER(_fmt,_arg...) PSB_DEBUG(PSB_D_RENDER, _fmt, ##_arg)
#define PSB_DEBUG_REG(_fmt,_arg...) PSB_DEBUG(PSB_D_REG, _fmt, ##_arg)
#define PSB_DEBUG_MSVDX(_fmt,_arg...) PSB_DEBUG(PSB_D_MSVDX, _fmt, ##_arg)
#define PSB_DEBUG_TOPAZ(_fmt,_arg...) PSB_DEBUG(PSB_D_TOPAZ, _fmt, ##_arg)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VSP_DEBUG(_fmt,_arg...) PSB_DEBUG(VSP_D_LOG, "VSP: " _fmt, ##_arg)
#define VSP_PERF(_fmt,_arg...) PSB_DEBUG(VSP_D_PERF, "VSP PERFORMANCE: " _fmt, ##_arg)
#define PSB_DEBUG_WARN(_fmt,_arg...) PSB_DEBUG(PSB_D_WARN, _fmt, ##_arg)
#define PSB_DEBUG_MIPI(_fmt,_arg...) PSB_DEBUG(PSB_D_MIPI, _fmt, ##_arg)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IS_MSVDX_MEM_TILE(dev) 1
#if DRM_DEBUG_CODE
#define PSB_DEBUG(_flag,_fmt,_arg...) do { if(unlikely((_flag) & drm_psb_debug)) printk(KERN_INFO "[psb:0x%02x:%s] " _fmt, _flag, __func__, ##_arg); } while(0)
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_DEBUG(_fmt,_arg...) do { } while(0)
#endif
struct psb_fpriv {
  struct ttm_object_file * tfile;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  bool dsr_blocked;
};
struct psb_fpriv * psb_fpriv(struct drm_file * file_priv);
struct drm_psb_private * psb_priv(struct drm_device * dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_UDELAY(usec) do { if(drm_psb_cpurelax == 0) DRM_UDELAY(usec / drm_psb_udelaydivider); else cpu_relax(); \
} while(0)
struct psb_fpriv * psb_fpriv(struct drm_file * file_priv);
struct drm_psb_private * psb_priv(struct drm_device * dev);
#define OSPM_VIDEO_DEC_ISLAND 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
