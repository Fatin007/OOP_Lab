#include <bits/stdc++.h>
using namespace std;

class A{
    int a;
    public:
    int b;
    void get_ab(){
        cin>>a>>b;
    }
    int get_a(){
        return a;
    }
    void show_a(){
        cout<<"a = "<<a<<endl;
    }
};

class B:public A{
    int c;
    public:
    void mul(){
        c=b*get_a();
    }
    void display(){
        cout<<"a = "<<get_a()<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
    }
};

int main(){
    B obj;
    obj.get_ab();
    obj.mul();
    obj.show_a();
    obj.display();
}