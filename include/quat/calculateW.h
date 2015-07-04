#ifndef __quat_calculateW__
#define __quat_calculateW__

#include "type.h"
#include <math.h>

/**
 * Calculates the W component of a quat from the X, Y, and Z components.
 * Assumes that quaternion is 1 unit in length.
 * Any existing W component will be ignored.
 *
 * @param {quat} out the receiving quaternion
 * @param {quat} a quat to calculate W component of
 * @returns {quat} out
 */
quat quat_calculateW (quat out, quat a) {
  float x = a[0], y = a[1], z = a[2];

  out[0] = x;
  out[1] = y;
  out[2] = z;
  out[3] = sqrt(fabs(1.0 - x * x - y * y - z * z));
  return out;
}

#endif
