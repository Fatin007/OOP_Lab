#include <bits/stdc++.h>
using namespace std;

class Fun{
    static int count;
    int x;
public:
    void input(){
        cout<<"Enter code: ";
        cin>>x;
        count++;
    }
    void output(){
        cout<<"Code = "<<x<<endl;
    }
    static void showCount(){
        cout<<"Now count = "<<count<<endl;
    }
};

int Fun::count=1000;

int main(){
    Fun a,b,c;
    cout<<"Before reading data\n";
    Fun::showCount();

    a.input();
    b.input();
    Fun::showCount();
    c.input();
    
    cout<<"After reading data\n";
    a.output();
    b.output();
    c.output();
    Fun::showCount();
    return 0;
}