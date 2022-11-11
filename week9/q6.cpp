#include<iostream>
using namespace std;
template<class x, class y>
class Sum
{   int n1,n2;
    public :
        void calsum(x n1, y n2)
        {
            cout<<n1+n2;
        }
};
int main()
{   int a,b;
    float c;
    double d;
    cout<<"Enter int type :"<<endl;
    cin>>a>>b;
    cout<<"Enter float type :"<<endl;
    cin>>c;
    cout<<"Enter double type :"<<endl;
    cin>>d;
    Sum<double,float> obj;
    obj.calsum(d,c);
    return 0;
}