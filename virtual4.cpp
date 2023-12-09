#include<iostream>
using namespace std;

class Base
{
    public: 
            int i,j,k;
           virtual void fun() //1000
            { cout<<"Inside Base fun\n"; } //defination
            virtual void gun() //2000
            { cout<<"inside Base gun\n"; }//defination
            void sun() //3000
            { cout<<"Inside Base Sun\n"; }//defination
            void run() //4000
            { cout<<"Inside Base run\n"; }//defination
};

class Derived : public Base
{
    public:
            int a,b;
            virtual void gun() //5000
            { cout<<"inside derived gun\n"; } //Redefintion
            void run() //6000
            { cout<<"Inside derived run\n"; } //Redefintion
            virtual void mun() //7000
            { cout<<"Inside derived mun\n"; }
};
int main()
{
    cout<<sizeof(Base)<<"\n"; //12
    cout<<sizeof(Derived)<<"\n"; //20

    Base *bp=new Derived;
    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    return 0;
}