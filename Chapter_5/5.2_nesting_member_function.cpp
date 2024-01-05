#include <bits/stdc++.h>
using namespace std;

class Fun{
    int a,b;
public:
    void input(){
        cout<<"Input a and b: ";
        cin>>a>>b;
    }
    int largest(){
        if(a>=b) return a;
        else return b;
    }
    void output(){
        cout<<"Largest value: "<<largest()<<endl;
    }
};

int main(){
    Fun A;
    A.input();
    A.output();
    return 0;
}