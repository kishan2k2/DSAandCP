#include<iostream>
using namespace std;
class hero{
private:
    int health;
    char level;
public:
    // Static variables are tied to class and not the instance.
    static int timeToComplete;
    // Default constructor.
    hero(){
        cout<<"Constructor called "<<endl;
    }
    // Parameterised constructor
    // Important thing to note is that when I write the any constructor let it be default or parameterized the default one gets revoked.
    // hero(int health, int level){
    //     this->health = health;
    //     this->level = level;
    // }
    // I can use initialisaiton list to reduce the number of redundant operations.
    hero(int h, int l): health(h), level(l){}
    // Copy constructor.
    // This gives flexibility while copying.
    hero(hero& temp){
        // Parameter needs to be adress cause if I call it normally it will become pass by value, so it will be creating a copy which requires copy constructor to be called and it will get stuck in an infinite loop. ! Not in an infinite loop but it wont be finding the default copy constructor.
        health = temp.getHeath() + 10;
        level = temp.getLevel();
    }
    // Destructor to deallocate or free the memory.
    ~hero(){
        cout<<"Destructor called"<<endl;
    }
    int getHeath(){
        return this->health;
    }
    char getLevel(){
        return this->level;
    }
    void setHeath(int health){
        // health = health; // when we call heath it will find the instance of heath in the current scope first, but we want to change it for the object.
        this->health = health; // In this case this keyword is the adress of the object.
    }
    void setLevel(char l){
        level = l; // This wont be having any issue cause there is only one instance of level.
    }
    // Static function.
    /*
        function linked to the class and not the object.
        No acess to this keyword.
        Only acess to the static members.
    */
};
class padding{
    private:
        char c;
        char a;
        double b; //Until now 1 size is taken and it needs to be padded to be mulitple of 8 so 7 padding is added.
};
class greedyAllignment{
    private:
        char c;
        double b;
        char a; // Until now 8 is the size and it is mulitple of 1 so no padding is added.
};