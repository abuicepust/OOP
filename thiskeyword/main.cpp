#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    Student(string name)
    {
        this -> name = name;
    }
    void display()
    {
        cout<<name<<endl;
    }
};

int main()
{
    //cout << "Hello world!" << endl;
    Student obj("Abu Yousuf");
    obj.display();



    return 0;
}
