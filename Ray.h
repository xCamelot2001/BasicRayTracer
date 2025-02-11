// Defining the ray class
#pragma once
#include "Vector3.h"

class Ray {
public:
    Vector3 origin;
    Vector3 direction;

    Ray(const Vector3& origin, const Vector3& direction)
        : origin(origin), direction(direction) {}
};