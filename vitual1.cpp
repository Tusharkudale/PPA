#include<iostream>
using namespace std;

class Base
{
    public: 
            int i,j,k;
            void fun()
            {
                cout<<"Inside Base fun\n";
            }

};

class Derived : public Base
{
    public:
            int a,b;
            void gun()
            {
                cout<<"inside derived gun\n";
            }

};
int main()
{
    Base bobj;
    Derived dobj;

    cout<<sizeof(bobj)<<"\n";
    cout<<sizeof(dobj)<<"\n";

    bobj.fun();

    dobj.fun();
    dobj.gun();

    return 0;
}