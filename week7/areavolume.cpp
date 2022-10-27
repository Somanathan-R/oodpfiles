#include <iostream>
using namespace std;
class Area
{   int s;   
    public:
        Area()
        {   cout<<"Enter the dimension"<<endl;
            cin>>s;
            cout<<s*s<<endl;
        }
};
class Volume
{   int s;
    public:
        Volume()
        {   cout<<"Enter the dimesnsion"<<endl;
            cin>>s;
            cout<<s*s*s<<endl;
        }
    
};

class Calculation : public Area , public Volume
{ };

int main()
{   Calculation obj;
    return 0;
}