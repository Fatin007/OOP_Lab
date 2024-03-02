#include <bits/stdc++.h>
using namespace std;

class acc{
    string name;
    int acc_no;
    string type;
    public:
    acc(string name, int acc_no, string type){
        this->name=name;
        this->acc_no=acc_no;
        this->type=type;
    }
    void print(float balance){
        cout<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<acc_no<<endl;
        cout<<"Account Type: "<<type<<endl;
        cout<<"Balance: "<<fixed<<setprecision(2)<<balance<<endl;
    }
};

class cur_acc: public acc{
    float balance;
    float min_balance=500;
    float penalty=50.0;
    public:
    cur_acc(string name, int acc_no, string type, float balance):acc(name,acc_no,type){
        this->balance=balance;
    }
    void penalty_calc(){
        if(balance<min_balance){
            balance-=penalty;
        }
    }
    void check_balance(){
        print(balance);
    }
    void deposit(float x){
        balance+=x;
        cout<<"\nYou've successfully deposited "<<fixed<<setprecision(2)<<x<<"taka!!!"<<endl;
        penalty_calc();
    }
    void withdraw(float x){
        penalty_calc();
        cout<<endl;
        if(x>balance){
            cout<<"Fokinni tor eto taka nai!"<<endl;
            cout<<"Tor ache hoilo: "<<fixed<<setprecision(2)<<balance<<endl;
        }
        else{
            cout<<"You've successfully withdrawn "<<fixed<<setprecision(2)<<x<<"taka!!!"<<endl;
            balance-=x;
        }
    }
};

class sav_acc: public acc{
    float balance;
    float interest=.1;
    public:
    sav_acc(string name, int acc_no, string type, float balance):acc(name,acc_no,type){
        this->balance=balance;
    }
    void check_balance(){
        print(balance);
    }
    void deposit(float x){
        balance+=x;
        cout<<"\nYou've successfully deposited "<<fixed<<setprecision(2)<<x<<"taka!!!"<<endl;
    }
    void inerest_calc(){
        balance*=interest;
    }
    void withdraw(float x){
        cout<<endl;
        if(x>balance){
            cout<<"Fokinni tor eto taka nai!"<<endl;
            cout<<"Tor ache hoilo: "<<fixed<<setprecision(2)<<balance<<endl;
        }
        else{
            cout<<"You've successfully withdrawn "<<fixed<<setprecision(2)<<x<<"taka!!!"<<endl;
            balance-=x;
        }
    }
};

int main(){
    cout<<"Welcome to Fatin Bank LTD. "<<endl;
    cout<<"Enter your name: ";
    string s; cin>>s;
    cout<<"Enter account number: ";
    int x; cin>>x;
    cout<<"Select your account type."<<endl;
    cout<<"1. Current account"<<endl;
    cout<<"2. Savings account"<<endl;
    int op; cin>>op;
    cout<<"Enter initial deposit: ";
    float in_dep; cin>>in_dep;
    if(op==1){
        cur_acc obj(s,x,"Current Account",in_dep);
        while(69){
            cout<<"1. Deposit"<<endl;
            cout<<"2. Withdraw"<<endl;
            cout<<"3. Check Balance"<<endl;
            cout<<"4. Exit"<<endl;
            cout<<"Enter your choice: ";
            int choice; cin>>choice;
            
            if(choice==1){
                cout<<endl<<"Enter deposite ammount: ";
                float x; cin>>x;
                obj.deposit(x);
            }
            else if(choice==2){
                cout<<endl<<"Enter withdraw ammount: ";
                float x; cin>>x;
                obj.withdraw(x);
            }
            else if(choice==3){
                obj.check_balance();
            }
            else if(choice==4){
                break;
            }
            cout<<endl;
        }
    }
    else{
        sav_acc obj(s,x,"Saving Account",in_dep);
        while(69){
            cout<<"1. Deposit"<<endl;
            cout<<"2. Withdraw"<<endl;
            cout<<"3. Check Balance"<<endl;
            cout<<"4. Exit"<<endl;
            cout<<"Enter your choice: ";
            int choice; cin>>choice;
            
            if(choice==1){
                cout<<endl<<"Enter deposite ammount: ";
                float x; cin>>x;
                obj.deposit(x);
            }
            else if(choice==2){
                cout<<endl<<"Enter withdraw ammount: ";
                float x; cin>>x;
                obj.withdraw(x);
            }
            else if(choice==3){
                obj.check_balance();
            }
            else if(choice==4){
                break;
            }
            cout<<endl;
        }
    }
    cout<<"Thank you for choosing Fatin Bank!!"<<endl;
}