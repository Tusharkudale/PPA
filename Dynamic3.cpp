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
    Demo *ptr =(Demo *)malloc(sizeof(Demo));

    ptr->display();
    
    free(ptr);
   
    return 0;
}