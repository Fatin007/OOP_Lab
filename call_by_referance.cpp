#include <bits/stdc++.h>
using namespace std;

void MAX(int *a,int n, int &mx, int &mn){
    for(int i=0;i<n;i++){
        if(a[i]>mx){
            mx=a[i];
        }
        if(a[i]<mn){
            mn=a[i];
        }
    }
}

int main(){
    int n=5;
    int a[5]={1,6,5,3,9};
    int mx=INT_MIN;
    int mn=INT_MAX;
    MAX(a,n,mx,mn);
    cout<<"Max = "<<mx<<endl;
    cout<<"Min = "<<mn<<endl;
    return 0;
}