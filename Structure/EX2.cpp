#include<bits/stdc++.h>
using namespace std;
struct car{
        string brand;
        string model;
        int year;
    };
int main(){
    car myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 2001;

    car myCar2;
    myCar2.brand = "Benz";
    myCar2.model = "c1";
    myCar2.year = 2000;

cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
return 0;
}