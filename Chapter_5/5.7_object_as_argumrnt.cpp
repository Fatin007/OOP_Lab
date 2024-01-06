#include <iostream>
using namespace std;

class Fun{ 
   int x;
public:
    void input(){
        cout<<"Enter an integer: ";
        cin>>x;
    }
    void output(){
        cout<<"Result: "<<x<<endl;
    }
    void sum(Fun a, Fun b){ 
        x=a.x+b.x;
    }
};

int main(){
   Fun a,b,c;
   a.input();
   b.input();
   c.sum(a,b);
   c.output();
}