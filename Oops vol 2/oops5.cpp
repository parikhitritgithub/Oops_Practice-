// inheritence 
#include<iostream>
using namespace std ; 
class Human{ 
    protected: 
    string name ; 
    int age ; 
    public :
    string religion  ; 
    int id ; 

} ; 
class  Student : protected Human {
    protected : 

    int std ; 
    int fees ; 

    public :
    Student(string name , int age ,int id , int std , string religion , int fees ) {
        this-> name = name ; 
        this -> age = age ; 
        this ->id = id ; 
        this-> std = std ; 
        this-> religion = religion ; 
        this -> fees = fees ; 
    }
    void display () {
        cout<< name << " " << age << " " << id << " " << std << " " << religion << " " << fees  << endl ; 
    }
}; 
class Teacher : public Human { 
    string qualification ; 
    string subject ; 
    public:
    Teacher(string name , int age , int id  , string religion , string qualification , string subject ) {
        this -> name = name ; 
        this-> age  = age ; 
        this -> id  = id ; 
        this -> religion  = religion ; 
        this-> qualification  = qualification ; 
        this-> subject  = subject ; 
    }
    void display1() {
        cout << name << " " << age << " " << id << " "<< " " << religion << " " << qualification << " " << subject << endl ; 
    }
} ; 
int main() {
    Student A("Parikhit" , 22 ,87 ,12 ,"Hindu" , 20000) ; 
    A.display() ; 
    Teacher T("gouri-shankar", 34 , 4 , "Hindu" , "phd" , "computer networks") ; 
    T.display1() ; 
}