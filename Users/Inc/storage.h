#ifndef __CONFIG_STORAGE_H__
#define __CONFIG_STORAGE_H__

#include "stdint.h"

typedef struct _config_timing
{
    uint32_t u32_timeout_single;
    uint32_t u32_timeout_semi_short;
    uint32_t u32_timeout_semi_long;
    uint32_t u32_timeout_full_auto;
    uint32_t u32_time_forward;
    uint32_t u32_time_reverse;
} config_timing_t;
#endif //__CONFIG_STORAGE_H__