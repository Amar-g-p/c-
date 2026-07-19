#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 1; i <= 3; i++){
        auto show = [i](){
        cout << "Numbers: " << i << "\n";
        };
        show();
    }
    return 0;
}