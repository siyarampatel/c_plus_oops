//given a class rectangle with attributes length and bredth write method to claculate the area and perimeter of rectangle 
// also demonstrate thee use of these methods in a sample program
// #include<iostream>
// using namespace std;
// class rectangle{
//     protected:
//     int length;
//     int bredth;
//     public:
//     rectangle(){
//         length=1,bredth=1;
//     }
//     rectangle(int length, int bredth){
//         this->length=length;
//         this->bredth=bredth;
//     }
//     int area(){
//         return length*bredth;
//     }
//     int perimeter(){
//         return 2*(length+bredth);
//     }
//     void display(){
//         cout<<"Area: "<<area()<<"\n"<<"Perimeter: "<<perimeter()<<endl;
//     }
// };

// int main(){
//     rectangle r (29,84);
//     r.display();
    
// }

//In the above question create an cuboid class which should be the derived class of rectangle class,the cuboid class should have only one 
// member variable that is height also write a function to find the volume of the cuboid.note that because of inheritance length and bredth
//is already availiable to the cuboid class.what are the changes need to be done in the rectangle class for this new task

#include<iostream>
using namespace std;
class rectangle{
    protected:
    int length;
    int bredth;
    public:
    rectangle(){
        length=1,bredth=1;
    }
    rectangle(int length, int bredth){
        this->length=length;
        this->bredth=bredth;
    }
    int area(){
        return length*bredth;
    }
    int perimeter(){
        return 2*(length+bredth);
    }
    void display(){
        cout<<"Area: "<<area()<<"\n"<<"Perimeter: "<<perimeter()<<endl;
    }
};
    class cuboid:public rectangle{
        protected:
        int heigth;
        public:
        cuboid(){
            heigth=1;
        }
        cuboid(int length,int bredth,int heigth):rectangle(length,bredth){
        this->heigth=heigth;
        }
        int volume(){
            return length*bredth*heigth;
        }

        //function overiding
        void display(){
            cout<<"Volume: "<<volume();
        }
    };

int main(){
    rectangle r (29,84);
    r.display();
    cuboid a(10,45,65);
    a.display();
    
}