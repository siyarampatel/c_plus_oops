#include<iostream>
using namespace std;

class car{
    public:
    string fueltype;
    void start(){
        cout<<"Car Started";
    }
    void stop(){
        cout<<"Car Stopped";
    }
};

class familyCar:public car{ // class familyCar:virtual public car (ambigitous)

};

class sportsCar:public car{
    
};

class suv:public familyCar,public sportsCar{

};
int main(){
    suv s1;
    s1.familyCar::fueltype="Petrol";
}
/*how to resolve the ambiguity that occurs in hybrid inheritance.
Ans->Whenever a class inherits from two or more than two classes it gets the behaviour of all those classes also,it gets the behaviour 
of the parent of it's parent's classes due to this child class may have multiple copies of the attributes and the behaviour of its 
grand parent class.while accesing these copies c++ may gets confused as to which copy from which parent is being called 
this issue can be solved using any one of the following methods-
1.clarifying the copy using scope resolution operator infront of the variable and the method name.
2.in heirrerical inheritance thee two or more classes which are inheriting from a single base class should inherit virtually.this results 
to create a single copy in the class that inherits from multiple classes.*/


