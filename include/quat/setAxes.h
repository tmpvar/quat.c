#ifndef __quat_setAxes__
#define __quat_setAxes__

#include "type.h"
#include "normalize.h"
#include "fromMat3.h"

float matr[9] = {
  1, 0, 0,
  0, 1, 0,
  0, 0, 1
};

/**
 * Sets the specified quaternion with values corresponding to the given
 * axes. Each axis is a vec3 and is expected to be unit length and
 * perpendicular to all other specified axes.
 *
 * @param {vec3} view  the vector representing the viewing direction
 * @param {vec3} right the vector representing the local "right" direction
 * @param {vec3} up    the vector representing the local "up" direction
 * @returns {quat} out
 */
quat quat_setAxes (quat out, float view[3], float right[3], float up[3]) {
  matr[0] = right[0];
  matr[3] = right[1];
  matr[6] = right[2];

  matr[1] = up[0];
  matr[4] = up[1];
  matr[7] = up[2];

  matr[2] = -view[0];
  matr[5] = -view[1];
  matr[8] = -view[2];

  return quat_normalize(out, quat_fromMat3(out, matr));
}

#endif
