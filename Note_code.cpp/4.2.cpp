#include<iostream>
using namespace std;
class animal{
public:
    virtual void speak(){
    cout<<"some animal sound"<<endl;
        }
};
class Dog:public animal{
public:
    void speak()override{
    cout<<"woof!"<<endl;
    }
};
class Cat: public animal{
public:
    void speak() override{

    cout<<"meow!"<<endl;
    }
};
int main(){
animal* a;
Dog d;
Cat c;
a=&d;
a->speak();

a=&c;
a->speak();

}
