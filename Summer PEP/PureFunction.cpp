// Pure Virtual Function
// Why?
// If a function doesn't have abt use in the base class but the function must be implemented by all its derieved classes.

// A Class that contains a pure virtual function is known as abstract class.

#include<iostream>
using namespace std;

class A{
    public:
    virtual void display() = 0;
    
};

class B : public A{
   public:
    void display() override{
        cout<<"From B " << endl;
    }
    
} ;
class C : public A{
   public:
    void display() override{
        cout<<"From C " << endl;
    }
} ;

int main(){
    C c1;
    
    A *ptr = &c1;

    ptr -> display();
}