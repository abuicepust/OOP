#include<bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int id;
    int age;
    void display()
    {
        cout<<"Display with no parameter"<<name<<endl;
    }
    void display(string a,int id)
    {
        cout<<"Name = "<<a<<endl;
        cout<<"id = "<<id<<endl;
    }
    void display(string a,int id,int b)
    {
        cout<<"Name = "<<a<<endl;
        cout<<"id = "<<id<<endl;
        cout<<"age = "<<b<<endl;

    }

};

int main()
{
    Student Asraf;
    Asraf.display("Asraf",101,25);


    return 0;
}
