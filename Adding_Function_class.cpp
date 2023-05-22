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

};

int main()
{
    student Asraf;

    Asraf.id = 101;
    Asraf.gpa = 3.92;

    Asraf.display();


    getch();
}

