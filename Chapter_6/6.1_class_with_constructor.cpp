#include <bits/stdc++.h>
using namespace std;

class Fun{ 
    int n,m;
public:
    Fun(int x, int y){
        n=x;
        m=y;
    }
    void display(){
        cout<<"n = "<<n<<endl;
        cout<<"m = "<<m<<endl;
    }
};

int main(){
    Fun A(5,6);
    A.display();
    return 0;
}