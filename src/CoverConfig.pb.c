/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.4 at Sat Feb 22 19:19:51 2020. */

#include "CoverConfig.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t CoverConfigMessage_fields[12] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, CoverConfigMessage, position, position, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, CoverConfigMessage, direction, position, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, CoverConfigMessage, hand_pull, direction, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, CoverConfigMessage, weak_switch, hand_pull, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, CoverConfigMessage, power_switch, weak_switch, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, CoverConfigMessage, report_interval, power_switch, 0),
    PB_FIELD(  7, UINT32  , SINGULAR, STATIC  , OTHER, CoverConfigMessage, led, report_interval, 0),
    PB_FIELD( 20, UINT32  , SINGULAR, STATIC  , OTHER, CoverConfigMessage, pin_rx, led, 0),
    PB_FIELD( 21, UINT32  , SINGULAR, STATIC  , OTHER, CoverConfigMessage, pin_tx, pin_rx, 0),
    PB_FIELD( 22, UINT32  , SINGULAR, STATIC  , OTHER, CoverConfigMessage, pin_led, pin_tx, 0),
    PB_FIELD( 23, UINT32  , SINGULAR, STATIC  , OTHER, CoverConfigMessage, pin_btn, pin_led, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */
