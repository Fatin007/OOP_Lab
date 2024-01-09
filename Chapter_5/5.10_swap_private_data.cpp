#include <bits/stdc++.h>
using namespace std;

class Fun2; // Important
class Fun1{
    int n;
public:
    void input(){
        cin>>n;
    }
    void output(){
        cout<<n<<endl;
    }
    friend void exchange(Fun1 &a, Fun2 &b);
};

class Fun2{
    int n;
public:
    void input(){
        cin>>n;
    }
    void output(){
        cout<<n<<endl;
    }
    friend void exchange(Fun1 &a, Fun2 &b);
};

void exchange(Fun1 &a, Fun2 &b){
    int tmp=a.n;
    a.n=b.n;
    b.n=tmp;
}

int main(){
    Fun1 a;
    Fun2 b;
    a.input();
    b.input();

    cout<<"Before swap\n";
    cout<<"Fun1 = ";
    a.output();
    cout<<"Fun2 = ";
    b.output();
    cout<<endl;

    exchange(a,b);

    cout<<"After swap\n";
    cout<<"Fun1 = ";
    a.output();
    cout<<"Fun2 = ";
    b.output();
    return 0;
}