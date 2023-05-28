#include <iostream>
#include "friend.h"

using namespace std;

class A
{
private:
    int id = 180640;
    string name = "Abu Yousuf";

public:
    friend class Abu;
};

class Abu
{
    public:
    void display(A A)
    {
        cout<<"Id is: "<<A.id<<endl;
        cout<<"Name is: "<<A.name<<endl;
    }
};

int main()
{
    //cout << "Hello world!" << endl;
    //Friend f;

    A A;
    Abu An;
    An.display(A);
    return 0;
}
