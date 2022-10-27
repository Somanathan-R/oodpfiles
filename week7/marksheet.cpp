#include <iostream>
using namespace std;
class Maths
{   private:
        int m1,m2,m3;
        float avg;
    public:
        Maths()
        {   cout<<"Enter the math mark"<<endl;
            cin>>m1>>m2>>m3;
            avg =(m1+m2+m3)/3;
            cout<<m1<<" "<<m2<<" "<<m3<<"\n"<<avg<<endl;
        }
};

class CSE
{   private:
        int m1,m2,m3;
        float avg;
    public:
        CSE()
        {   cout<<"Enter the CSE mark"<<endl;
            cin>>m1>>m2>>m3;
            avg =(m1+m2+m3)/3;
            cout<<m1<<" "<<m2<<" "<<m3<<"\n"<<avg;
        }
};

class Marks: public Maths, public CSE
{   };

int main() 
{   Marks obj;
    return 0;
}