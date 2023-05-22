#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
    while(1)
    {
        int guessNumber,randomNumber;
        cout<<"Enter the number you guess: "<<endl;
        cin>>guessNumber;
        randomNumber = 1+ rand()%5;
        if(guessNumber == randomNumber)
        {
            cout<<"Hurra! You Won"<<endl<<endl;
            break;
        }
        else
        {
            cout<<"You're wrong, Please try again"<<endl;
            cout<<"Random Number is: "<<randomNumber<<endl<<endl;
        }

    }
    getch();
}
