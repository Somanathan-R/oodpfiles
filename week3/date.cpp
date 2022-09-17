#include <iostream>
using namespace std;

class Circle
{
private:
    int year;
public:
    Circle()
    {
        cin>>Month;
        cin>>Year;
        cin>>Day;
    }

    int CalculateYear()
    {

    }
    int CalculateDate()
    {
    }
};

int main()
{
    Circle c;
    cout<<"Date  is:"<<c.CalculateDate()<<endl;
    cout<<"Month is:"<<c.CalculateMonth()<<endl;
    cout<<"Year is:"<<c.CalculateYear();

    return 0;
}
