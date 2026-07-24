#include<iostream>
using namespace std;

class Account
{
protected:
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

    virtual void Print()
    {
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Balance: "<<accountBalance<<endl;
    }

    virtual void Credit(float amount)
    {
        accountBalance=accountBalance+amount;
    }

    virtual void Debit(float amount)
    {
        if(amount<=accountBalance)
        {
            accountBalance=accountBalance-amount;
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }

    virtual ~Account()
    {
        cout<<"~Account Destroyed."<<endl;
    }
};

class CurrentAccount:public Account
{
private:
    float serviceCharges;
    float minimumBalance;

public:

    CurrentAccount()
    {
        accountNumber=1001;
        accountBalance=1000;
        minimumBalance=500;
        serviceCharges=50;
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
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Balance: "<<accountBalance<<endl;
        cout<<"Minimum Balance: "<<minimumBalance<<endl;
        cout<<"Service Charges: "<<serviceCharges<<endl;
    }

    void Credit(float amount)
    {
        accountBalance=accountBalance+amount;
    }

    void Debit(float amount)
    {
        if(amount<=accountBalance)
        {
            accountBalance=accountBalance-amount;

            if(accountBalance<minimumBalance)
            {
                accountBalance=accountBalance-serviceCharges;
            }
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }

    ~CurrentAccount()
    {
        cout<<"~CurrentAccount Destroyed."<<endl;
    }
};

class SavingAccount:public Account
{
private:
    float interestRate;

public:

    SavingAccount()
    {
        accountNumber=2001;
        accountBalance=2000;
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
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Balance: "<<accountBalance<<endl;
        cout<<"Interest Rate: "<<interestRate<<"%"<<endl;
    }

    void Credit(float amount)
    {
        accountBalance=accountBalance+amount;
    }

    void Debit(float amount)
    {
        if(amount<=accountBalance)
        {
            accountBalance=accountBalance-amount;
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }

    ~SavingAccount()
    {
        cout<<"~SavingAccount Destroyed."<<endl;
    }
};

int main()
{
    Account* account1;

    CurrentAccount currentAccount(101,5000,1000,100);

    SavingAccount savingAccount(102,8000,5);


    account1=&currentAccount;

    cout<<"Current Account using base pointer"<<endl;
    account1->Print();

    cout<<endl;

    account1->Credit(1000);

    cout<<"After Credit"<<endl;
    account1->Print();

    cout<<endl;

    account1->Debit(2000);

    cout<<"After Debit"<<endl;
    account1->Print();


    cout<<endl;


    account1=&savingAccount;

    cout<<"Saving Account using base pointer"<<endl;
    account1->Print();

    cout<<endl;

    account1->Credit(500);

    cout<<"After Credit"<<endl;
    account1->Print();

    cout<<endl;


    Account** alist=new Account*[5];

    alist[0]=new SavingAccount(201,6000,4);
    alist[1]=new CurrentAccount(202,7000,2000,100);
    alist[2]=new Account(203,9000);
    alist[3]=new SavingAccount(204,3000,6);
    alist[4]=new CurrentAccount(205,10000,3000,150);


    cout<<"All Accounts"<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<endl;
        alist[i]->Print();
    }


    cout<<endl;

    cout<<"Credit and Debit Testing"<<endl;

    alist[0]->Credit(50);

    alist[2]->Debit(333);


    cout<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<endl;
        alist[i]->Print();
    }


    for(int i=0;i<5;i++)
    {
        delete alist[i];
    }

    delete[] alist;


    return 0;
}
