#ifndef __quat_rotateY__
#define __quat_rotateY__

#include "type.h"

/**
 * Rotates a quaternion by the given angle about the Y axis
 *
 * @param {quat} out quat receiving operation result
 * @param {quat} a quat to rotate
 * @param {number} rad angle (in radians) to rotate
 * @returns {quat} out
 */
quat quat_rotateY (quat out, quat a, float rad) {
  rad *= 0.5;

  float ax = a[0], ay = a[1], az = a[2], aw = a[3],
    by = sinf(rad), bw = cosf(rad);

  out[0] = ax * bw - az * by;
  out[1] = ay * bw + aw * by;
  out[2] = az * bw + ax * by;
  out[3] = aw * bw - ay * by;
  return out;
}

#endif
