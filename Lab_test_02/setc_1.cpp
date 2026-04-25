#include<iostream>
#include<string>
using namespace std;
class Person{
protected:
    string name;
    int age;
public:
    Person(string n,int a) : name(n), age(a) {}
    virtual void showDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Employee : public Person{
private:
    int employeeID;
    float salary;
public:
    Employee(string n,int a,int id,float s) : Person(n,a){ // initializer list
        employeeID=id;
        salary=s;
    }
    void showDetails(){ // overridden
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Employee ID: "<<employeeID<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
    Employee e("Rahim",30,101,50000);
    e.showDetails();
    return 0;
}
