#include <bits/stdc++.h>
using namespace std;

class staff{
    int code;
    string name;
    public:
    staff(int n, string s){
        code=n;
        name=s;
    }
    int get_code(){
        return code;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Code: "<<code<<endl;
    }
};

class teacher:public staff{
    string subject;
    int publication;
    public:
    teacher(int n, string s, string ss, int p):staff(n,s){
        subject=ss;
        publication=p;
    }
    void display(){
        cout<<"\nTeacher"<<endl;
        staff::display();
        cout<<"Subject: "<<subject<<endl;
        cout<<"Publication: "<<publication<<endl;
    }
};

class officer:public staff{
    string grade;
    public:
    officer(int n, string s, string g):staff(n,s){
        grade=g;
    }
    void display(){
        cout<<"\nOfficer"<<endl;
        staff::display();
        cout<<"Grade: "<<grade<<endl<<endl;
    }
};

class typist:public staff{
    int speed;
    public:
    typist(int n, string s, int g):staff(n,s){
        speed=g;
    }
    void display(){
        staff::display();
        cout<<"Speed: "<<speed<<endl;
    }
};

class Regular:public typist{
    int wages;
    public:
    Regular(int n, string s, int g, int w):typist(n,s,g){
        wages=w;
    }
    void display(){
        cout<<"\nRegular Typist"<<endl;
        typist::display();
        cout<<"Wages: "<<wages<<endl<<endl;
    }
};

class casual:public typist{
    int wages;
    public:
    casual(int n, string s, int g, int w):typist(n,s,g){
        wages=w;
    }
    void display(){
        cout<<"\nCasual Typist"<<endl;
        typist::display();
        cout<<"Wages: "<<wages<<endl<<endl;
    }
};

int main(){
    vector<teacher>T;
    vector<officer>O;
    vector<Regular>R;
    vector<casual>C;
    cout<<"\nWelcome to employee database!!"<<endl;
    while(1){
        cout<<"1. Add employee"<<endl;
        cout<<"2. Search employee"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter option: ";
        int op; cin>>op;
        if(op==1){
            cout<<"Enter code: ";
            int x; cin>>x;
            cout<<"Enter name: ";
            string s; cin>>s;
            cout<<"Choose employee type"<<endl;
            cout<<"1. Teacher"<<endl;
            cout<<"2. Officer"<<endl;
            cout<<"3. Typist"<<endl;
            cout<<"Enter option: ";
            int opt; cin>>opt;
            if(opt==1){
                cout<<"Enter subject: ";
                string sub; cin>>sub;
                cout<<"Enter number of publication: ";
                int pub; cin>>pub;
                teacher obj(x,s,sub,pub);
                T.push_back(obj);
            }
            else if(opt==2){
                cout<<"Enter grade: ";
                string g; cin>>g;
                officer obj(x,s,g);
                O.push_back(obj);
            }
            else if(opt==3){
                cout<<"Type regular(R), casual(C): ";
                char type; cin>>type;
                cout<<"Enter speed: ";
                int sp; cin>>sp;
                cout<<"Enter wages: ";
                int w; cin>>w;
                if(type=='R'){
                    Regular obj(x,s,sp,w);
                    R.push_back(obj);
                }
                if(type=='C'){
                    casual obj(x,s,sp,w);
                    C.push_back(obj);
                }
            }
        }
        else if(op==2){
            cout<<"\nEnter employee code to search: ";
            int code; cin>>code;
            bool found=false;
            for(auto x:T){
                if(found==true) break;
                if(x.get_code()==code){
                    x.display();
                    found=true;
                }
            }
            for(auto x:O){
                if(found==true) break;
                if(x.get_code()==code){
                    x.display();
                    found=true;
                }
            }
            for(auto x:R){
                if(found==true) break;
                if(x.get_code()==code){
                    x.display();
                    found=true;
                }
            }
            for(auto x:C){
                if(found==true) break;
                if(x.get_code()==code){
                    x.display();
                    found=true;
                }
            }
            if(found==false){
                cout<<"\nEmployee with code "<<code<<" not found.\n"<<endl;
            }
        }
        else if(op==3) break;
    }
    cout<<"\nSuccesfully exited from database\n";
}