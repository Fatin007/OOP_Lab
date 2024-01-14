#include <bits/stdc++.h>
using namespace std;

class Point {
    int x,y;
public:
    Point(int a=0, int b=0){
        x=a;
        y=b;
    }
    Point operator + (Point rhs){
        Point ans;
        ans.x=x+rhs.x;
        ans.y=y+rhs.y;
        return ans;
    }
    void display(){
        cout<<"x: "<<x<<"\n"<<"y: "<<y<<endl;
    }
};

int main(){
    Point A(1,2),B(2,4);
    Point C=A+B;
    C.display();
    return 0;
}