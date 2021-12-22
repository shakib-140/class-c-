#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public :
    int id;
    double gpa;

    void display()
    {
        cout<<id<<"   "<<gpa<<endl;
    }
    student (int x,double y)
    {
        id=x;
        gpa=y;
    }
};
int main()
{
    student haris(30,3.77);
    haris.display();

    student shahin(55,3.88);
    shahin.display();






    getch();
}
