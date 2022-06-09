// Vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Vec
{
public:

    int x, y, z;
    Vec()
    {
        this->x = 0;
        this->y = 0;
        this->z = 0;
    }
   
     Vec  operator +=(const Vec& v) {
        x += v.x;
        y += v.y;
        z += v.z;
    }


     Vec operator -=(const Vec& v) {
        x -= v.x;
        y -= v.y;
        z -= v.z;
    }

     Vec operator *=(const Vec& v) {
         x *= v.x;
         y *= v.y;
         z *= v.z;
     }

     Vec operator /=(const Vec& v) {
         x /= v.x;
         y /= v.y;
         z /= v.z;
     }
};

int main()
{
    std::cout << "Hello World!\n";
}

