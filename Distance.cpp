#include <iostream>
#include <cmath>
using namespace std;

class Coordinates
{
public:
    int x;

public:
    int y;
};

Coordinates restCoordinate()
{
    Coordinates coordinates;
    coordinates.x = 0;
    coordinates.y = 0;

    return coordinates;
}

int distance(Coordinates a, Coordinates b)
{
    int dist = sqrt((a.x - b.x) / 2 + (a.y - b.y) / 2);

    return dist;
}

int main()
{

    Coordinates myCoordinates;
    myCoordinates.x = 20;
    myCoordinates.y = 20;

    Coordinates myCoordinates2;
    myCoordinates2.x = 10;
    myCoordinates2.y = 10;

    int dist = 0;
    dist = distance(myCoordinates, myCoordinates2);
    cout << dist << endl;

    cout << myCoordinates.x << " " << myCoordinates.y << endl;

    myCoordinates = restCoordinate();
    cout << myCoordinates.x << " " << myCoordinates.y << endl;
}