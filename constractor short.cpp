#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public :
    student (int x,double y)
    {
        cout<<x<<"   "<<y<<endl;
    }
};
int main()
{
    student haris(30,3.77);
    student shahin(55,3.88);

    getch();
}

