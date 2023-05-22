#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    void setNameAge(string a, int b)
    {
        name = a;
        age = b;
    }
    void display()
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"Age is: "<<age<<endl;
    }
};
class Student : public Person
{
public:
    int id;
    void setId(int a)
    {
        id = a;
    }
    void display2()
    {
        display();
        cout<<"id is: "<<id<<endl;
    }
};

int main()
{
    //cout << "Hello world!" << endl;
    Student Asraf;
    Asraf.setNameAge("Abu Yousuf",26);
    Asraf.setId(101);
    Asraf.display2();

    //cout<< name;



    return 0;
}

