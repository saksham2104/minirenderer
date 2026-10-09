#pragma once

struct Vec4{
    float x,y,z,w;
};

struct Vec3 {
    float x, y, z;
    float dot(const Vec3& a, const Vec3& b) const;

};

struct Vec2{
    float x,y;
};

struct Face {
    int a, b, c;
};
