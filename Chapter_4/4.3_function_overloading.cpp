#include <bits/stdc++.h>
using namespace std;

int MAX(int a,int b,int c){
   if(a>b){
      if(a>c) return a;
      else return c;
   }
   else if(b>c) return b;
   else return c;
}

float MAX(float a,float b,float c){
   if(a>b){
      if(a>c) return a;
      else return c;
   }
   else if(b>c) return b;
   else return c;
}

int MAX(int a,int b){
   if(a>b) return a;
   else return b;
}

int main(){
   cout<<MAX(3,5,69)<<endl;
   cout<<MAX((float)3.43,(float)5.54,(float)69.69)<<endl;
   cout<<MAX(55,69)<<endl;
}