#include <iostream>
using namespace std;

class Boolean
{
    bool data;

public:
    Boolean(bool data)
    {
        this->data = data;
    }
    bool getdata(){
        return data;
    }
    friend bool operator!(Boolean b1);
    
};
bool operator!(Boolean b1){
    return !b1.data;
}
int main(){
    Boolean b1(true);
    cout<<"before overloading the operator"<<endl;
    cout<<b1.getdata()<<endl;
    cout<<"after overloading the operator"<<endl;
    Boolean b2 = !b1;
    cout<<b2.getdata()<<endl;

    return 0;

    
}