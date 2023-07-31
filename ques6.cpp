#include <iostream>
using namespace std;

class patient
{
protected:
    string name;
    int yyyy, mm, dd;
    string disease;
    int yyyy1, mm1, dd1;

public:
    void get_data()
    {
        cout << "Enter the name of patient" << endl;
        cin >> name;
        cout << "Enter the date of admission" << endl;
        cin >> dd >> mm >> yyyy;
        cout << "Enter the disease of patient" << endl;
        cin >> disease;
        cout << "Enter the discharge date" << endl;
        cin >> dd1 >> mm1 >> yyyy1;
    }
    void display_b()
    {
        cout << "Name: " << name << endl;
        cout << "Date Of Admission: " << dd << "/" << mm << "/" << yyyy << endl;
        cout << "Name of disease: " << disease << endl;
        cout << "Date Of Discharge" << dd1 << "/" << mm1 << "/" << yyyy1 << endl;
    }
};
class derived : public patient
{
private:
    int age;

public:
    void getdata()
    {
        get_data();
        cout << "enter the age of patient" << endl;
        cin >> age;
    }
    int get_age()
    {
        return age;
    }
    void display()
    {
        display_b();
        cout << "age: " << age;
    }
};
int main()
{
    int n;
    cout << "enter the no of patient" << endl;
    cin >> n;
    derived d1[n];
    for (int i = 0; i < n; i++)
    {
        d1[i].getdata();
    }
    for (int i = 0; i < n; i++)
    {
        if (d1->get_age() <= 21)
        {
            d1[i].display();
            cout << endl;
        }
    }
    return 0;
}
