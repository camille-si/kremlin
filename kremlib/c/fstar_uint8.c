#include "FStar_UInt8.h"

Prims_string FStar_UInt8_to_string(uint8_t i) {
  char *buf = KRML_HOST_MALLOC(24);
  KRML_HOST_SNPRINTF(buf, 24, "%"PRIu8, i);
  return buf;
}

uint8_t FStar_UInt8_uint_to_t(krml_checked_int_t x) {
  /* TODO bounds check */
  return x;
}

krml_checked_int_t FStar_UInt8_v(uint8_t x) {
  return x;
}
