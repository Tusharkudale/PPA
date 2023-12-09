#include<iostream>
using namespace std;

class Demo
{

    public:
        int i,j,k;
        Demo()
        {
            cout<<"Inside contructor\n";
        }
        ~Demo(){
        cout<<"Inside Destructor\n";
        }
        void display()
        {
            cout<<"Inside Display\n";
        }
};

int main()
{
    //Demo obj1;
   // obj1.display();

    Demo *ptr =new Demo;
    ptr->display();
    
    delete ptr;
   
   
    return 0;
}