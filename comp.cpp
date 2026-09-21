#include <iostream>
using namespace std;

class comp{
    int real,img;
    public:
    comp(){

    }
    comp operator -(){
        return comp(-real, -img);
    }
    comp operator -(comp p){
       
        return comp(real-p.real, img-p.img);
    }

};


int main (){
    int a=5;
    int b=(a++)++;
        
}