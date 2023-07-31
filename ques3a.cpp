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
    bool operator!()
    {
        return !data;
    }
    
};
int main(){
    Boolean b1(true);
    cout<<"before overloading"<<endl;
    cout<<b1.getdata()<<endl;
    cout<<"after overloading"<<endl;
    cout<<!b1<<endl;

    return 0;

    
}