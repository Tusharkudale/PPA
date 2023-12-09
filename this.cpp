#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    int j;
    int k;

    //Demo(Demo *this ,int a=10,int b=20,int c=30)
    Demo(int a=10,int b=20,int c=30)
    {   
        cout<<"Value of this is:"<<this<<"\n";
        this->i=a;
        this->j=b;
        this->k=c;
    }

    //void fun(Demo *this,int No1, int No2)
    void fun(int No1, int No2)
    {
        cout<<"Inside fun\n";
        cout<<"Value of i"<<this->i<<"\n";
        cout<<"Value of j"<<this->j<<"\n";
        cout<<"Value of k"<<this->k<<"\n";
    }

    void Display()
    {
        cout<<"Inside Display\n";
        cout<<"Value of this pointer is :"<<this<<"\n";
    }

};
int  main()
{
    Demo obj1;
    Demo obj2(11,21,51);

    obj1.fun(5,6);
    obj2.fun(8,9);
    
    cout<<"Address of obj1 is:"<<&obj1<<"\n";
    obj1.Display();

    cout<<"Address of obj2 is:"<<&obj2<<"\n";
    obj2.Display();

    
    return 0;
}