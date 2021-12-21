#include<iostream>
#include<conio.h>
using namespace std;
int n,i;
class student
{
public :
    char name[33];
    int roll;
    float gpa;
    void display()
    {

        for(i=1; i<=n; i++)
        {
            cout<<endl<<endl<<"information of student"<<i<<" "<<endl;
            cout<<"name :"<<name<<endl;
            cout<<"roll :="<<roll<<endl;
            cout<<"gpa :="<<gpa<<endl;

        }
    }
};
int main()
{
    cout<<"enter the value of n=";
    cin>>n;
    student student[n];
    for(i=1; i<=n; i++)
    {
        cout<<"enter the information of student"<<i<<" "<<endl;
        cout<<"enter the name of student"<<i<<"=";
        cin>>student[i].name;
        cout<<"enter the roll of student"<<i<<"=";
        cin>>student[i].roll;
        cout<<"enter the gpa of student"<<i<<"=";
        cin>>student[i].gpa;
    }
    for(i=1; i<=n; i++)
    {
        student[i].display();
    }



    getch();
}
