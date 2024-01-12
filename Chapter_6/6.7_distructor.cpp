#include <bits/stdc++.h>
using namespace std;

class Fun{
    static int cnt;
public:
    Fun(){
        cnt++;
        cout<<"Called constructor: "<<cnt<<endl;
    }
    ~Fun(){
        cout<<"Called distructor: "<<cnt<<endl;
        cnt--;
    }
};

int Fun::cnt=0;

int main(){
    cout<<"Main start"<<endl;
    Fun a1;
    {
        cout<<"Block start"<<endl;
        Fun a2,a3;
        cout<<"Block end"<<endl;
    }
    cout<<"Main end"<<endl;
    return 0;
}