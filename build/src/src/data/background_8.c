#pragma bank 255

// Background: mum

#include "gbs_types.h"
#include "data/tileset_5.h"
#include "data/tilemap_8.h"

BANKREF(background_8)

const struct background_t background_8 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_5),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_8),
    .cgb_tilemap_attr = { NULL, NULL }
};
