#include<iostream>
using namespace std;
// Base class or parent class.
class parent {
public:
    string surname;
    string religion;
    string parName;
};
// Derived class or child class.
// Single inheritance.
class child: public parent {
public:
    string name;
    int age;
};
// Multilevel inheritance.
class grandchild: public child{};
// Mulitple inheritance.
class Mom{
public:
    string name = "MOM";
};
class Dad{
public:
    string name = "DAD";
};
class son : public Mom, public Dad{
public:
    son(){
        cout<<"This is son"<<endl;
    }
    // Function overloading, only possible by changing the params of 
    // Operator overloading.
    void operator + (son& obj){}
};
// Heirarchical Inhertiance
class child2: public parent{};
// Hybrid inheritance is the combination of more than one type of inhertiance.
/*
    Protected class.
        Similar to private acess modifier but if it can inherited.
    
    If the class inherited using public acess modifier then it will inherit the modifier of the base class.
    If the class inherited using protected acess modifier, then private is inacessable and others are protected.
    If 


*/