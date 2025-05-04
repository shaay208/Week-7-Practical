#include "vector3d.h"
#include <cmath>

// Constructor: initializes a Vector3D with given x, y, z coordinates
Vector3D::Vector3D(float x, float y, float z) : x(x), y(y), z(z) {}

// Copy constructor: creates a new Vector3D as a copy of another
Vector3D::Vector3D(const Vector3D& other) : x(other.x), y(other.y), z(other.z) {}

// Getter for x component
float Vector3D::getX() const { return x; }

// Getter for y component
float Vector3D::getY() const { return y; }

// Getter for z component
float Vector3D::getZ() const { return z; }

// Equality operator: returns true if all components of the vectors are equal
bool Vector3D::operator==(const Vector3D& other) const {
	return x == other.x && y == other.y && z == other.z;
}

// Inequality operator: returns true if any component of the vectors differs
bool Vector3D::operator!=(const Vector3D& other) const {
	return !(*this == other);
}

// Addition operator: returns a new Vector3D that is the component-wise sum
Vector3D Vector3D::operator+(const Vector3D& other) const {
	return Vector3D(x + other.x, y + other.y, z + other.z);
}

// Computes Euclidean distance between this vector and another
float Vector3D::distanceTo(const Vector3D& other) const {
	float dx = x - other.x;
	float dy = y - other.y;
	float dz = z - other.z;
	return std::sqrt(dx * dx + dy * dy + dz * dz);
}

