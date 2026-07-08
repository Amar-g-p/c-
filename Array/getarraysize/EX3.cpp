#include<bits/stdc++.h>
using namespace std;
int main(){
    int myNums[5] ={1,2,3,4,5};
    for(int i = 0; i < sizeof(myNums)/sizeof(myNums[0]); i++){
        cout << myNums[i] << "\n"; 
    }
}