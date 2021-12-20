#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public :
    char name[20];
    int roll;
    float gpa;
    void display()
    {

        cout<<name<<endl<<roll<<endl<<gpa<<endl;

    }

};
int main()
{
    student student1,student2;
    cout<<"enter the name of student1=";
    cin>>student1.name;
    cout<<"enter the roll of student1=";
    cin>>student1.roll;
    cout<<"enter the gpa of student1=";
    cin>>student1.gpa;




    cout<<"enter the name of student2=";
    cin>>student2.name;
    cout<<"enter the roll of student2=";
    cin>>student2.roll;
    cout<<"enter the gpa of student2=";
    cin>>student2.gpa;
    cout<<"information of student1="<<endl;
    student1.display();
    cout<<"information of student2="<<endl;
    student2.display();


    getch();
}
