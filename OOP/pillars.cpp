#include<bits/stdc++.h>
#include "pillarClass.cpp"
using namespace std;
int main(){
    // Encapsulation-: Practice of bundling related data along with the methods used to work with that data. Hiding of the data.
    // Inheritance-: Capability of the class to derive properties or characterstics from another class 
    // Abstraction-: Hiding uncessary information and showcasing only necessary information. Difference between abstraction and encapsulation is that one is the hiding of the data and another is the hiding of the implemenation.
    // Polymorphism-: Allows single interface to be used for different types of entities or object.
    // Two types of polymorphism, runtime and compile time and 
    // In compile time two types funtion overloading and operator overloading{Changing the default }. 
    // One difference between copy and inheritance is that inheritance is appending the structure of the parent class in it unlike copy constructor which can only be used when structure is same and copies the value of the data members.
    child c;
    c.name = "Kishan";
    c.religion = "Hindu";
    cout<<"Name and religion of the child "<<c.name<<" is "<<c.religion<<endl;
    // Testing the inheritance ambiguity.
    son s;
    cout<<s.Mom::name<<endl;
}