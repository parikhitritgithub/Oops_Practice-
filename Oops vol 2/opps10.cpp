//Hybrid Inheritence 
#include<iostream> 
using  namespace std ; 

// student 
// girl 
// boy 
// female 
//male 
class student {
    public : 
    void print () {
        cout << "I am a student" ; 
    }
} ; 
class female { 
    public: 
    void print () {
        cout << "I am a female " ; 
    }
} ; 
class male {
    public : 
    void print () {
        cout << "I am a male " ; 
    }
} ;
class girl : public student , public female { 
    public : 
    void print() {
        cout << "I am a girl" ; 
    }
};  
class boy: public student , public male { 
    public : 
    void print () {
        cout << "I am a boy " ; 
    }

} ; 

int main () {
    girl A1 ; 
    A1.print() ; 
    boy B1 ; 
    B1.print() ; 
}