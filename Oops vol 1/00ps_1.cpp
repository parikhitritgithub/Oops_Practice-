#include<iostream> 
using namespace std ; 


class student {
   
private : 
    string Name ; 
    int Age = -1 , Roll_number  ;
    float CGPA = -1 ; 
    string Branch = "0" ;
    string Grade ; 

    public : 
    // setter for name 
    void setname (string n ) {
        Name = n ; 
    }
    //getter for name 
    string getName () {

        return Name ; 
    }
    //setter for age
    void setAge (int a) {
        if(a > 18 ) {
            Age = a ; 
        } else {
            cout << "INVALID AGE " << endl ;

        }
    }
    //getter for age
    int getAge () {
        if ( Age == -1){
            cout << "INVALID AGE " ; 
        }
        else {
            return Age ; 
        }
    }
    //setter for rollnumber 
    void setRoll_number(int number) {
        Roll_number = number; 
    }
    //getter for rollnumber 
     int getRoll_number(){
        return Roll_number ;
     }
    void setCGPA (float c) {
        if( c >= 7  && c <= 10 ) {

            CGPA = c ; 
    } else {
        cout << "INVALID CGPA" << endl ;
    }
}
    float getCGPA () {
        if (CGPA == -1 ) {
             cout << "INVALID CGPA " << endl ;
     
        }else {
            return CGPA ; 
        }
    }
    //setter for branch
    void setBranch (string b) {
        if(b == "CSE") {
            Branch = b ;
        } else {
            cout << "INVALID BRANCH " << endl ; 
        }
    }
    //getter for branch
    string getBranch () {
        if (Branch == "0" ) {
            cout<< "INVALID BRANCH" << endl ;
        }else {
            return Branch ; 
        }
        }

    };
int main () {
    student s1 ; 
    s1.setname("Parikhit kurmi") ;
    s1.setAge(22) ; 
    s1.setRoll_number(87);  
    s1.setCGPA(0) ; 
    s1.setBranch( "MECHANICAL ENGINEERING" ) ;  

    cout<< s1.getName() << endl ; 
    cout<< s1.getAge() << endl ;
    cout<< s1.getRoll_number() << endl ; 
    cout<< s1.getCGPA() << endl ;
    cout << s1.getBranch() << endl ;
    
}