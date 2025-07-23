
// concept of Encapsulation ......
#include<iostream> 
using namespace std  ;
class customer {
    string name ; 
    int age ; 
    int balance ; 
    public :
    customer(string name , int age , int balance ) {
        this-> name = name ; 
        this-> age = age ; 
        this->balance = balance ; 
    }
    void deposit(int age  , int amount) {
        if(age >= 18  && age <= 60) {
            if(amount > 0 ) {
                balance += amount ; 
            }else {
                cout<< "INVALID AMOUNT" << endl ; 
            }

        } else {
            cout<< "INVALID AGE" << endl  ; 
        }
    }
    void display () {
        cout << name << " "<< age << " "<< balance ; 

    }

} ; 
int main () {
    customer A1( "Parikhit" , 22 , 3000); 
    A1.deposit(12, 2000) ; 
     A1.display() ; 
}