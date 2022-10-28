#include<iostream>
#define pi 3.14
using namespace std;
class Base
{   protected:
        int l,b,s,r;
    public:
        virtual void area()=0;
};

class Rectangle:public Base
{   public:
       void area()
        {   cin>>l>>b;
            cout<<l*b<<endl;
        }
};

class Circle:public Base
{   public:
        void area()
        {   cin>>r;
            cout<<pi*r*r<<endl;
        }
    
};

class Square:public Base
{   public:
        void area()
        {   cin>>s;
            cout<<s*s<<endl;
        }
    
};
int main()
{   Base *ptr;
    Rectangle rec;
    Circle cir;
    Square sq;
    ptr = &rec;
    ptr->area();
    ptr = &cir;
    ptr->area();
    ptr = &sq;
    ptr->area();
}
