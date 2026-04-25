#include<iostream>
#include<string>
using namespace std;

// Question 1
class Student{
private:
    string name;
    int rollNo;
    float cgpa;

public:
    Student(){} // default constructor

    Student(string n, int r, float c){ // parameterized constructor
        name=n;
        rollNo=r;
        cgpa=c;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<rollNo<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};

int main(){
    Student s("Rahim",101,3.75); // object using constructor
    s.display();

    return 0;
}
