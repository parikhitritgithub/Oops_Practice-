// pure virtual function 
#include <iostream> 
#include<vector>

using namespace std ; 
class Animal{
    public: 
   virtual void speak () = 0 ; // pure virtual function is also called as a abstrect class 
   // in pure virtual fun or abstrect class there will be a condition 
   // ----  we not able to create direct object of this animal class 
}; 

class Dog : public Animal {
    public: 
    void speak() {
        cout << "Bark" << endl ; 
    }

} ; 
class cat : public Animal {
    public : 
    void speak() {
        cout << "meow" << endl ;
    }
} ; 
class lion : public Animal {
    public : 
    void speak() {
        cout << "roar" << endl ;
    }
} ; 
class dinasour : public Animal {
    public : 
    void speak () {
        cout << "Grawoling" << endl ;
    }
} ; 
int main(){
    Animal *p ;
    // p = new Dog() ; 
    // p->speak();
    vector<Animal*>ans ;  
    ans.push_back(new Dog()) ; 
    ans.push_back(new cat()) ; 
    ans.push_back(new lion()) ; 
    ans.push_back(new dinasour()) ; 
    for(int i = 0 ; i< ans.size(); i++ ) {
        p = ans[i];
        p->speak() ; 

    }
}