#include "vector3d.h"

Vector3D::Vector3D(float x, float y, float z) : x(x), y(y), z(z) {}

Vector3D::Vector3D(const Vector3D& other) : x(other.x), y(other.y), z(other.z) {}

float Vector3D::getX() const { return x; }
float Vector3D::getY() const { return y; }
float Vector3D::getZ() const { return z; }
