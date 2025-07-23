// hierarchical inheritance 
#include<iostream> 
using namespace std ; 
class Human{
    protected : 
    string name ; 
    string occupation ; 
    public : 
    Human(string name , string occupation) {
        this-> name = name ; 
        this-> occupation = occupation ; 
    }
    void work () {
        cout<< "I am working with the human " << endl ;
    }
} ; 
class Student : public Human  {
    public : 
    int id ; 
    Student(string name , string occupation , int id ) : Human(name , occupation) { 
        this -> id = id ; 
    }
    void display(){
        cout<< name << " " << occupation << " " << id << endl ;
    }
}; 
class Teacher : public Human {
    public: 
    string subject ; 
    Teacher(string name , string occupation , string subject ) :Human (name , occupation){
        this-> subject  = subject ; 
    }

    void display () {
        cout << name << " " << occupation << " " << " "  << subject << " " << endl ;
    }

} ; 
int main() {
    Human H1("parikhit" , "student") ; 
    H1.work() ; 
    Student A1("Parikhit" , "student" , 87) ; 
    A1.display(); 
    Teacher T1("Parikhit", "Teacher" , "English") ; 
    T1.display() ; 
    


}