#ifndef __quat_rotationTo__
#define __quat_rotationTo__

#include <vec3/type.h>
#include <vec3/dot.h>
#include <vec3/cross.h>
#include <vec3/length.h>
#include <vec3/normalize.h>

#include "normalize.h"
#include "setAxisAngle.h"

float tmpvec3[3]   = { 0, 0, 0 };
float xUnitVec3[3] = { 1, 0, 0 };
float yUnitVec3[3] = { 0, 1, 0 };

/**
 * Sets a quaternion to represent the shortest rotation from one
 * vector to another.
 *
 * Both vectors are assumed to be unit length.
 *
 * @param {quat} out the receiving quaternion.
 * @param {vec3} a the initial vector
 * @param {vec3} b the destination vector
 * @returns {quat} out
 */
quat quat_rotationTo (quat out, float a[3], float b[3]) {
  float dot = vec3_dot(a, b);
  if (dot < -0.999999) {
    vec3_cross(tmpvec3, xUnitVec3, a);
    if (vec3_length(tmpvec3) < 0.000001) {
      vec3_cross(tmpvec3, yUnitVec3, a);
    }
    vec3_normalize(tmpvec3, tmpvec3);
    quat_setAxisAngle(out, tmpvec3, M_PI);
    return out;
  } else if (dot > 0.999999) {
    out[0] = 0;
    out[1] = 0;
    out[2] = 0;
    out[3] = 1;
    return out;
  } else {
    vec3_cross(tmpvec3, a, b);
    out[0] = tmpvec3[0];
    out[1] = tmpvec3[1];
    out[2] = tmpvec3[2];
    out[3] = 1 + dot;
    return quat_normalize(out, out);
  }
}

#endif
