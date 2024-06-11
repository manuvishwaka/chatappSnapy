#include<iostream>
using namespace std;

// base class 

class Human 
{
    private:
    string religion,color;
    public:
    string name;
    int age ,weight;

};

// derived class or base class

class student :private Human
{
    private:
    int roll_number,fees;

// construcoter of student 
    public:
 student(string name,int age,int weight,int roll_number,int fees)
 {
    this->name=name;
    this->age=age;
    this->weight=weight;
    this->roll_number=roll_number;
    this->fees=fees;
 }
 void display()
 {

    cout<<name<<" age is "<<age<<" ,weight is "<<weight<<" ,roll_number is "<<roll_number<<" ,fees is "<<fees<<endl;
 }
};

class Teacher : private Human
{
    private:
    int salery,id;
   
   public:
   Teacher(string name, int age,int weight, int salery,int id)
   {
    this->name=name;
    this->age=age;
    this->weight=weight;
    this->salery=salery;
    this->id=id;
   }

    void displayT()
 {

    cout<<name<<" age is "<<age<<" ,weight is "<<weight<<" ,sellery is  "<<salery<<" ,id is "<<id<<endl;
 }


};


 




int main ()
{

student A("Abhi",21,64,02,500);
A.display();
Teacher B("Pawan sir",28,66,40000,022);
B.displayT();


}