#include <iostream>
using namespace std;

template <class T>
class findmax{
    T a,b;
    public:
        findmax(){
            cin>>a>>b;
            if(a>b){
                cout<<a;
            }
            else{
                cout<<b;
            }
        }
        ~findmax(){
            cout<<"";}

};
int main(){
    findmax<int>x;
    return 0;
}
