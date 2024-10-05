#include <iostream>
using namespace std;

class IncNum {
private:
    int value;

public:
    IncNum(){
        value = 0;
    }  
    IncNum(int v){
        value = v;
    }   

    friend IncNum operator++(IncNum &obj);
    friend IncNum operator++(IncNum &obj,int);

    void display() {
        cout << "Value: " << value << endl;
    }
};

IncNum operator++(IncNum &obj) {
    obj.value++;  
    return obj;  
}

IncNum operator++(IncNum &obj,int) {
    IncNum temp = obj;
    obj.value++;
    return obj;
}


int main() {
    IncNum num(5); 
    cout << "Original ";
    num.display(); 
    
    ++num;          
    cout << "After prefix ++ ";
    num.display(); 
    
    num++;
    cout << "After postfix ++ ";
    num.display(); 
    
    return 0;
}