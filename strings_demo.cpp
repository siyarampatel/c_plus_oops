#include<iostream>
#include<string>
//#include<cstring> //If we want to use the string of c(ignore wrriting .h in c++)
using namespace std;


/*in c++ string is a special class that is created to make string handling easy. the memory where the characters of the string is saved
is a char* buffer which is dynamically allocated to optimise the memory the size of this buffer is expanded on the basis of need. a c++
string when initialised contains 50 memory allocations at the beggning if a bigger string is saved into this buffer the memory is reallocated
to a bigger size*/

int main(){
    //declaration & initialisation
    // string s;
    // cout<<s.size();
    // cout<<s.capacity();

    // s.reserve(100);
    // cout<<s.capacity();

    // string s = "apple";
    // cout<<s.size();

    // string s = "apple";
    // string s1(s);
    // cout<<s1;

    // string s2(10,'a');
    // cout<<s2;

    // string s;
    // cin>>s;
    // cout<<s;

      //string s;
      //getline(cin,s);
      //cout<<s;

    //    string s1="hello" ;  //lexicographic comparison 
    //    string s2="hii";
    //    cout<<(s1<s2);

    //    string s1="aello" ;  
    //    string s2="bello";
    //    cout<<(s1>s2);
    //    cout<<s2.compare(s1);

    //    cout<<s1.find("a");
    //    cout<<s1.find_last_of("l");

    string s1 = "mathematics";
    if(s1.find("ma")!=string::npos){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }

    cout<<string::npos;
 }