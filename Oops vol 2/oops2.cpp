/// Static Data Member 
#include<iostream>
using namespace std ; 
class customer  {
    string name ; 
    int age ;
    int balance ; 
    static int total_count  ; 
    static int total_balance ; 
    public:
    customer(string name , int age , int balance  ) { 
        this-> name = name ; 
        this-> age = age ; 
        this-> balance  = balance  ; 
        total_count++ ; 
        total_balance += balance  ; 
    }
    
    void deposite(int amount ) { 
        if(amount > 0 ) {
            balance +=  amount  ; 
            total_balance += amount ; 
        }

    }
    void withdraw(int amount) {
        if( balance >=  amount && amount > 0 ) {
            balance -= amount ; 
            total_balance -= amount ; 
            
        }

    }
    void display () {
        cout << name << " " << age << " " << balance  << " " << total_count << endl ; 
    } 
    static void parikhit() {
        cout << "Total number of account present : "<< total_count << endl  ;
        cout<<"Total balance amount : "<< total_balance << endl ;  
    }
     void display_totalcount() {
        cout << total_count << endl ;
    }
} ; 
int customer :: total_count = 0 ; 
int customer :: total_balance = 0  ; 
int main () {
    customer A1 ("parikhit" , 22 , 2000); 
    customer A2 ("kaziranga" , 12 , 3000); 
    
    // A1.display() ; 
    // A2.display() ;
     A1.deposite(5000) ; 
     A1.withdraw(300) ; 
    customer::parikhit () ; 

}