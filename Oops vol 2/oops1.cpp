#include<iostream> 
using namespace std ;
class  customer {
    string name ; 
    int *data ; 
    public : 
    // constructor 

    customer() {
        name = "4" ; 
        cout << "constructor name is " << name << " " << endl ;
    }
    customer(string name ) {
    this->name = name ; 
    cout<< "Constructor name is " << name << " " << endl; 
    }
   ~customer() {
    cout << "Distructor name is " << name << " " << endl; 
   }
} ;
int main () {
     customer A1("1") , A2("2") , A3("3") ; 
     customer *A4 = new customer ; 
     delete A4 ; 

}