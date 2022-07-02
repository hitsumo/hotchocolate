#pragma bank 255

// Background: logo

#include "gbs_types.h"
#include "data/tileset_6.h"
#include "data/tilemap_9.h"

BANKREF(background_9)

const struct background_t background_9 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_6),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_9),
    .cgb_tilemap_attr = { NULL, NULL }
};
