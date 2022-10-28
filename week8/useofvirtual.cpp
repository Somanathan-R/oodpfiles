#include<iostream>
using namespace std;
class Base
{   public:
        virtual void display()
            {cout<<"Virtual display in base class"<<endl;}
        void show()
            {cout<<"Non virtual display in base class"<<endl;}
};

class Derived : public Base
{   public:
        void display()
            {cout<<"Virtual display in derived class"<<endl;}
        void show()
            {cout<<"Non Virtual display in derived class"<<endl;}
};

int main()
{   Base *ptr;
    Base b;
    Derived d;
    ptr = &b;
    ptr->display();
    ptr->show();
    ptr =&d;
    ptr->display();
    ptr->show();
}

