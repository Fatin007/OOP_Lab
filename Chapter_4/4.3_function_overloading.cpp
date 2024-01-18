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
   cout<<MAX(3,5,6)<<endl;
   cout<<MAX(3.43f,5.54f,59.6f)<<endl;
   cout<<MAX(55,69)<<endl;
}