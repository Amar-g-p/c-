// syntax [capture](parameter){code};
#include<bits/stdc++.h>
using namespace std;
int main(){
    auto message = [](){
        cout << "Hello World!\n"; 
    };
    message();
    return 0;
}