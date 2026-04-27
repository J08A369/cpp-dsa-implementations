#include<iostream>
using namespace std;
class shape{


public:
    virtual void draw()=0;
   virtual double area()=0;
};
class circle:public shape{

double radius;
public:
    circle(double r):radius(r){}
    void draw()override{
    cout<<"drawing cirle"<<endl;


    }
double area()override{
return 3.14159*radius*radius;
}



};

class rectangle:public shape{

double width,height;
public:rectangle(double w,double h):width(w),
height(h){}
void draw() override{

cout<<"drawing rectangle"<<endl;
}
double area() override{
return width*height;
}
};
int main(){
shape* s;
circle c(5.0);
rectangle r(4.0,5.0);
s=&c;
s->draw();
cout<<s->area()<<endl;
s=&r;
s->draw();
cout<<s->area()<<endl;


}
