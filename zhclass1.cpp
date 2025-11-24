#include<iostream>
using namespace std;
class TV{
    private:
    bool isOn;
    public:
    void content(bool x){
        isOn=x;
    }
    void getStatus(){
        if(isOn)
        cout<<"TV is on";
        else 
        cout<<"TV id off";
    }
};

class Remote{
    public:
    void controlTV(TV&a, bool x){
        a.control(x);
    }
};

int main(){
    TV t1;
    Remote r1;
    r1.controlTV(t1,true);
    t1.getStatus();
}
//message passing -> c++ implements message passing by enabling us to control one object from another by passing messages or values 
//Q->create a function that increases and decreases in volume in tv (assume initial volume is 0) ,create teh function in remote class that can 
//control of volume in tv