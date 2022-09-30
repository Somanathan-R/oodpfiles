#include<iostream>
using namespace std;
class Degree
{
    public:
        void getDegree()
        {cout<<"I got a degree"<<endl;}
};
class Undergraduate:public Degree
{
    public:
        void printinfo()
        {
            cout<<"I am an Undergraduate"<<endl;
        }

};
class Postgraduate:public Degree
{   public:
    void printinfo()
    {
        cout<<"I am a Postgraduate"<<endl;
    }
};
int main()
{   Degree obj1;
    Undergraduate obj2;
    Postgraduate obj3;
    obj1.getDegree();
    obj2.printinfo();
    obj3.printinfo();
}
