
#include<iostream>
#include<string>
using namespace std;

class Student{
private:
    string name;
    int rollNo;
    float cgpa;

public:
    Student(string n,int r,float c){
        name=n;
        rollNo=r;
        cgpa=c;
    }

    // Copy Constructor
    Student(Student &s){
        name=s.name;
        rollNo=s.rollNo;
        cgpa=s.cgpa;
    }

    void setCgpa(float c){
        cgpa=c;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<rollNo<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};

int main(){
    Student s1("Karim",102,3.80);

    Student s2=s1; // copy constructor

    s1.setCgpa(3.20); // change s1 CGPA

    cout<<"s1:"<<endl;
    s1.display();

    cout<<"s2:"<<endl;
    s2.display(); // old value remains

    return 0;
}
