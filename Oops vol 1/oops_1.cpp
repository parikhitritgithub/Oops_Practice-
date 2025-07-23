#include<iostream> 
using namespace std ; 


class student {
    public: 
    string Name ; 
    int Age , Roll_number ;
    float CGPA ; 
    string Branch , Grade ; 

};
int main () {
    student s1 ;
    s1.Name = "parikhitkurmi" ; 
    s1.Age = 22 ; 
    s1.Roll_number = 87 ; 
    s1.Branch = "Computer science and engineering";  
    s1.Grade = "A++" ; 

    cout<< s1.Name << endl << s1.Age << endl << s1.Roll_number << endl << s1.Branch<< endl <<  s1.Grade << endl ;

}