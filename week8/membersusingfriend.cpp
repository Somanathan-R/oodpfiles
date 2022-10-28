#include<iostream>
using namespace std;
class Base
{   private:
        int a,b;
    public:
        void input()
        {cin>>a>>b;}
        
        void display()
        {   cout<<"VALUE OF A : "<<a<<endl;
            cout<<"VALUE OF B : "<<b<<endl;
        }
        
        friend Base operator +(Base obj1, Base obj2);
};

Base operator +(Base obj1, Base obj2)
{   Base temp;
    temp.a = obj1.a + obj2.a;
    temp.b = obj1.b + obj2.b;
    return temp;
}

int main()
{   Base obj1,obj2,result;
    obj1.input();
    obj2.input();
    result = obj1 + obj2;
    result.display();
}