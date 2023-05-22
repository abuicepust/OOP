#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
public:
    void setName(string a)
    {
        name = a;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    //cout << "Hello world!" << endl;
    Student obj;
    obj.setName("Abu Yousuf");
    string name = obj.getName();

    cout<< name;



    return 0;
}
