#include <iostream>
using namespace std;

int sum_of_integer(int beg, int end)
{
    int count = end - beg + 1;
    int sum = count * (count + 1) / 2;
    return sum;
}
int power(int x, int y)
{
    int value=1;
    for (int i = 0; i < y; i++)
    {
        value *= x;
    }
    return value;
}

int main()
{
    int x, y;
    cout << "the sum of integr from 1 to 10: " << sum_of_integer(1, 10) << endl;
    cout << "enter the value of x and y" << endl;
    cin >> x >> y;
    cout << "x^y is" << power(x, y) << endl;

    return 0;
}
