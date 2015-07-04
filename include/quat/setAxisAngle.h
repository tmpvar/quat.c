#ifndef __quat_setAxisAngle__
#define __quat_setAxisAngle__

#include "type.h"

/**
 * Sets a quat from the given angle and rotation axis,
 * then returns it.
 *
 * @param {quat} out the receiving quaternion
 * @param {vec3} axis the axis around which to rotate
 * @param {Number} rad the angle in radians
 * @returns {quat} out
 **/
quat quat_setAxisAngle (quat out, float axis[3], float rad) {
  rad = rad * 0.5;
  float s = sinf(rad);
  out[0] = s * axis[0];
  out[1] = s * axis[1];
  out[2] = s * axis[2];
  out[3] = cosf(rad);
  return out;
}

#endif
