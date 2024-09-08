#include <iostream>
using namespace std;
class Marks{
    private:
       int rno;   //data members
       float perc;
    public:
       Marks(){  //default const 

    } 
       Marks(int r, float p){   //para const 
         rno=r;
         perc=p;
        }
        void printDetails(){    //member function 
            cout<<"Roll no:"<<rno<<endl;
            cout<<"percentage:"<<perc<<endl;   
    }
};
  class Student{
    private:
      Marks objM;   //data member of 1st class
      string name;
    public:
    void SetName(){
        cout<<"Enter the name:"<<endl;
        cin>>name;
    }
    void getResult(Marks obj){
        objM=obj;
        cout<<"name:"<<name;
        objM.printDetails();
    }
  };
  int main(){
    Marks Mks[5]={Marks(3001,81),Marks(2001,85),Marks(2000,79),Marks(2002,95),Marks(2005,90)};
    Student std[5];
    for(int i=0;i<5;i++)
    {
        std[i].SetName();
    }
    for(int i=0;i<5;i++)
    {
        std[i].getResult(Mks[i]);
}}