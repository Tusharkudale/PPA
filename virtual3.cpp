#include<iostream>
using namespace std;

class Base
{
    public: 
            int i,j,k;
            void fun()
            { cout<<"Inside Base fun\n"; } //defination
            void gun()
            { cout<<"inside Base gun\n"; }//defination
            void sun()
            { cout<<"Inside Base Sun\n"; }//defination
            void run()
            { cout<<"Inside Base run\n"; }//defination
};

class Derived : public Base
{
    public:
            int a,b;
            void gun()
            { cout<<"inside derived gun\n"; } //Redefintion
            void run()
            { cout<<"Inside derived run\n"; } //Redefintion

};
int main()
{
    Base *bp=new Derived;
    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    return 0;
}