#include <bits/stdc++.h>
using namespace std;

class Fun{
    static int count;
    int a;
public:
    void input(){
        cin>>a;
        count++;
    }
    void output(){
        cout<<"Count = "<<count<<endl;
    }
};

int Fun::count=0;

int main(){
    Fun a,b,c;
    cout<<"Before reading data\n";
    a.output();
    b.output();
    c.output();
    a.input();
    b.input();
    c.input();
    cout<<"After reading data\n";
    a.output();
    b.output();
    c.output();
    return 0;
}