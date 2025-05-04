#include "vector3d.h"
#include <iostream>
#include <iomanip>

// Overload the << operator to output Vector3D objects in [x,y,z] format
std::ostream& operator<<(std::ostream& os, const Vector3D& v) {
    os << "[" << v.getX() << "," << v.getY() << "," << v.getZ() << "]";
    return os;
}

int main() {
    // Initialize Vector3D objects with identical values
    Vector3D v0(1, 1, 1);
    Vector3D v1(1, 1, 1);
    Vector3D v3(1, 1, 1);
    Vector3D v4(1, 7, 6);

    // Check if v0 and v1 are equal using overloaded operator==
    if (v0 == v1) {
        std::cout << "v0 is equal to v1\n";
    }

    // Display v3 and v4 using overloaded operator<<
    std::cout << "Vector3D v3 = " << v3 << std::endl;
    std::cout << "Vector3D v4 = " << v4 << std::endl;

    // Add v3 and v4 using overloaded operator+ and display the result
    Vector3D sum = v3 + v4;
    std::cout << "Addition of v3 and v4 is: " << sum << std::endl;

    // Uncomment the next line to test if assignment from a temporary object is allowed
    // If your Vector3D assignment operator is deleted, this will cause a compilation error
    // v3 = v4 + v1;

    // Calculate and display the distance from v3 to the result vector using distanceTo()
    std::cout << "The distance from v3 to v5 is: "
        << std::fixed << std::setprecision(2)
        << v3.distanceTo(sum) << std::endl;

    return 0;
}