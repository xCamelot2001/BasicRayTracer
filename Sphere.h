// Defining the sphere class
#pragma once
#include "Vector3.h"
#include "Ray.h"

class Sphere {
public:
    Vector3 center;
    float radius;
    Vector3 color;

    Sphere(const Vector3& center, float radius, const Vector3& color)
        : center(center), radius(radius), color(color) {}

    bool intersect(const Ray& ray, float& t);
};