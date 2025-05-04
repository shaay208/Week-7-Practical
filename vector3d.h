#pragma once // Ensures the header is included only once during compilation

// Definition of a class representing a 3D vector
class Vector3D {
private:
    // Private data members representing the x, y, and z components
    float x, y, z;

public:
    // Constructor with default values: initializes a Vector3D with optional x, y, z values
    Vector3D(float x = 0, float y = 0, float z = 0);
    // Copy constructor: creates a new Vector3D from another Vector3D object
    Vector3D(const Vector3D& other);

    // Getter for the x component
    float getX() const;

    // Getter for the y component
    float getY() const;

    // Getter for the z component
    float getZ() const;

    // Equality operator: returns true if two vectors are exactly the same
    bool operator==(const Vector3D& other) const;

    // Inequality operator: returns true if two vectors differ in any component
    bool operator!=(const Vector3D& other) const;

    // Addition operator: adds two vectors component-wise and returns a new Vector3D
    Vector3D operator+(const Vector3D& other) const;

    // Computes the Euclidean distance between this vector and another
    float distanceTo(const Vector3D& other) const;

    // Delete the assignment operator to enforce immutability (no reassignment after construction)
    Vector3D& operator=(const Vector3D& other) = delete;
};
