#ifndef __quat_rotateZ__
#define __quat_rotateZ__

#include "type.h"

/**
 * Rotates a quaternion by the given angle about the Z axis
 *
 * @param {quat} out quat receiving operation result
 * @param {quat} a quat to rotate
 * @param {number} rad angle (in radians) to rotate
 * @returns {quat} out
 */
quat quat_rotateZ (quat out, quat a, float rad) {
  rad *= 0.5;

  float ax = a[0], ay = a[1], az = a[2], aw = a[3],
    bz = sinf(rad), bw = cosf(rad);

  out[0] = ax * bw + ay * bz;
  out[1] = ay * bw - ax * bz;
  out[2] = az * bw + aw * bz;
  out[3] = aw * bw - az * bz;
  return out;
}

#endif
