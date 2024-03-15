#include<iostream>
using namespace std;

class Human{

    // Human is base class 
    protected :
    int height;

    public:
    
    int weight;
    int age ;
   
    // private:
    // int height; 
    // int weight;
    // int age ;
   


    public:
    int getage(){
        return this->age;

    }

    void setweight(int w){
        this->weight =w;

    }


};

// Here inherit mode is public 
// THis is how we inherit a class
class Male : public Human
{

public:
string color;

void sleep(){
    cout<<"male sleeping"<<endl;

}

int getheight(){
    return this->height;

}

};



int main(){

Male m1;

// cout<<m1.height<<endl;
cout<<m1.getheight()<<endl;










return 0;
}
