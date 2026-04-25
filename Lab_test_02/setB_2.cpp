#include<iostream>
using namespace std;

class Shape{
public:
    double area(double r){
               return 3.1416*r*r;
    }

    double area(double l,double w){
        return l*w;
    }
    double area(double b,double h,bool isTriangle){
        return 0.5*b*h;
    }
};
int main(){
    Shape s;
    cout<<"Circle Area: "<<s.area(5)<<endl;
    cout<<"Rectangle Area: "<<s.area(4,6)<<endl;
    cout<<"Triangle Area: "<<s.area(4,6,true)<<endl;
    return 0;
}
