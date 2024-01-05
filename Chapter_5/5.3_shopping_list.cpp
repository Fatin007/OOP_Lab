#include <bits/stdc++.h>
using namespace std;

const int m=100;
class Shop{
    int itemCode[m];
    float itemPrice[m];
    int count=0;
public:
    void getItem(){
        cout<<"\nEnter item code: ";
        cin>>itemCode[count];
        cout<<"Enter item cost: ";
        cin>>itemPrice[count];
        cout<<"Item added successfully\n\n";
        count++;
    }
    void displaySum(){
        float sum=0;
        for(int i=0;i<count;i++){
            sum+=itemPrice[i];
        }
        cout<<"\nTotal value: "<<sum<<endl<<endl;
    }
    void remove(){
        int code; 
        cout<<"\nEnter item code: ";
        cin>>code;
        for(int i=0;i<count;i++){
            if(itemCode[i]==code){
                itemPrice[i]=0;
            }
        }
        cout<<"Item deleted successfully!!\n\n";
    }
    void displayItems(){
        cout<<"\nCode \tPrice\n";
        for(int i=0;i<count;i++){
            if(itemPrice[i])
                cout<<itemCode[i]<<" \t"<<itemPrice[i]<<endl; 
        }
        cout<<endl;
    }
};

int main(){
    Shop A;
    int choice;
    while(69){
        cout<<"\nYou can do following";
        cout<<"\n1. Add an item.";
        cout<<"\n2. Display total value.";
        cout<<"\n3. Delete an item.";
        cout<<"\n4. Display all items.";
        cout<<"\n5. Quit.";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        if(choice>5){
            cout<<"\nError in input; Try again!!\n";
            continue;
        }
        if(choice==5) break;
        switch(choice){
            case 1: A.getItem(); break;
            case 2: A.displaySum(); break;
            case 3: A.remove(); break;
            case 4: A.displayItems(); break;
        }
    }
    return 0;
}