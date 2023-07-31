#include <iostream>
using namespace std;

class celsius
{

    double data;

public:
    celsius(double data)
    {
        this->data = data;
    }
    double getdata()
    {
        return this->data;
    }
     operator fahrenheit(){
        fahrenheit f;
        f.fdata = data;
        return fahrenheit(f);
    };
    void show()
    {
        cout << this->data << endl;
    }
};
class fahrenheit
{
    double fdata;

public:
     
    void setdata(double fdata)
    {
        this->fdata=fdata;
    }
    double getdata()
    {
        return this->fdata;
    }

};
int main(){
    double data;
    cout<<"enter the celsius temp to convert to fahrenheit"<<endl;
    cin>>data;
    celsius c1(data);
    fahrenheit f = c1;
    cout<<data<<" celsius"<<" is equal to"<<f.getdata()<<"in fahrenheit "<<endl;
   

    return 0;

}