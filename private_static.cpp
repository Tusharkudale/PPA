#include<iostream>
using namespace std;

class Demo{

    //private:
    public:
    static int s_value;
};

int Demo::s_value=1;
 int main()
 {
    cout<<"value is:"<<Demo::s_value<<"\n";
    return 0;
 }