#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int start, int end){
    if(start>=end) return true;
    if(s[start]!=s[end]) return false;
    else return isPalindrome(s,start+1,end-1);
}

int main(){
    cout<<"Enter a string to check palindrome: "<<endl;
    string s,newS="";
    getline(cin, s);
    for(int i=0;i<s.size();i++){
        if(s[i]!=' ') newS+=tolower(s[i]);
    }
    int start=0;
    int end=newS.size()-1;
    if(isPalindrome(newS,start,end)==true){
        cout<<"Given string is Palindrome"<<endl;
    }
    else{
        cout<<"Given string is not Palindrome"<<endl;
    }    
        
}