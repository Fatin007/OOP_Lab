#include <bits/stdc++.h>
using namespace std;

class field{
    int length, width;
    public:
    void set(){
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter width: ";
        cin>>width;
    }
    int perimeter(){
        return 2*(length+width);
    }
    int area(){
        return length*width;
    }
};

int main(){
    field obj;
    obj.set();
    field &ref=obj; //object reference
    cout<<"Perimeter = "<<ref.perimeter()<<endl;
    cout<<"Area = "<<ref.area()<<endl;
}