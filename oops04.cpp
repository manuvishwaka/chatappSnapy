#include<iostream>
using namespace std;

// class Human{

// protected:
// string name;
// int age;

// public :

// Human(string name,int age)
// {
    
//     this->name=name;
//     this->age=age;
// }

// void work ()
// {
//     cout<<"I am working "<<endl;
// }

// void display ()
// {
//     cout<<name<<" "<<age<<endl;
// }

// // Human ()
// // {
// //     cout<<"Hello Abhi"<<endl;
// // }

// };
//                                      // constructor k opposite me distructor kaam karta hai 


// class Student:public Human
// {
// int roll_number;
// int fees;

// public :
// Student (string name,int age,int roll_number,int fees):Human(name,age)
// {
//     // this->name=name;
//     // this->age=age;
//     this->roll_number=roll_number;
//     this->fees=fees;
// }

// // Student()
// // {
// //     cout<<"i am student"<<endl;
// // }

// void display ()
// {
//     cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
// }



// };


// int main ()
// {

// class Student s1("Abhi",21,02,99);

// s1.work();
// s1.display();



// }

// class Person
// {
//     protected:
//     string name;
    

//     public:
//     void introduce()
//     {
//         cout<<"Hello my name is "<<name<<endl;
//     }
    
// };

// class Employee: public Person
// {
// protected:
// int salery;
// public:
// void monthly_salery()
// {
//     cout<<"my monthly sallery is "<<salery<<endl;

// }


// };

// class Manager : public Employee 
// {
// public:
// string department;

// Manager(string name ,int salery,string department)
// {
//     this->name=name;
//     this->salery=salery;
//     this->department=department;
// }

// public :
// void work ()
// {
//     cout<<"my department is "<<department<<endl;
// }

// };

// int main()
// {

// class Manager M1("Aadii",5000,"Quality");
// M1.introduce();
// M1.monthly_salery();
// M1.work();


// }

class Engg
{
    public:

    string spe;

    void work()
    {
        cout<<" I have spacelization in "<<spe<<endl;
    }

};

class Youtuber
{
   
   public :
   int subscriber;

   void subcount()
   {
    cout<<"I have "<<subscriber<<"subscriber"<<endl;

   }


};

class codeTeacher:public Engg, public Youtuber
{
    public:
     string name;
    

     codeTeacher( string name,int subscriber, string spe)
     {
        this->name=name;
        this->subscriber=subscriber;
        this->spe=spe;
     }

     void introduce()
     {
        cout<<" My name is "<<name<<endl;
     }

};

int main ()
{
    class codeTeacher A1("Abhishek",56000,"computerScience");
    A1.introduce();
    A1.subcount();
    A1.work();

}