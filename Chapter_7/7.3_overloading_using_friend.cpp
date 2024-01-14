#include <bits/stdc++.h>
using namespace std;

class Fatin {
    int x,y;
public:
    Fatin(int a=0, int b=0){
        x=a;
        y=b;
    }
    void display(){
        cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
    }
    friend Fatin operator + (Fatin,Fatin);
};

Fatin operator + (Fatin a,Fatin b){
    Fatin c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;
    return c;
}

int main(){
    Fatin A(1,2),B(2,4),C;
    C=A+B;
    C.display();
    return 0;
}