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
    friend bool operator ==(rectangle &r1,rectangle &r2);
};
bool operator ==(rectangle &r1,rectangle &r2){
    return r1.area()==r2.area();
}
int main()
{
    double len, bre;
    cout << "enter the value of length and breadth of rectangle" << endl;
    cin >> len >> bre;
    rectangle r1(len, bre);
    cout << "enter the value of length and breadth of rectangle" << endl;
    cin >> len >> bre;
    rectangle r2(len, bre);
    if (r1==r2)
    {
        cout << "area of Rectangle 1 is equal to Rectangle 2" << endl;
    }
    
    else
    {
        cout << "area of Rectangle 1 and Rectangle 2 are not equal" << endl;
    }
    return 0;
}