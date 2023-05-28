#include <bits/stdc++.h>
using namespace std;

class MobileUser
{
public:
    virtual void sendMessage() = 0;
};

class Rahim : public MobileUser
{
public:
    void sendMessage()
    {
        cout<<"Hello, This is Rahim"<<endl;
    }
};

class Karim : public MobileUser
{
public:
    void sendMessage()
    {
        cout<<"Hello, This is Karim"<<endl;
    }
};


int main()
{
    //cout << "Hello world!" << endl;
    MobileUser *m;

    Karim obj1;

    m = &obj1;
    m->sendMessage();
    return 0;
}
