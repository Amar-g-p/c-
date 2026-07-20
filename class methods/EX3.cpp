//Parameters
//You can also pass values to methods just like regular functions:
#include<bits/stdc++.h>
using namespace std;
class Car{
    public:
    int speed(int maxSpeed);
    };
    int Car::speed(int maxSpeed){
        return maxSpeed;
    }
int main(){
    Car speed;
    cout << "maxSpeed is: " << speed.speed(200);
   return 0;
}
