#include<iostream>
#include<string>
using namespace std;
class Person{
protected:
    string name;
    int id;
public:
    Person(string n,int i) : name(n), id(i) {}
};
class Student : public Person{
private:
    float cgpa;

public:
    Student(string n,int i,float c) : Person(n,i){
        cgpa=c;
    }
    void getStatus(){
        if(cgpa>=2.0)
            cout<<"Pass"<<endl;
        else
            cout<<"Fail"<<endl;
    }

    void getStatus(double threshold){
        if(cgpa>=threshold)
            cout<<"Pass"<<endl;
        else
            cout<<"Fail"<<endl;
    }
    void show(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};
class Teacher : public Person{
private:
    string subject;

public:
    Teacher(string n,int i,string s) : Person(n,i){
        subject=s;
    }
    void show(){
        cout<<"Teacher Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Subject: "<<subject<<endl;
    }
};
int main(){
    Student s("Rahim",101,3.50);
    Teacher t("Karim",201,"Math");
    s.show();
    s.getStatus();
    s.getStatus(3.0);
    t.show();
    return 0;
}
