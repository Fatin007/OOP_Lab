#include <bits/stdc++.h>
using namespace std;

void print_line(char ch='*', int len=40);
float volume(float r, float h, float pi=3.1416);

void print_line(char ch, int len){
    while(len--) cout<<ch; 
    cout<<endl;
}

float volume(float r, float h, float pi){
    float vol=pi*r*r*h;
    return vol;
}
int main(){
    float r=5, h=10;
    print_line();
    cout<<endl<<setw(22)<<"Volume = "<<volume(r,h)<<endl<<endl;
    print_line('-');
    return 0;
}