#include<bits/stdc++.h>
using namespace std;
class Car{
    public:
    string Brand;
    string Model;
    int year;
};
int main(){
   Car carObj1;
    carObj1.Brand = "BMW";
    carObj1.Model = "X5";
    carObj1.year = 1999;

    Car carObj2;
    carObj2.Brand = "TATA";
    carObj2.Model = "Seara";
    carObj2.year = 2026;

    Car carObj3;
    carObj3.Brand = "MM";
    carObj3.Model = "XUV700";
    carObj3.year = 2025;

  cout << carObj1.Brand << " " << carObj1.Model << " " << carObj1.year << "\n";
  cout << carObj2.Brand << " " << carObj2.Model << " " << carObj2.year << "\n";
  cout << carObj3.Brand << " " << carObj3.Model << " " << carObj3.year << "\n";
  return 0;
}