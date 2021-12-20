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

};
int main()
{
    cout<<"enter the value of n=";
    cin>>n;
    student student[n];
    for(i=1; i<=n; i++)
    {
        cout<<"enter the information of student"<<i<<"="<<endl;
        cout<<"enter the name of student"<<i<<"=";
        cin>>student[i].name;
        cout<<"enter the roll of student"<<i<<"=";
        cin>>student[i].roll;
        cout<<"enter the gpa of student"<<i<<"=";
        cin>>student[i].gpa;
    }

   for(i=1;i<=n;i++)
   {
       cout<<"information of student"<<i<<" is="<<endl;
       cout<<"name is="<<student[i].name<<endl;
       cout<<"roll is="<<student[i].roll<<endl;
       cout<<"gpa is="<<student[i].gpa<<endl;

   }

    getch();
}
