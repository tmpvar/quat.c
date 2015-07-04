#ifndef __quat_conjugate__
#define __quat_conjugate__

#include "type.h"

/**
 * Calculates the conjugate of a quat
 * If the quaternion is normalized, this quat is faster than quat.inverse and produces the same result.
 *
 * @param {quat} out the receiving quaternion
 * @param {quat} a quat to calculate conjugate of
 * @returns {quat} out
 */
quat quat_conjugate (quat out, quat a) {
  out[0] = -a[0];
  out[1] = -a[1];
  out[2] = -a[2];
  out[3] = a[3];
  return out;
}

#endif
