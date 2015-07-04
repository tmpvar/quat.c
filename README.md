# quat.c

Part of a fork of [@toji](http://github.com/toji)'s
[gl-matrix](http://github.com/toji/gl-matrix) split into smaller pieces: this
package contains `glMatrix.quat`.

## Install

`npm install `

## Usage

__main.c__
```c
#include <quat/create.h>

int main() {
  quat q = quat_create();
}
```

compiled with `gcc main.c -o main -Inode_modules/quat.c/include -Inode_modules/quat.c/node_modules/vec3.c/include -Inode_modules/quat.c/node_modules/vec4.c/include`

### with cmake

__CMakeLists.txt__
```
cmake_minimum_required(VERSION 3.2)
project (quat-test)
file(GLOB CMAKE_INCLUDES "node_modules/*/CMakeLists.txt")
include(${CMAKE_INCLUDES})
add_executable(main main.c)
```

## API

  - [quat_add()](#addoutquat-aquat-bquat)
  - [quat_calculateW()](#calculatewoutquat-aquat)
  - [quat_copy()](#copyoutquat-aquat)
  - [quat_conjugate()](#conjugateoutquat-aquat)
  - [quat_copy()](#copyoutquat-aquat)
  - [quat_create()](#create)
  - [quat_dot()](#dotaquat-bquat)
  - [quat_fromMat3()](#frommat3outquat-mmat3)
  - [quat_fromValues()](#fromvaluesxnumber-ynumber-znumber-wnumber)
  - [quat_identity()](#identityoutquat)
  - [quat_invert()](#invertoutquat-aquat)
  - [quat_length()](#lengthaquat)
  - [quat_lerp()](#lerpoutquat-aquat-bquat-tnumber)
  - [quat_multiply()](#multiplyoutquat-aquat-bquat)
  - [quat_normalize()](#normalizeoutquat-aquat)
  - [quat_rotateX()](#rotatexoutquat-aquat-radnumber)
  - [quat_rotateY()](#rotateyoutquat-aquat-radnumber)
  - [quat_rotateZ()](#rotatezoutquat-aquat-radnumber)
  - [quat_rotationTo()](#rotationtooutquat-avec3-bvec3)
  - [quat_scale()](#scaleoutquat-aquat-bnumber)
  - [quat_set()](#setoutquat-xnumber-ynumber-znumber-wnumber)
  - [quat_setAxes()](#setaxesviewvec3-rightvec3-upvec3)
  - [quat_setAxisAngle()](#setaxisangleoutquat-axisvec3-radnumber)
  - [quat_slerp()](#slerpoutquat-aquat-bquat-tnumber)
  - [quat_sqlerp()](#sqlerpoutquat-aquat-bquat-cquat-dquat-tnumber)
  - [quat_squaredLength()](#squaredlengthaquat)

## quat_calculateW(out:quat, a:quat)

  Calculates the W component of a quat from the X, Y, and Z components.
  Assumes that quaternion is 1 unit in length.
  Any existing W component will be ignored.

## quat_add(out:quat, a:quat, b:quat)

  Adds two quat's

## quat_conjugate(out:quat, a:quat)

  Calculates the conjugate of a quat
  If the quaternion is normalized, this function is faster than quat.inverse and produces the same result.

## quat_copy(out:quat, a:quat)

  Copy the values from one quat to another

## quat_create()

  Creates a new identity quat

## quat_dot(a:quat, b:quat)

  Calculates the dot product of two quat's

## quat_fromMat3(out:quat, m:mat3)

  Creates a quaternion from the given 3x3 rotation matrix.
  
  NOTE: The resultant quaternion is not normalized, so you should be sure
  to renormalize the quaternion yourself where necessary.

## quat_fromValues(x:float, y:float, z:float, w:float)


## quat_identity(out:quat)

  Set a quat to the identity quaternion

## quat_invert(out:quat, a:quat)

  Calculates the inverse of a quat

## quat_length(a:quat)

  Calculates the length of a quat

## quat_lerp(out:quat, a:quat, b:quat, t:float)

  Performs a linear interpolation between two quat's

## quat_multiply(out:quat, a:quat, b:quat)

  Multiplies two quat's

## quat_normalize(out:quat, a:quat)

  Normalize a quat

## quat_rotateX(out:quat, a:quat, rad:float)

  Rotates a quaternion by the given angle about the X axis

## quat_rotateY(out:quat, a:quat, rad:float)

  Rotates a quaternion by the given angle about the Y axis

## quat_rotateZ(out:quat, a:quat, rad:float)

  Rotates a quaternion by the given angle about the Z axis

## quat_rotationTo(out:quat, a:vec3, b:vec3)

  Sets a quaternion to represent the shortest rotation from one
  vector to another.
  
  Both vectors are assumed to be unit length.

## quat_scale(out:quat, a:quat, b:float)

  Scales a quat by a scalar number

## quat_set(out:quat, x:float, y:float, z:float, w:float)

  Set the components of a quat to the given values

## quat_setAxes(view:vec3, right:vec3, up:vec3)

  Sets the specified quaternion with values corresponding to the given
  axes. Each axis is a vec3 and is expected to be unit length and
  perpendicular to all other specified axes.

## quat_setAxisAngle(out:quat, axis:vec3, rad:float)

  Sets a quat from the given angle and rotation axis,
  then returns it.

## quat_slerp(out:quat, a:quat, b:quat, t:float)

  Performs a spherical linear interpolation between two quat

## quat_sqlerp(out:quat, a:quat, b:quat, c:quat, d:quat, t:float)

  Performs a spherical linear interpolation with two control points

## quat_squaredLength(a:quat)

  Calculates the squared length of a quat

## License

MIT. See [LICENSE.md](http://github.com/stackgl/gl-quat/blob/master/LICENSE.md) for details.
