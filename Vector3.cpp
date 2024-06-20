// Implementing the vector operations
#include "Vector3.h"
#include <cmath>

Vector3 Vector3::operator+(const Vector3& v) const {
    return Vector3(x +v.x, y + v.y, z + v.z);
}

Vector3 Vector3::operator-(const Vector3& v) const {
    return Vector3(x - v.x, y - v.y, z - v.z);
}

Vector3 Vector3::operator*(float scalar) const {
    return Vector3(x * scalar, y * scalar, z * scalar);
}

Vector3 Vector3::operator/(float scalar) const {
    return Vector3(x / scalar, y / scalar, z / scalar);
}

float Vector3::dot(const Vector3& v) const {
    return x * v.x + y * v.y + z * v.z;
}

Vector3 Vector3 ::cross(const Vector3& v) const {
    return Vector3(
        y * v.z - z * v.y,
        z * v.x - x * v.z,
        x * v.y - y * v.x
        );
}

Vector3 Vector3::normalize() const {
    float mag = std::sqrt(x * x + y * y + z * z);
    return Vector3(x/mag, y/mag, z/mag);
}