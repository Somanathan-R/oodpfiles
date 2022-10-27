#include<iostream>
using namespace std;
class Base
{   protected:
        int num=0;
};

class Derived:public Base
{   public:
        void func()
        {   num = 10;
            cout<<"The value of num is: "<<num<<endl;
        }
};

int main()
{   Derived obj;
    obj.func();
    return 0;
}