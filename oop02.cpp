#include<iostream>
using namespace std;

class customer
{
   
  string name;
  int Acc;
  int blance;
 
 // default contructor 
 public:
 customer()
 {
    cout<<" contstructor is called "<<endl;

    name="rohit";
    Acc=5054;
    blance=500;

 }

 // parametersie constructor 

//  customer(string name, int Acc, int blance)
//  {
//    this->name=name;    
//    this->Acc=Acc;    
//     this->blance=blance; 
//  }

 customer(string s,int acc)
 {
    name=s;
    Acc=acc;
   blance=340;
 }

 // inline constructor 

 inline customer(string a,int b, int c):name(a),Acc(b),blance(c){}

 // copy constructor 
 customer(customer &B)
 {
   name=B.name;
   Acc=B.Acc;
   blance=B.blance;
 }

void display()
{
    cout<<name<<"    "<<Acc<<" "<<blance<<endl;
}

 

};



int main (){

// customer A1("rohit",123,1000);
customer A1 ;
customer A2("Abhi",120,1000);
customer A3("bunty",144);
customer A4(A3);
A1.display();
A2.display();
A3.display();
A4.display();


}