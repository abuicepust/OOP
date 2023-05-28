#include "abs.h"
#include<bits/stdc++.h>
using namespace std;

Abs::Abs()
{
    //ctor
    //cout<<"Hello World";
//    virtual void sendMessage() = 0;
}

class Rahim : public Abs
{
public:
    void sendMessage()
    {
        cout<<"Hello, This is Rahim"<<endl;
    }
};
class Karim : public Abs
{
public:
    void sendMessage()
    {
        cout<<"Hi, This is Karim"<<endl;
    }
};
