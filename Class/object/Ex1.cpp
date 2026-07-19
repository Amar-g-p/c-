// create a class called myClass and object call myObj
#include<bits/stdc++.h>
using namespace std;
class myClass{
    public:
    int myNum;
    string myString;
};
int main(){
    myClass myObj;

    myObj.myNum = 15;
    myObj.myString = "Some text";

    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";
    
    return 0;
}