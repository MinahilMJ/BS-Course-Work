#include<iostream>
using namespace std;

class Package
{
protected:
    string senderName;
    string senderAddress;
    string senderCity;
    string senderState;
    string senderZip;

    string receiverName;
    string receiverAddress;
    string receiverCity;
    string receiverState;
    string receiverZip;

    double weight;
    double costPerOunce;

public:

    Package(string sName,string sAddress,string sCity,string sState,string sZip,
            string rName,string rAddress,string rCity,string rState,string rZip,
            double packageWeight,double packageCost)
    {
        senderName=sName;
        senderAddress=sAddress;
        senderCity=sCity;
        senderState=sState;
        senderZip=sZip;

        receiverName=rName;
        receiverAddress=rAddress;
        receiverCity=rCity;
        receiverState=rState;
        receiverZip=rZip;

        if(packageWeight>0)
        {
            weight=packageWeight;
        }
        else
        {
            weight=1;
        }

        if(packageCost>0)
        {
            costPerOunce=packageCost;
        }
        else
        {
            costPerOunce=1;
        }
    }

    virtual double calculateCost()
    {
        return weight*costPerOunce;
    }
};


class TwoDayPackage:public Package
{
private:
    double flatFee;

public:

    TwoDayPackage(string sName,string sAddress,string sCity,string sState,string sZip,
                  string rName,string rAddress,string rCity,string rState,string rZip,
                  double packageWeight,double packageCost,double fee)
                  :Package(sName,sAddress,sCity,sState,sZip,
                           rName,rAddress,rCity,rState,rZip,
                           packageWeight,packageCost)
    {
        flatFee=fee;
    }

    double calculateCost()
    {
        return Package::calculateCost()+flatFee;
    }
};


class OvernightPackage:public Package
{
private:
    double additionalFee;

public:

    OvernightPackage(string sName,string sAddress,string sCity,string sState,string sZip,
                     string rName,string rAddress,string rCity,string rState,string rZip,
                     double packageWeight,double packageCost,double fee)
                     :Package(sName,sAddress,sCity,sState,sZip,
                              rName,rAddress,rCity,rState,rZip,
                              packageWeight,packageCost)
    {
        additionalFee=fee;
    }

    double calculateCost()
    {
        return weight*(costPerOunce+additionalFee);
    }
};


int main()
{
    Package normalPackage(
        "Ali",
        "Street 1",
        "Lahore",
        "Punjab",
        "54000",
        "Ahmed",
        "Street 2",
        "Islamabad",
        "ICT",
        "44000",
        20,
        2
    );


    TwoDayPackage twoDayPackage(
        "Ali",
        "Street 1",
        "Lahore",
        "Punjab",
        "54000",
        "Ahmed",
        "Street 2",
        "Islamabad",
        "ICT",
        "44000",
        20,
        2,
        10
    );


    OvernightPackage overnightPackage(
        "Ali",
        "Street 1",
        "Lahore",
        "Punjab",
        "54000",
        "Ahmed",
        "Street 2",
        "Islamabad",
        "ICT",
        "44000",
        20,
        2,
        1
    );


    cout<<"Normal Package Cost: "<<normalPackage.calculateCost()<<endl;

    cout<<"Two Day Package Cost: "<<twoDayPackage.calculateCost()<<endl;

    cout<<"Overnight Package Cost: "<<overnightPackage.calculateCost()<<endl;


    return 0;
}