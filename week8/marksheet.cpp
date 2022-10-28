#include<iostream>
using namespace std;
class  Marks
{   protected:
        int m1,m2,m3,m4;
    public:
        virtual void getPercentage()=0;
};
class A : public Marks
{   public:
        A()
        {
            cin>>m1>>m2>>m3;
        }
        void getPercentage()
        {   
            cout<<(m1*100*0.01)<<endl;
            cout<<(m2*0.01*100)<<endl;
            cout<<(m3*0.01*100)<<endl;
        }
    
};
class B : public Marks
{   public:
        B()
        {   cin>>m1>>m2>>m3>>m4;}
        void getPercentage()
        {   
            cout<<m1*0.01*100<<endl;;
            cout<<m2*0.01*100<<endl;;
            cout<<m3*0.01*100<<endl;;
            cout<<m4*0.01*100<<endl;;
        }
    
};
int main()
{   Marks *ptr;
    A a;
    ptr = &a;
    ptr->getPercentage();
    B b;
    ptr = &b;
    ptr->getPercentage();
}