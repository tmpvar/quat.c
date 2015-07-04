#ifndef __quat_create__
#define __quat_create__

#include "type.h"
#include <vec4/create.h>

/**
 * Creates a new identity quat
 *
 * @returns {quat} a new quaternion
 */
quat create () {
  quat out = vec4_create();
  out[3] = 1;
  return out;
}

#endif
