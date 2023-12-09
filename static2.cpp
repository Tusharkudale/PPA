#include<iostream>
using namespace std;

class Demo
{
    public: 
    int i;
    int j;

     static int k;

    Demo(int a=10,int b=20) //parameterised constructor with default argument
    {
        i=a;
        j=b;
    }
  
    void display()
    {
        cout<<"value of i"<<i<<"\n";
        cout<<"value of j"<<j<<"\n";
    }

};

int Demo::k=111;

int main()
{
    cout<<"value of k is:"<<Demo::k<<"\n";

    Demo obj1(11,21);
    Demo obj2(51,101);
    Demo obj3(121,151);

    cout<<"Size of object is:"<<sizeof(obj1)<<"\n";

    obj1.display();
    obj2.display();
    obj3.display();

   return 0;
 }