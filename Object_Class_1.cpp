#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public:
    int id;
    double gpa;
};

int main()
{
    student Asraf;

    Asraf.id = 101;
    Asraf.gpa = 3.92;

    cout<<Asraf.id<<endl;
    cout<<Asraf.gpa<<endl;

    getch();
}
