#pragma bank 255

// Background: acilis3a

#include "gbs_types.h"
#include "data/tileset_0.h"
#include "data/tilemap_2.h"

BANKREF(background_2)

const struct background_t background_2 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_0),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_2),
    .cgb_tilemap_attr = { NULL, NULL }
};
