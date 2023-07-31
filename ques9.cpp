#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout << "enter the marks of student" << endl;
    cin >> mark;

    try
    {
        if (mark >= 60)
        {
            cout << "PASS" << endl;
        }
        else
        {
            throw(mark);
        }
    }
    catch (int m)
    {
        cout << "FAIL" << endl;
    }

    return 0;
}