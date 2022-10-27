#include<iostream>
#include<math.h>
using namespace std;
class Base
{   public:
        int val;
};

class Square:public Base
{   public:
        Square()
        {   cin>>val;
            cout<<pow(val,2);
        }
};

class Cube:public Base
{   public:
        Cube()
        {   cin>>val;
            cout<<pow(val,3);
        }
};

int main()
{   Square obj1;
    Cube obj2;
    return 0;
}