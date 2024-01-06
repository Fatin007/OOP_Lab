#include <bits/stdc++.h>
using namespace std;

class Fun2; // Important
class Fun1{
    int n;
public:
    void input(){
        cin>>n;
    }
    friend int Max(Fun1 a, Fun2 b);
};

class Fun2{
    int n;
public:
    void input(){
        cin>>n;
    }
    friend int Max(Fun1 a, Fun2 b);
};

int Max(Fun1 a, Fun2 b){
    if(a.n>=b.n) return a.n;
    else return b.n;
}

int main(){
    Fun1 a;
    Fun2 b;
    a.input();
    b.input();
    cout<<Max(a,b)<<endl;
    return 0;
}