#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;
        const int k;
        
        Demo(int a,int b,int c):j(b), k(c)  //Parameterised constructor
        {
            i=a;
            //j=b;
            //k=c;
        }
};
int main()
{
        Demo obj(11,21,51);
        cout<<"value of i:"<<obj.i<<"\n";
        cout<<"value of j:"<<obj.j<<"\n";
        cout<<"value of k:"<<obj.k<<"\n";

    return 0;
}