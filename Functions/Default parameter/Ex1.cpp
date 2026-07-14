#include<bits/stdc++.h>
using namespace std;
void myFunction(string country = "Norway"){
    cout << country << "\n";
}
int main(){
    myFunction("India");
    myFunction("sweden");
    myFunction();
    myFunction("America");
    return 0;
}