#include "geometry.h"

float Vec3::dot(const Vec3& a, const Vec3& b) const {
    return a.x*b.x + a.y*b.y + a.z*b.z;
}