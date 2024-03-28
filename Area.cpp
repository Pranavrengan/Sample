
#include <iomanip>
#include <iostream>

#include <cmath>
using namespace std;

float Area(int radius)
{
    float answer;
    double pi = 4.0 * atan(1.0);

    cout << "Area of a circle of a radius " << radius << " is ";
    answer = pi * (radius * radius);

    return answer;
}

float Area(int length, int width)
{
    float answer;

    cout << "Area of a rectangle with  length " <<length << "cm and width "<< width<<"cm is ";
    answer = length * width;

    return answer;
}

int main()
{

    cout << Area(5,10);
}