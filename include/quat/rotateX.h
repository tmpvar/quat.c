#ifndef __quat_rotateX__
#define __quat_rotateX__

#include "type.h"

/**
 * Rotates a quaternion by the given angle about the X axis
 *
 * @param {quat} out quat receiving operation result
 * @param {quat} a quat to rotate
 * @param {number} rad angle (in radians) to rotate
 * @returns {quat} out
 */
quat quat_rotateX (quat out, quat a, float rad) {
  rad *= 0.5;

  float ax = a[0], ay = a[1], az = a[2], aw = a[3],
    bx = sin(rad), bw = cos(rad);

  out[0] = ax * bw + aw * bx;
  out[1] = ay * bw + az * bx;
  out[2] = az * bw - ay * bx;
  out[3] = aw * bw - ax * bx;
  return out;
}

#endif
