#include<iostream>
#include<string>
using namespace std;
class Vehicle{
protected:
    string brand;
    int speed;
public:
    Vehicle(string b,int s){
        brand=b;
        speed=s;
    }
};
class Car : public Vehicle{
private:
    int numberOfDoors;
public:
    Car(string b,int s,int d) : Vehicle(b,s){
        numberOfDoors=d;
    }
    void describe(){
        cout<<"Car Brand: "<<brand<<endl;
        cout<<"Speed: "<<speed<<endl;
        cout<<"Doors: "<<numberOfDoors<<endl;
    }
};
class Bike : public Vehicle{
private:
    bool hasCarrier;
public:
    Bike(string b,int s,bool c) : Vehicle(b,s){
        hasCarrier=c;
    }
    void describe(){
        cout<<"Bike Brand: "<<brand<<endl;
        cout<<"Speed: "<<speed<<endl;
        cout<<"Carrier: "<<hasCarrier<<endl;
    }
};
int main(){
    Car c("Toyota",120,4);
    Bike b("Yamaha",100,true);
    c.describe();
    b.describe();
    return 0;
}
