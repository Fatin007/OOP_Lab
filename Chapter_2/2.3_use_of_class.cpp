#include <bits/stdc++.h>
using namespace std;

class person{
    int age;
    string name;
public:
    void get(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
    }
    void print(){
        cout<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    person a;
    a.get();
    a.print();
    return 0;
}