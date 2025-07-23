// Dynamic memory allocation using heap 
#include<iostream> 
using namespace std ; 
class Student {

    public : 
    string name ; 
    int age , rollnumber ; 
    string grade ; 

} ; 
int main() {
    Student  *S = new Student  ; 
    (*S).name = "parikhit" ; 
    (*S).age = 22 ; 
    (*S).rollnumber = 87 ; 
    (*S).grade = "A++" ; 

    cout << S-> name << endl ; 
    cout << S-> age  << endl ; 
    cout << S-> rollnumber  << endl ; 
    cout << S-> grade << endl ; 


    

}