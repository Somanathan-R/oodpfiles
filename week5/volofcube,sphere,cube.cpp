#include<iostream>
#include<math.h>
#define pi 3.14
using namespace std;
class Volume
{
    public:
        void calculate(double a)
        {
            cout<<"Volume of cube :"<<pow(a,3)<<endl;
        }
        void calculate(float r, float h)
        {
            cout<<"Volume of cylinder :"<<(pi*r*r*h)<<endl;
        }
        void calculate(float r)
        {
            cout<<"Volume of sphere :"<<1.3333*pi*pow(r,3)<<endl;
        }
};
int main()
{   float r,h;
    double a;
    Volume obj1;
    cout<<"Enter radius , height and side length :"<<endl;
    cin>>r>>h>>a;
    obj1.calculate(a);//volume of cube
    obj1.calculate(r,h);//Volume of cylinder
    obj1.calculate(r);//volume of sphere
}
