#include<iostream>
using namespace std;

class Customer
{
    string name;
    int blance,account_number;

    public:

    Customer(string name,int blance,int account_number)
    {
        this->name=name;
        this->blance=blance;
        this->account_number=account_number;
    };

    // deposit
    void deposit(int amount)
    {
        if (amount>0)
        {
            blance+=amount;
            cout<<amount<<" rs  is credited successfully\n";
            cout<<"your balance is "<<blance<<"\n";
        }
        else{
            throw runtime_error("amount should be greater than zero\n");
        }
        
    }

    // withdrawl
    void withdrawl(int amount)
    {
        if (blance>0&&amount<=blance)
        {
            blance-=amount;
            cout<<amount<<" is debited successfully\n";
        }
        else{
            throw runtime_error("your balance is low ");
        }
        
    }
};

int main()
{

Customer c1("Abhishek",5000,10);
try{

c1.deposit(  100);
c1.withdrawl(6000);
c1.deposit(100);
}
catch(const runtime_error &e)
{
    cout<<"Exception occured: "<<e.what()<<endl;
}
}