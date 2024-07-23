#include<iostream>
using namespace std;

class Employee{
    public: 
    virtual void salary(){
        cout<<"Employee Salary : " << endl;  
    }
    
};

class FullTime : public Employee{
    public:
    void salary() override{
        cout<<"FullTime Employee Salary is : 20000/Per Month"<<endl;
    }
};

class Contract : public Employee{
    public:
    void salary() override{
        cout<<"Contractual Employee Salary is : 2000/Per Lecture"<<endl;
    }
};

int main(){
    Contract c1;
    FullTime f1;
    
    Employee *ptr = &c1;
    Employee *ptr1 = &f1;
    ptr -> salary();
    ptr1 -> salary();
    
}

