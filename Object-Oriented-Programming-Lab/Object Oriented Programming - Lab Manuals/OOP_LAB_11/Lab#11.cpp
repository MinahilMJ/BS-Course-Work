#include<iostream>
using namespace std;


template<class T>
bool isEqualTo(T first,T second)
{
    if(first==second)
    {
        return true;
    }

    return false;
}


class Account
{
private:
    int accountNumber;
    float accountBalance;

public:

    Account()
    {
        accountNumber=0;
        accountBalance=0;
    }

    Account(int number,float balance)
    {
        accountNumber=number;
        accountBalance=balance;
    }


    void SetAccountNumber(int number)
    {
        accountNumber=number;
    }


    void SetAccountBalance(float balance)
    {
        accountBalance=balance;
    }


    int GetAccountNumber()
    {
        return accountNumber;
    }


    float GetAccountBalance()
    {
        return accountBalance;
    }


    virtual void Credit(float amount)=0;


    virtual void Debit(float amount)=0;


    virtual void Print()
    {
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Balance: "<<accountBalance<<endl;
    }


    virtual ~Account()
    {
        cout<<"Account Destroyed"<<endl;
    }
};
class CurrentAccount:public Account
{
private:
    float serviceCharges;
    float minimumBalance;

public:

    CurrentAccount()
        :Account()
    {
        serviceCharges=100;
        minimumBalance=1000;
    }


    CurrentAccount(int number,float balance,float minimum,float charges)
        :Account(number,balance)
    {
        minimumBalance=minimum;
        serviceCharges=charges;
    }


    void Print()
    {
        cout<<"Current Account"<<endl;
        cout<<"Account Number: "<<GetAccountNumber()<<endl;
        cout<<"Account Balance: "<<GetAccountBalance()<<endl;
        cout<<"Minimum Balance: "<<minimumBalance<<endl;
        cout<<"Service Charges: "<<serviceCharges<<endl;
    }


    void Credit(float amount)
    {
        SetAccountBalance(GetAccountBalance()+amount);
    }


    void Debit(float amount)
    {
        if(amount<=GetAccountBalance())
        {
            SetAccountBalance(GetAccountBalance()-amount);

            if(GetAccountBalance()<minimumBalance)
            {
                SetAccountBalance(GetAccountBalance()-serviceCharges);
            }
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }


    ~CurrentAccount()
    {
        cout<<"CurrentAccount Destroyed"<<endl;
    }
};



class SavingAccount:public Account
{
private:
    float interestRate;

public:

    SavingAccount()
        :Account()
    {
        interestRate=5;
    }


    SavingAccount(int number,float balance,float interest)
        :Account(number,balance)
    {
        interestRate=interest;
    }


    void Print()
    {
        cout<<"Saving Account"<<endl;
        cout<<"Account Number: "<<GetAccountNumber()<<endl;
        cout<<"Account Balance: "<<GetAccountBalance()<<endl;
        cout<<"Interest Rate: "<<interestRate<<endl;
    }


    void Credit(float amount)
    {
        SetAccountBalance(GetAccountBalance()+amount);
    }


    void Debit(float amount)
    {
        if(amount<=GetAccountBalance())
        {
            SetAccountBalance(GetAccountBalance()-amount);
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }


    ~SavingAccount()
    {
        cout<<"SavingAccount Destroyed"<<endl;
    }
};

int main()
{
    cout<<"Template Testing"<<endl;

    cout<<isEqualTo(5,5)<<endl;

    cout<<isEqualTo(5.5,3.5)<<endl;

    cout<<isEqualTo('A','A')<<endl;

    cout<<isEqualTo("Hello","Hello")<<endl;


    cout<<endl;


    Account* accounts[3];


    accounts[0]=new CurrentAccount(101,5000,1000,100);

    accounts[1]=new SavingAccount(102,8000,5);

    accounts[2]=new CurrentAccount(103,3000,500,50);



    cout<<"Account Information"<<endl;


    for(int i=0;i<3;i++)
    {
        cout<<endl;
        accounts[i]->Print();
    }


    cout<<endl;


    cout<<"Credit and Debit Testing"<<endl;


    accounts[0]->Credit(1000);

    accounts[0]->Debit(2000);


    accounts[1]->Credit(500);

    accounts[1]->Debit(1000);



    cout<<endl;


    for(int i=0;i<3;i++)
    {
        cout<<endl;
        accounts[i]->Print();
    }



    for(int i=0;i<3;i++)
    {
        delete accounts[i];
    }


    return 0;
}