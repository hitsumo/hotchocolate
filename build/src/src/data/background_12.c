#pragma bank 255

// Background: yatak_battaniye

#include "gbs_types.h"
#include "data/tileset_8.h"
#include "data/tilemap_12.h"

BANKREF(background_12)

const struct background_t background_12 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_8),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_12),
    .cgb_tilemap_attr = { NULL, NULL }
};
