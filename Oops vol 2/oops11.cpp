#include<iostream> 
using namespace std ; 
class Human {
    public: 
    string name ; 
    void display () {
        cout<< "My name is " << name << endl ;
    } 
} ; 
class Engineer : public virtual Human {
    public : 
    string specialization ; 
    void Work () {
        cout << "I have a specialization in " << specialization << endl ;
    }
} ; 
class Youtuber : public virtual Human{ 
    public : 
    int subcount ; 
    void contentmmaker() 
    {
        cout << " I have a subscriber  base of " << subcount << endl ;
    }
} ; 
class codeteacher :public Youtuber , public Engineer {
    public  : 
    int salary ; 
    codeteacher() {

    }
   
    codeteacher(string name , string specialization , int subcount ) {
        this -> name = name ; 
        this -> specialization = specialization ; 
        this -> subcount = subcount ; 
    }


} ; 
int main () {
    codeteacher A1("parikhit" , "cse" , 23 ) ; 
    A1.display() ; 
}