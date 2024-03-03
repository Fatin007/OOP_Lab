#include <bits/stdc++.h>
using namespace std;

class maxxxxxx{
    public:
    int max(int a, int b, int c){
        if(a>b && a>c) return a;
        else if(b>a && b>c) return b;
        else return c;
    }
    int max(int a, int b){
        if(a>b) return a;
        else return b;
    }
    float max(float a, float b, float c){
        if(a>b && a>c) return a;
        else if(b>a && b>c) return b;
        else return c;
    }
};

int main(){
    maxxxxxx obj;
    cout<<"Max of two integer: "<<obj.max(44,69)<<endl;
    cout<<"Max of three integer: "<<obj.max(44,69,25)<<endl;
    cout<<"Max of three float: "<<obj.max(44.4f,69.69f,10.78f)<<endl;
}