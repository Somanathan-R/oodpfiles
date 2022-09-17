#include <iostream>
using namespace std;

class Room
{
private:
    int length;
    int breadth;
    int height;

public:
    Circle()
    {
        cin>>length;
        cin>>breadth;
        cin>>height;
    }

    int CalculateArea()
    {
        return(length*breadth);
    }
    int CalculateVolume()
    {
        return(length*breadth*height);
    }
};

int main()
{
    Circle c;
    cout<<"Area  is:"<<c.CalculateArea()<<endl;
    cout<<"Volume is:"<<c.CalculateVolume();
    return 0;
}
