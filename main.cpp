#include "vector3d.h"
#include <iostream>
#include <iomanip>

std::ostream& operator<<(std::ostream& os, const Vector3D& v) {
    os << "[" << v.getX() << "," << v.getY() << "," << v.getZ() << "]";
    return os;
}

int main() {
    Vector3D v0(1, 1, 1);
    Vector3D v1(1, 1, 1);
    Vector3D v3(1, 1, 1);
    Vector3D v4(1, 7, 6);

    if (v0 == v1) {
        std::cout << "v0 is equal to v1\n";
    }

    std::cout << "Vector3D v3 = " << v3 << std::endl;
    std::cout << "Vector3D v4 = " << v4 << std::endl;

    Vector3D sum = v3 + v4;
    std::cout << "Addition of v3 and v4 is: " << sum << std::endl;

    // Uncomment to test immutability
    // v3 = v4 + v1;  // This will not compile due to deleted assignment operator

    std::cout << "The distance from v3 to v5 is: " 
              << std::fixed << std::setprecision(2) 
              << v3.distanceTo(sum) << std::endl;

    return 0;
}