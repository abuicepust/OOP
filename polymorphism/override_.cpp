#include<bits/stdc++.h>

using namespace std;

class Person
{
public:
    string name;
    void display()
    {
        cout<<"This is person class"<<endl;
    }

};

class Student : public Person
{
public:
    string name;
    void display()
    {
        cout<<"This is student class"<<endl;
    }

};
class Abu : public Student
{
public:
    string name;
    void display()
    {
        cout<<"This is abu class"<<endl;
    }

};


int main()
{
    Abu Asraf;
    Asraf.display();


    return 0;
}

