#include<iostream>
using namespace std;

class Student
{
    private:
  string name;
  int roll_Num;
  char section; 
 
 public:

 // getter and setter 

 void setName(string n)
 {
    if (n.size()==0)
    {
        cout<<"please enter the name"<<endl;
        return;
    }
    else{
    name=n;
    }
 }

 string getName()
 {
    return name;
 }

} ;




int main ()

{

 Student s1;
 s1.setName("Abhi");
 cout<<s1.getName()<<endl;

 Student *p= new Student;
 p->setName("Abhi");
 cout<<p->getName();
  
 

}