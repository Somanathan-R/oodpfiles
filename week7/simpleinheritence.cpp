#include<iostream>
using namespace std;
class Read
{   protected:
        int rno;
        string fname;
        string lname;
        int phno;
};

class Print:public Read
{   public:
        Print()
        {
            cout<<"Enter rno and phno"<<endl;
            cin>>rno>>phno;
            cout<<"Enter first and last name"<<endl;
            cin>>fname>>lname;
            cout<<"DETAILS"<<endl;
            cout<<"Rno : "<<rno<<"\nPhone no : "<<phno<<endl;
            cout<<"First name : "<<fname<<"\nLast name :"<<lname;
        }
};

int main()
{   Read obj1;
    Print obj2;
    return 0;
}