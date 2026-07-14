#include<bits/stdc++.h>
using namespace std;
// Function to convert Fahrenheit to Celsius
float toCelsius(float fahrenheit){
    return (5.0/9.0)*(fahrenheit - 32.0);
}
int main(){

    // Set a fahrenheit value
    float f_Value = 98.8;

    // Call the function with the fahrenheit value
    float result =toCelsius(f_Value);

    // Print the fahrenheit value
    cout << "Fahrenheit: " << f_Value << "\n";

     // Print the result
     cout << "Convert Farenheit to Celsius: " << result << "\n";    
     return 0;

}