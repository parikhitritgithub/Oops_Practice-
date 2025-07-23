//polymorphisum 
/// compile time polymorpisum 
// function overloading 
#include <iostream> 
using namespace std ; 
class print {
    public : 
    void show (int a ) {
        cout<< "My first showcase number would be " << a << endl ;
    }

    void show(string name ) {
        cout << " My name is " << name << endl ;
    }

} ; 

int main () {
    print obj ; 
    obj.show(4) ; 
    obj.show("parikhit") ; 
}