#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n > 1){
        return n * factorial(n - 1);
    }
    else{
        return 1;
    }
}
int main(){
    cout << "Factorial of 9 is: " << factorial(9);
    return 0;
}