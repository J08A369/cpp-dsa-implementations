#include<iostream>
using namespace std;

class Calculator{
public:
    int add(int a,int b){
        return a+b;
    }

    double add(double a,double b){
        return a+b;
    }

    int add(int a,int b,int c){
        return a+b+c;
    }
};

int main(){
    Calculator c;

    cout<<"Two int sum: "<<c.add(5,3)<<endl;
    cout<<"Two double sum: "<<c.add(2.5,3.5)<<endl;
    cout<<"Three int sum: "<<c.add(2,4,6)<<endl;

    return 0;
}
