#include <bits/stdc++.h>
using namespace std;

class Complex{
    float x;
    float y;
public:
    Complex(){}
    Complex(float a){
        x=y=a;
    }
    Complex(float a, float b){
        x=a;
        y=b;
    }
    void display(){
        cout<<x<<" + i"<<y<<endl;
    }
    friend Complex sum(Complex a, Complex b);
};

Complex sum(Complex a, Complex b){
    Complex c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;
    return c;
}

int main(){
    Complex A(2.7,3.5), B(1.6) ,C;
    
    C=sum(A,B);

    cout<<"A = ";
    A.display();
    cout<<"B = ";
    B.display();
    cout<<"C = ";
    C.display();
}