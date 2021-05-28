#include<iostream>
using namespace std;

class a
{
    protected:
    a()
    {
        cout<<"constructor of a"<<endl;
    }

};

class b
{
    protected:
    b(){
    cout<<"constructor of b"<<endl;
    }
};

class c:public a, public b
{
    public:
    c(){
    cout<<"constructor of c"<<endl;
    }
};

int main()
{
    c c;
    return 0;
}
