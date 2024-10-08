#include <iostream>
using namespace std;

class person{
    public:
    char name[30];
    int age;
};
class student:private person{
    public:
    void display( ){
        cout<<"student name"<<name<<endl;
        cout<<"student age"<<age <<endl;
    }
    void setter ( ){
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter age"<<endl;
        cin>>age;
        }
};
int main(){
    student st;
    st.setter();
    st.display();
    return 0;
}