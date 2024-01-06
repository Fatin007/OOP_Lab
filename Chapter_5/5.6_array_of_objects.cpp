#include <bits/stdc++.h>
using namespace std;

class athlete{
    string name;
    int age;
public:
    void input(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }
    void output(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    athlete footballer[4];
    for(int i=0;i<4;i++){
        cout<<"Details of footballer "<<i+1<<endl;
        footballer[i].input();
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<"Footballer "<<i+1<<endl;
        footballer[i].output();
        cout<<endl;
    }
    return 0;
}