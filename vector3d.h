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
};
