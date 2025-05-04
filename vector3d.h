#pragma once

class Vector3D {
private:
    float x, y, z;

public:
    Vector3D(float x = 0, float y = 0, float z = 0);
    Vector3D(const Vector3D& other);

    float getX() const;
    float getY() const;
    float getZ() const;

    bool operator==(const Vector3D& other) const;
    bool operator!=(const Vector3D& other) const;
    Vector3D operator+(const Vector3D& other) const;
    float distanceTo(const Vector3D& other) const;
};
