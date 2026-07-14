#include<bits/stdc++.h>
using namespace std;
void myFunction(int myNums[5]){
    for (int i=0; i<5; i++){
        cout << myNums[i] << "\n";
    }
}
int main(){
    int myNums[5] = {10,20,30,40,50};
    myFunction(myNums);
    return 0;
}
