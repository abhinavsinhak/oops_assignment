#include <iostream>
using namespace std;

class rectangle
{
    double length, breadth;

public:
    rectangle(double length, double breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    double area()
    {
        return length * breadth;
    }
    bool operator<(rectangle &r)
    {
        return area() < r.area();
    }
    bool operator>(rectangle &r)
    {
        return area() > r.area();
    }
};
int main()
{
    double len, bre;
    cout << "enter the value of length and breadth of rectangle" << endl;
    cin >> len >> bre;
    rectangle r1(len, bre);
    cout << "enter the value of length and breadth of rectangle" << endl;
    cin >> len >> bre;
    rectangle r2(len, bre);
    if (r1 > r2)
    {
        cout << "area of Rectangle 1 is greater than Rectangle 2" << endl;
    }
    else if (r1 < r2)
    {
        cout << "area of Rectangle 2 is greater than Rectangle 1" << endl;
    }
    else
    {
        cout << "area of Rectangle 1 and Rectangle 2 are equal" << endl;
    }
    return 0;
}