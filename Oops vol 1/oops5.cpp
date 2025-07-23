
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
    // // 3 parameterized constructor 
    // student(string a, int b , int c ) { 
    //     name = a ; 
    //     age = b ; 
    //     salary = c ; 
    // } // same number of argument in two different contructor not allowed 
    // 3 parameterized constructor with this 
    //----------------------------------------------------------------
    // student(string name , int age , int salary ) {
    //     this->name = name ; 
    //     this->age = age ; 
    //     this->salary = salary ;
    // }
    //---------------------------------------------------------------------
    // 3 parameterized constructor 
    inline student(string a , int b , int c ): name(a) , age(b) , salary(c) {

    }
    // 2 parameterized constructor 
    student (string a , int b ){ 
        name = a ; 
        age = b ; 
    }

    void dispaly () {
        cout << "Name : " << name << endl ; 
        cout << "Age : " << age << endl ; 
        cout << "Salary : " << salary << endl ; 
    }

};
int main () {
    student A1 ; 
    student A2("Parikhit" , 22 , 3000) ; 
    student A3 ("D-DAY" , 4000) ; 
    A1.dispaly() ; 
    A2.dispaly() ; 
    A3.dispaly() ; 

}