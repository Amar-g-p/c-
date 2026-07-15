#include<bits/stdc++.h>
using namespace std;
int plusFunc(int x, int y){
    return x + y;
}
int plusFunc(int x, int y, int z){
    return x + y + z;
}
int main(){
    int result1 =plusFunc(2,4);
    int result2 = plusFunc(3,4,5);
    cout << "sum of two numbers: " << result1 << "\n";
    cout << "sum of three numbers: " << result2;
    return 0;
}
