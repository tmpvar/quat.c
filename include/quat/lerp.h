/**
 * Performs a linear interpolation between two quat's
 *
 * @param {quat} out the receiving quaternion
 * @param {quat} a the first operand
 * @param {quat} b the second operand
 * @param {Number} t interpolation amount between the two inputs
 * @returns {quat} out
 * @function
 */
#ifndef __quat_lerp__
#define __quat_lerp__

#include <vec4/lerp.h>

#define quat_lerp vec4_lerp

#endif
