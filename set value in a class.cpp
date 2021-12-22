#include<iostream>
#include<conio.h>
using namespace std;
int x,y;

class student
{
public:


    void setvalue(int id,double gpa,char profe[32])
    {
        cout<<id<<"     "<<gpa<<"    "<<profe<<endl;
    }
};

int main()
{
    student alim,suparna;

    alim.setvalue(77,3.55,"farmer");
    suparna.setvalue(55,3.67,"doctor");

    getch();
}
