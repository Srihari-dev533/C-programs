#include <iostream>
using namespace std;
class shape{
    protected:
   int shape_length;
   int shape_width;
    public:
   void getLength(int l){
       shape_length=l;
   }
   void getWidth(int w){
   shape_width=w;}
    virtual int getPerimeter()=0;
};
class rectangle:public shape{
    public:
    int getPerimeter(){
        return 2*(shape_length+shape_width);
}
};
class square:public shape{
    public: 
    int getPerimeter(){
        return 4*shape_length;
    }
    friend int circlePerimeter(square obj);
};

int circlePerimeter(square obj){
    return 2*3.14*obj.shape_length;
}
int main(){
    rectangle R;
    square S;
    R.getLength(7);
    R.getWidth(10);
    S.getLength(4);
    cout<<"rectangle perimeter:"<<R.getPerimeter()<<endl;
    cout<<"square perimeter:"<<S.getPerimeter()<<endl;
    cout<<"circle perimeter:"<<circlePerimeter(S)<<endl;

}