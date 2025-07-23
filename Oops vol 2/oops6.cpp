//inheritence part 2 ; 
#include<iostream> 
using namespace std ; 
class Human {
    protected : 
    string name ; 
    int age ; 
    public : 
    Human (string name , int age) {
        this -> name = name ; 
        this -> age = age ; 
    }
    void displaything () {
        cout<< name << " " << age  << endl ;
    }
    void work (){
        cout << "I am working \n " ; 
    }
}; 
class Student : public Human {
    int rollnumber , fees ; 
    public : 
    Student (string name , int age , int rollnumber , int fees ) : Human (name , age ) {
        this-> rollnumber = rollnumber ; 
        this-> fees = fees ; 
    }
    void display () {
        cout << name << " " << age << " " << rollnumber << " " << fees << endl ;
    }

} ; 
int main () {
    Student A("parikhit" , 22 , 87 , 4000) ;
    A.display() ; 
    Human B("parikhit1" , 22 ) ; 
    B.displaything() ; 
    B.work() ; 
}