#include<iostream> 
using namespace std ; 
class student {
    
    string name ; 
    int accountnumber ; 
    int balance ; 
    public: 
    //default contructor 
    student(){
        cout<< "constructor is called " ; 
    } 
    student(string name , int accountnumber , int balance ){ 
      this->name = name ; 
      this->accountnumber = accountnumber ; 
      this-> balance = balance ; 
      cout << "parameterized contructor has been called " << endl ; 
    }
    void display () {
        cout << "Name : " << name  << endl;
        cout << "Account_number :" << accountnumber << endl;
        cout<< "Balance :" << balance << endl;
    }
}; 
int main (){ 
    student AI{"parikhit", 23 , 20000} ;
    student AI2{"this" , 24 , 20000} ; 
    AI.display() ; 
    AI2.display() ; 
}