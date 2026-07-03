#include <iostream>
using namespace std;
int main(){
int time = 16;

bool isMorning = time < 12; //Using Boolean Variables
bool isDay = time < 18;

if (isMorning) {
  cout << "Good morning.";
} else if (isDay) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
return 0;
}