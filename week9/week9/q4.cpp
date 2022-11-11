#include<iostream>
using namespace std;
template<class datatype>
void square(datatype num)
{
    cout<<num*num<<endl;
}
int main()
{   square(5);
    square(3.2);
    return 0;
}