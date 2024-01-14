#include <bits/stdc++.h>
using namespace std;

class Fatin {
    int x,y;
public:
    Fatin(int a=0, int b=0){
        x=a;
        y=b;
    }
    void operator - (){
        -x;
        -y;
    }
    void display(){
        cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
    }
};

int main(){
    Fatin A(1,-2);
    A.display();
    -A;
    A.display();
    return 0;
}