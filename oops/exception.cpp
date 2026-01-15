#include<iostream>
using namespace std;
class customer{
    string name;
    int balance;
    int account_no;
    public:
    customer(string n, int b, int a){
        name = n;
        balance = b;
        account_no = a;
    }
    void deposit(int amount){
       if(amount>0){
           balance += amount;
           cout<<"Amount deposited: "<<amount<<endl;
       }
       else{
           throw "Deposit amount must be positive!";
       }
    }
    void withdraw(int amount){
        if(amount>0&& amount<=balance){
            if(amount <= balance){
                balance -= amount;
                cout<<"Amount withdrawn: "<<amount<<endl;
            }
            else{
                throw "Insufficient balance!";
            }
        }
        else{
            throw "Withdraw amount must be positive!";
        }
    }
};
int main(){
    customer c1("Adity", 1000, 12345);
    try{
        c1.deposit(500);
        c1.withdraw(200);
        c1.withdraw(2000); 
    }
    catch(const char* msg){
        cerr<<"Error: "<<msg<<endl;
    }
}