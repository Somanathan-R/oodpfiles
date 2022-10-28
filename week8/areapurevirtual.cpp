#include<iostream>
using namespace std;

class Polygon
{   protected:
        int b,h,l;
    public:
        virtual void area()=0;
};

class Triangle : public Polygon
{
    public:
        void area()
        {   cin>>b>>h;
            cout<<"Area of Triangle : "<<0.5*b*h<<endl;
        }
};

class Rectangle : public Polygon
{
    public:
        void area()
        {   cin>>l>>b;
            cout<<"Area of rectangle : "<<l*b;
        }
};

int main()
{   Polygon *ptr;
    Triangle tri;
    Rectangle rect;
    ptr = &tri;
    ptr->area();
    ptr = &rect;
    ptr->area();
    return 0;
}