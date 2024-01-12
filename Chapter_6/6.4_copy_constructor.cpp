#include <bits/stdc++.h>
using namespace std;

class Fun {
    int id;
public:
    Fun(){}
    Fun(int a){
        id=a;
    }
    Fun(Fun &x){
        id=x.id;
    }
    void display(){
        cout<<id;
    }
};

int main(){
    Fun A(100);
    Fun B(A);
    Fun C=A;
    Fun D;
    D=A;
    cout<<"\nID of A: "; A.display();
    cout<<"\nID of B: "; B.display();
    cout<<"\nID of C: "; C.display();
    cout<<"\nID of D: "; D.display();
    return 0;
}