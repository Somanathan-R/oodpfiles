#include<iostream>
using namespace std;

class Base2; //Forward declaration

class Base1
{   protected:
        int a,b;
    public:
        void input()
        {cin>>a>>b;}
        
        void display()
        {   cout<<"VALUE OF A : "<<a<<endl;
            cout<<"VALUE OF B : "<<b<<endl;
        }
        friend void operator+(Base1 obj1,Base2 obj2);
};

class Base2 : public Base1
{ };

void operator +(Base1 obj1, Base2 obj2)
{   Base2 temp;
    temp.a = obj1.a + obj2.a;
    temp.b = obj1.b + obj2.b;
    cout<<"VALUE OF A : "<<temp.a<<endl;
    cout<<"VALUE OF B : "<<temp.b<<endl;
}

int main()
{   Base2 obj2;
    Base1 obj1;
    obj1.input();
    obj2.input();
    obj1+obj2;
}