#include <iostream>
using namespace std;

int main(){
    int role;
    int choice;
    cout<<"Welcome to the Bank Simulation Program!"<<endl<<"Are you a Customer (1) or an Employee (2)"<<endl;
    cout<<"Enter your role (1) for Customer, (2) for Employee :"<<endl;
    cin>>role;

    while(role > 2 || role < 1){
        cout<<"Invalid choice, please re choose your role : ";
        cin>>role;
    }
    
    if(role == 1){
        cout<<"Customer Menu: "<<endl<<"1. Open Account "<<endl<<"2. Deposit Amount "<<endl<<
        "3. Withdraw Amount "<<endl<<"4. Generate Account Statement "<<endl<<
        "5. Return to Role Menu "<<endl<<"6. Exit " <<endl<< "Enter your choice:"<<endl;
        cin>>choice;

        while(choice > 6 || choice < 1){
        cout<<"Invalid choice, please re choose your choice: ";
        cin>>choice;
    }}

    else if(role == 2){
        cout<<"Employee Menu: "<<endl<<"1. View All Accounts "<<endl<<"2. Deduct Tax "<<endl<<
        "3. Add Bonus "<<endl<<"4. Change Account Status "<<endl<<"5. Return to Role Menu "<<endl<<
        "6. Exit "<<endl<<"Enter your choice: "<<endl;
        cin>>choice;

        while(choice > 6 || choice < 1){
        cout<<"Invalid choice, please re choose your choice: ";
        cin>>choice;}}
    
    cout<<"Okay you are good to go.";
    return 0;
}
