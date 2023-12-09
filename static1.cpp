#include<iostream>
using namespace std;

class Demo
{
    public: 
    int i;
    int j;

    Demo(int a=10,int b=20) //parameterised constructor with default argument
    {
        i=a;
        j=b;
    }
    Demo()
    {

    }
    void display()
    {
        cout<<"value of i"<<i<<"\n";
        cout<<"value of j"<<j<<"\n";
    }

};
int main()
{
    Demo obj1;
    obj1.display();

    Demo obj2(11);
    obj2.display();

    Demo obj3(51,101);
    obj3.display();

    return 0;
}