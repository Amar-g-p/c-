#include<bits/stdc++.h>
using namespace std;
int main(){
    string food = "Pizza";
    string &meal = food;
    meal = "Burger"; // changes both meal and food
    cout << meal << "\n";
    cout << food;
    return 0;
}