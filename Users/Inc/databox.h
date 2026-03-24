#ifndef __DATA_BOX_H__
#define __DATA_BOX_H__

#include "stdint.h"
#include "stdbool.h"

typedef struct _message_BOX2GCU
{
    uint8_t  u8_header;
    uint8_t  u8_version;
    uint8_t  u8_mode_fire; 
    uint8_t  u8_control_manual; // 0 = Stop, 1 = Forward, 2 = Reverse
    uint8_t  u8_bullets_in_this_burst;

    bool     u8_safety_switch; // 0-Don't allow to fire
    bool     bo_is_start;
    bool     bo_is_load_amo;
    bool     bo_is_fire;
    bool     bo_is_bypass_lvdt;
    bool     bo_is_reset_burst;
 
    uint16_t u16_bullets_in_mag;

    uint32_t u32_timeout_single;
    uint32_t u32_timeout_semi_short;
    uint32_t u32_timeout_semi_long;
    uint32_t u32_timeout_full_auto;
    uint32_t u32_time_forward;
    uint32_t u32_time_reverse;
    uint16_t u16_crc;
} message_BOX2GCU_t;

typedef struct _message_GCU2BOX
{
    
} message_GCU2BOX_t;

#endif //__DATA_BOX_H__