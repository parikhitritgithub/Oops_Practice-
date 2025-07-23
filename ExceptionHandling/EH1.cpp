#include<iostream>
using namespace std ; 
int main () {
    try {
        int *p = new int[10000000000]; 
        cout<< "Memory allocation is successfull" ; 
        delete []p ; 
    }
    catch(const exception &e ) {
        cout<< "Exception occure due to line no 9 "<< e.what()<< endl ; 
    }

    
}