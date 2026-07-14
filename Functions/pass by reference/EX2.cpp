#include<bits/stdc++.h>
using namespace std;
void swapNums(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}
int main(){
    int firstNum = 10;
    int secondNum = 20;
    cout << "Before swap: ";
    cout << firstNum << " " << secondNum << "\n";
    
    swapNums(firstNum,secondNum);
    cout << "After swap: ";
    cout <<firstNum << " "<< secondNum << "\n";
   
    return 0;
}