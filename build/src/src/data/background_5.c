#pragma bank 255

// Background: canta_ici

#include "gbs_types.h"
#include "data/tileset_2.h"
#include "data/tilemap_5.h"

BANKREF(background_5)

const struct background_t background_5 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_2),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_5),
    .cgb_tilemap_attr = { NULL, NULL }
};
