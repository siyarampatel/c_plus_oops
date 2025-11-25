/*write a c++ program to demostrate dynamic polymorphism and dynamic dispatch */
/*Dynamic Polymorphism and Dynamic Dispatch*/
#include<stdio.h>
using namespace std;

class Appliance{
    public:
   virtual void start(){
        cout<<"General Appliance\n";
    } 
};

class Toaster:public Appliance{
    public:
    void start(){
        cout<<"Toaster calls";
    }
};

class oven:public Appliance{
    public:
    void start(){
        cout<<"Oven preheating";
    }
};

int main(){
    Appliance *t = new Toaster;
    Appliance *o = new oven;
    
}
/*there is an table of pointer this table is availiable in every generation of class. each table for each class contains the pointers 
to the relevant function which should be called during dynamic dispatch*/