// Defining the data structures such as vectors and rays
#pragma once

class Vector3 {
public:
    float x, y, z;

    Vector3() : x(0), y(0), z(0) {}
    Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

    // Basic vector operations
    Vector3 operator+(const Vector3& v) const;
    Vector3 operator-(const Vector3& v) const;
    Vector3 operator*(float scalar) const;
    Vector3 operator/(float scalar) const;
    float dot(const Vector3& v) const;
    Vector3 cross(const Vector3& v) const;
    Vector3 normalize() const;
};