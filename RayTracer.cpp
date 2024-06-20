#include <iostream>
#include "Vector3.h"
#include "Ray.h"
#include "Sphere.h"

int main() {
    const int width = 800;
    const int height = 600;
    const Vector3 camera_origin(0, 0, 0);
    const float viewport_height = 2.0;
    const float viewport_width = 2.0 * (width / (float)height);
    const float focal_length = 1.0;

    Vector3 horizontal(viewport_width, 0, 0);
    Vector3 vertical(0, viewport_height, 0);
    Vector3 lower_left_corner = camera_origin - horizontal / 2 - vertical / 2 - Vector3(0, 0, focal_length);

    Sphere sphere(Vector3(0, 0, -5), 1, Vector3(1, 0, 0)); // Red sphere

    std::cout << "P3\n" << width << " " << height << "\n255\n";

    for (int j = height - 1; j >= 0; j--) {
        for (int i = 0; i < width; i++) {
            float u = i / (float)(width - 1);
            float v = j / (float)(height - 1);
            Ray ray(camera_origin, lower_left_corner + horizontal * u + vertical * v - camera_origin);

            float t;
            if (sphere.intersect(ray, t)) {
                Vector3 color = sphere.color * 255;
                std::cout << (int)color.x << ' ' << (int)color.y << ' ' << (int)color.z << '\n';
            } else {
                Vector3 color(0.5, 0.7, 1.0); // Background color
                color = color * 255;
                std::cout << (int)color.x << ' ' << (int)color.y << ' ' << (int)color.z << '\n';
        }
    }
}
    return 0;
}