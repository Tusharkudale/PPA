#include<iostream>
using namespace std;

class Hello
{
    public:
   void display();
};

class Demo
{
    public:
    int i;
    private:
    int j;
    protected:
    int k;
    public:
    Demo()
    {
        i=10;
        j=20;
        k=30;
    }
    friend void Hello::display();
};

  void Hello :: display()
    {
        Demo obj;
        cout<<"value of i :"<<obj.i<<"\n";
        cout<<"value of j :"<<obj.j<<"\n";
        cout<<"value of k :"<<obj.k<<"\n";
    }

int main()
{
    Hello hobj;

    hobj.display();

    return 0;
}