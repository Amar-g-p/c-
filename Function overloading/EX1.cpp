#include<bits/stdc++.h>
using namespace std;
int plusFunc(int x, int y){
    return x + y;
}
double plusFunc(double x, double y){
    return x + y;
}
int main(){
    int myNum1 = plusFunc(5,5);
    double myNum2 = plusFunc(4.5,4.5);

    cout << "Int; " << myNum1 << "\n";
    cout << "Double: " << myNum2;
    return 0;


}