#include<bits/stdc++.h>
#include<conio.h>
using namespace std;


class student
{
public:
    int id;
    double gpa;

    void display()
    {
        cout<<id<<endl;
        cout<<gpa<<endl;
    }

    student(int a, double b)
    {
        id = a;
        gpa = b;
    }
    student()
    {
        cout<<"This is a default constructor"<<endl;
    }

};

int main()
{

    student obj;
    student Asraf(101,3.93);
    //student *Asraf = new student();
    //Asraf.student);
    Asraf.display();

    //Imran.setValue(102,3.95);
    //Imran.display();


    getch();
}
