#include<bits/stdc++.h>
#include "class.cpp"
using namespace std;
int hero::timeToComplete = 10;
int main(){
    hero h1;
    // Dynamic memory allocation.
    hero* h2 = new hero;
    h2->setHeath(80);
    padding p;
    greedyAllignment gp;
    h1.setHeath(70);
    h1.setLevel('A');
    cout<<"Heath and level are "<<h1.getHeath()<<" and "<<h1.getLevel()<<endl;
    cout<<"Padding and greedy allignment "<<sizeof(p)<<" "<<sizeof(gp)<<endl;
    cout<<"Memory and the adress of the pointer "<<sizeof(h2)<<" "<<" "<<&h2<<endl;
    cout<<"Ways to acess from pointer memory "<<(*h2).getHeath()<<" "<<h2->getHeath()<<endl;
    cout<<"Time to complete "<<hero::timeToComplete<<endl;
    // Copy constructor.
    hero h3(h1);
    hero h4 = h1;
    // As I can see that destructor is not called for h2 i.e. the dynamic allocation.
    // I will have to call it mannually for destructor.
}
/*


    Summary of part 1 of the lecture.

    What is class and how to create it.
    What is object and how to create it, what are its data members and functions.
    Acess modifiers.
        public, private, protected.
    Static and dynamic allocation.
    hw-: padding and greedy allocation.
    Constructors.
        Simple, default, parameterized, copy.
        Copy Assignment operator.
    Destructior 
    Deep copy and shallow copy!
    h/w-: const keyword, initialisation list.
    Static var, member functions.

*/