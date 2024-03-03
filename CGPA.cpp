#include <bits/stdc++.h>
using namespace std;

class student{
    string name,ID;
    int marks[5];
    float gpa[5];
    float cgpa;
    public:
    void set(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter ID: ";
        cin>>ID;
        cout<<"Enter Marks: \n";
        for(int i=0;i<5;i++){
            cout<<"Subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void gpa_calc(){
        for(int i=0;i<5;i++){
            if(marks[i]>=80) gpa[i]=4.00;
            else if(marks[i]>=75) gpa[i]=3.75;
            else if(marks[i]>=70) gpa[i]=3.50;
            else if(marks[i]>=65) gpa[i]=3.25;
            else if(marks[i]>=60) gpa[i]=3.00;
            else if(marks[i]>=55) gpa[i]=2.75;
            else if(marks[i]>=50) gpa[i]=2.50;
            else if(marks[i]>=45) gpa[i]=2.25;
            else if(marks[i]>=40) gpa[i]=2.00;
            else gpa[i]=0.00;
        }
    }
    void cgpa_calc(){
        float tot_gpa=0.0;
        for(int i=0;i<5;i++){
            tot_gpa+=gpa[i];
        }
        cgpa=tot_gpa/5;
    }
    void print(){
        cout<<name<<"\t"<<ID<<"\t"<<cgpa<<endl;
    }
    friend void sort(student[]);
};

void sort(student s[]){
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(s[i].cgpa<s[j].cgpa){
                swap(s[i],s[j]);
            }
        }
    }
}

int main(){
    student s[10];
    for(int i=0;i<10;i++){
        cout<<"\nEnter info for student "<<i+1<<": "<<endl;
        s[i].set();
        s[i].gpa_calc();
        s[i].cgpa_calc();
    }
    cout<<"\n\nMerit list"<<endl;
    cout<<"\nName\tID\tCGPA"<<endl;
    for(int i=0;i<10;i++){
        s[i].print();
    }
}