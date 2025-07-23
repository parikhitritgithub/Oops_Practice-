// multiple inheritence 
#include<iostream>
using namespace std ; 
class person {
    protected : 
    string name ; 
    int age ; 
    int salary ; 
    public : 
    void myname(){ 
        cout<< "My Name is : " << name  << endl ; 
    }
}; 
class Employee : public person { 
    protected : 
    int salary  ; 
    public : 
    void monthly_salary () {
        cout << " My monthly salary is : " << salary << endl ;
    }
} ;
class Manager  : public Employee{ 
    public : 
    string department ; 
    
    Manager (string name , int age , int salary , string department ) {
        this-> name = name ; 
        this->age = age ; 
        this -> salary = salary ; 
        this->department = department ; 
    }

    void display (){
        cout << "I am leading the department " << department << endl ;
    } 
    
} ; 
int main () {
    Manager A1 ("parikhit", 22 , 200 , "Finance") ; 
    A1.display() ;
    A1.monthly_salary() ; 
    A1.myname() ;  

     


}