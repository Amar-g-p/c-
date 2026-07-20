#include<bits/stdc++.h>
using namespace std;
class Car{
    public:
    string Brand;
    string Model;
    int Year;

    Car(string x, string y, int z){
        Brand = x;
        Model = y;
        Year =z;
    }
};
int main(){
    Car car1("BMW", "X5", 2000);
    Car car2("TATA", "Harier", 2025);

    cout << car1.Brand << " " << car1.Model << " " << car1.Year << "\n";
    cout << car2.Brand << " " << car2.Model << " " << car2.Year << "\n";
    return 0;
}