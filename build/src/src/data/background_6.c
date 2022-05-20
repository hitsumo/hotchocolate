#pragma bank 255

// Background: kitap

#include "gbs_types.h"
#include "data/tileset_3.h"
#include "data/tilemap_6.h"

BANKREF(background_6)

const struct background_t background_6 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(tileset_3),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(tilemap_6),
    .cgb_tilemap_attr = { NULL, NULL }
};
