#include "vector3d.h"
#include <cmath>

Vector3D::Vector3D(float x, float y, float z) : x(x), y(y), z(z) {}

Vector3D::Vector3D(const Vector3D& other) : x(other.x), y(other.y), z(other.z) {}

float Vector3D::getX() const { return x; }
float Vector3D::getY() const { return y; }
float Vector3D::getZ() const { return z; }

bool Vector3D::operator==(const Vector3D& other) const {
	return x == other.x && y == other.y && z == other.z;
}

bool Vector3D::operator!=(const Vector3D& other) const {
	return !(*this == other);
}

Vector3D Vector3D::operator+(const Vector3D& other) const {
	return Vector3D(x + other.x, y + other.y, z + other.z);
}

float Vector3D::distanceTo(const Vector3D& other) const {
	float dx = x - other.x;
	float dy = y - other.y;
	float dz = z - other.z;
	return std::sqrt(dx * dx + dy * dy + dz * dz);
}