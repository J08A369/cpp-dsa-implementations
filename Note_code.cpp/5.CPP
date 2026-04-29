#include<iostream>
using namespace std;
class payment{
public:
    virtual void processpayment(double amount)=0;
    virtual~payment(){}


};
class creditcard:public payment{
public:

    void processpayment(double amount) override{
    cout<<"processing credit card payment of $"<<amount<<endl;
        }
};
class mobilebanking:public payment{
public:

    void processpayment(double amount) override{
    cout<<"processing mobile banking payment of $"<<amount<<endl;
    }
};
class cash:public payment{
public:

    void processpayment(double amount) override{
    cout<<"processing cash payment of $"<<amount<<endl;
        }
};
int main(){
payment*p;
creditcard cc;
mobilebanking mb;
cash cash;
p=&cc; p->processpayment(500);
p=&mb; p->processpayment(300);
p=&cash; p->processpayment(200);
return 0;
}
