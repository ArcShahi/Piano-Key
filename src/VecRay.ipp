///////////////////////////////////////////////////////////////////////////////////////////////////
///            OVERLOADS FOR VECTOR2 Struct from Raylib


#include <iostream>
#include <raylib.h>
// Overload + operator (vector addition)
Vector2 operator+(const Vector2& u, const Vector2& v) {
     return { u.x + v.x, u.y + v.y };
}

// Overload - operator (vector subtraction)
Vector2 operator-(const Vector2& u, const Vector2& v) {
     return { u.x - v.x, u.y - v.y };
}

// Vector * Float (scalar multiplication)
Vector2 operator*(const Vector2& v, float n) {
     return { v.x * n, v.y * n };
}

//  Vector * Vector

Vector2 operator*(const Vector2& u, const Vector2& v)
{
     return { u.x * v.x,u.y * v.y };
}

// Overload * operator (for multiplication by scalar on left)
Vector2 operator*(float n, const Vector2& vec) {
     return vec * n; // Reuse previous overload
}

// Overload / operator (scalar division)
Vector2 operator/(const Vector2& vec, float n) {
     if (std::fabs(n) < 1e-6f) {  // Check for near-zero values
          return { 0.0f, 0.0f };  // Return zero vector if dividing by (near) zero
     }
     return { vec.x / n, vec.y / n };
}

// Overload += operator (vector addition assignment)
Vector2& operator+=(Vector2& vec1, const Vector2& vec2) {
     vec1.x += vec2.x;
     vec1.y += vec2.y;
     return vec1;
}

// Overload -= operator (vector subtraction assignment)
Vector2& operator-=(Vector2& vec1, const Vector2& vec2) {
     vec1.x -= vec2.x;
     vec1.y -= vec2.y;
     return vec1;
}

// Overload *= operator (scalar multiplication assignment)
Vector2& operator*=(Vector2& vec, float n) {
     vec.x *= n;
     vec.y *= n;
     return vec;
}

// Overload /= operator (scalar division assignment)
Vector2& operator/=(Vector2& vec, float n) {
     if (std::fabs(n) < 1e-6f) {  // Check for near-zero values
          vec.x = 0.0f;
          vec.y = 0.0f;
     }
     else {
          vec.x /= n;
          vec.y /= n;
     }
     return vec;
}









// Function to constrain a float value between a min and max
float constrain(float value, float min, float max)
{
     return std::min(std::max(value, min), max);
}


// Function to set the magnitude of a Vector2
Vector2 setMag(Vector2 vec, float newMag)
{
     float currentMag = std::hypotf(vec.x, vec.y);
     if (currentMag != 0.0f) {
          float scale = newMag / currentMag;
          vec.x *= scale;
          vec.y *= scale;
     }
     return vec;
}

float lenSqrt(const Vector2& v)
{
     return v.x * v.x + v.y * v.y;
}


float dot(const Vector2& u, const Vector2& v)
{
     return { u.x * v.x + u.y * v.y };
}


