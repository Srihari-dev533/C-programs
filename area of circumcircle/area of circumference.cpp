#include<iostream>
using namespace std;
class Circle{  //class circle
    public:
    float radius;  //data member
    const float PI=3.14;

    Circle(){      //default const.

    }

    Circle(float r){        //para const.
        radius=r;
    }
int cirarea(){         //member function for area of circle
    return PI * radius * radius;
}
int circirum(){         //member function for cirumference of circle
    return 2 * PI * radius;
}
};
int main(){
    Circle c1(5);
    //Circle c2(5);
    cout<<c1.cirarea()<<endl;
    cout<<c1.circirum()<<endl;
}