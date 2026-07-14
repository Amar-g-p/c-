#include<bits/stdc++.h>
using namespace std;
struct Car{
    string brand;
    int year;
};
void myFunction(Car c){
    cout << "Brand: " << c.brand << " , year: " << c.year << "\n";
}
int main(){
    Car myCar = {"Toyota", 2020};
    myFunction(myCar);
    return 0;
}