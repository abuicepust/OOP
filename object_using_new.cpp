#include<bits/stdc++.h>
#include<iostream>
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

};

int main()
{
    //student Asraf,Imran;
    student *Asraf = new student(101,3.93);
    Asraf->display();

    //Imran.setValue(102,3.95);
    //Imran.display();


    getch();
}



