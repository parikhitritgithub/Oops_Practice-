// multiple inheritence 
#include<iostream>
using namespace std ; 
class Engineer {
    public : 
     void money () {
        cout << "money for the engineer : 2lpa" ; 
     }

     int quantity ; 
    Engineer(){
        cout<< " we are engineer with quantity " << quantity << endl; 
    }

}; 
class Youtuber {
    public:
    int subscriber ;  
    void subcount () {
        cout << " i am a youtuber " ; 
    }
    Youtuber(){ 
        cout << " i am a youtuber with subcount" << subscriber << endl ; 
    }

};
class manager : public Engineer , public Youtuber {
    public : 
    string name ; 
    
    manager(string name , int quantity , int subscriber) {
        this-> name = name ; 
        this-> quantity = quantity ; 
        this -> subscriber = subscriber ; 
    }
    void show () {
        cout << name << " " << quantity << " " << subscriber << endl ;
    }


} ; 
int main  () {
    manager A1() ; 
    A1("parikhit" , 22 , 203 ) ; 
    A1.show() ; 

}