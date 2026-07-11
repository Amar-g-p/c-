#include<bits/stdc++.h>
using namespace std;
int main(){
    string food = "Pizza";
    string * ptr = &food;

     cout << food << "\n";
     
     cout << &food << "\n";
     
     cout << ptr << "\n"; //Reference: Output the memory address of food with the pointer (0x6dfed4)
     
     cout << *ptr << "\n"; // Dereference: Output the value of food with the pointer (0x6dfed4) 
   
     *ptr = "Burger";// Change (modify) the value of the pointer
    
     cout << *ptr << "\n"; // Output the new value of the pointer (Hamburger)
    
     cout << food; // Output the new value of the food variable (Hamburger)
    
     return 0;
}