#ifndef __quat_sqlerp__
#define __quat_sqlerp__

#include "type.h"
#include "slerp.h"

float temp1[4] = { 0, 0, 0, 1 };
float temp2[4] = { 0, 0, 0, 1 };

/**
 * Performs a spherical linear interpolation with two control points
 *
 * @param {quat} out the receiving quaternion
 * @param {quat} a the first operand
 * @param {quat} b the second operand
 * @param {quat} c the third operand
 * @param {quat} d the fourth operand
 * @param {Number} t interpolation amount
 * @returns {quat} out
 */
quat quat_sqlerp (quat out, quat a, quat b, quat c, quat d, float t) {
  quat_slerp(temp1, a, d, t);
  quat_slerp(temp2, b, c, t);
  quat_slerp(out, temp1, temp2, 2 * t * (1 - t));

  return out;
}

#endif
