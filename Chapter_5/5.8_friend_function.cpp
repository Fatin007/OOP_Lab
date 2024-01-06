#include <iostream>
using namespace std;

class Fun{ 
   int x,y;
public:
    void input(){
        cin>>x>>y;
    }
    friend float avg(Fun);
    // friend float avg(Fun wtf);
};
float avg(Fun a){
    return (a.x+a.y)/2.0;
}

int main(){
   Fun a;
   a.input();
   cout<<"Average = "<<avg(a)<<endl;
}