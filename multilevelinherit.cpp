#include<iostream>
using namespace std;
class parent1{
public:
void skin(){
    cout<<"skin colour is brown"<< endl;
}
};
class parent2{
    public:
    void eyes(){
        cout<<"eye colour is blue"<<endl;
    }
};
class child : public parent1,public parent2{
    public:
    void result (){
        cout<<"the child looks like"<<endl;
    }
};
int main(){

    child A;
    A.skin();
    A.eyes();
}