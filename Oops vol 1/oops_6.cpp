#include<iostream>
using namespace std ; 

class student {
    string name ; 
    int age ; 
    int salary ; 
    public:
    // default constructor 
    student () {
        name  = "Parikhit" ; 
        age = 22 ; 
        salary = 2000 ; 
    }

    inline student(string a , int b , int c ): name(a) , age(b) , salary(c) {

    }
    // 2 parameterized constructor 
    student (string a , int b ){ 
        name = a ; 
        age = b ; 
    }

    void display () {
        cout << "Name : " << name <<  " " ; 
        cout << "Age : " << age << " " ; 
        cout << "Salary : " << salary  <<  endl ;  
    }

    // copy constructor  // no need to create or code  i code it just for kniwledge purpose 
    student(student &B) {
        name = B.name ; 
        age = B.age ; 
        salary = B.salary ; 
    }
};
int main () {
    // student A1 ; 
    student A2("Parikhit" , 22 , 3000) ; 
    student A3 ("D-DAY" , 4000) ; 
    student A4(A3) ;
    student A5 ;
    A5 = A3 ; 
    // A1.dispaly() ; 
    A2.display() ; 
    A3.display() ; 
    A4.display() ; 
    A5.display() ; 


}