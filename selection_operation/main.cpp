#include <iostream>
#include<conio.h>
#include "consdes.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    ConsDes obj;
    ConsDes *p = &obj;
    p->display();

    getch();
    return 0;
}
