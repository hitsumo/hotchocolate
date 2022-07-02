#pragma bank 255

// Background: placeholder

#include "gbs_types.h"
#include "data/tileset_7.h"
#include "data/tilemap_11.h"

BANKREF(background_11)

const struct background_t background_11 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_7),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_11),
    .cgb_tilemap_attr = { NULL, NULL }
};
