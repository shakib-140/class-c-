#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:

    student(int id,double gpa)
    {
        cout<<"ID  "<<id<<"    "<<"GPA  "<<gpa<<endl;
    }
    student()
    {
        cout<<"default constractor"<<endl;
    }
};
int main()
{
    student shovo(20,3.55);
    student rabbi(70,3.66);
    student oop;
    getch();
}

