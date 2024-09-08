#include <iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int width;
    public:
        Rectangle(){
            length=0;
            width=0;}
        Rectangle(int l)
        {length=l;
        width=0;
        }
        Rectangle(int l,int w ){ length=l;width=w;}       
        int getSqArea(){
            return length*length;
        }
        int getRectArea(){
            return length*width;
        }};

int main(){
Rectangle obj1(10);
Rectangle obj2(11,12);
cout<<obj1.getSqArea()<<endl;
cout<<obj2.getRectArea()<<endl;
return 0;
}