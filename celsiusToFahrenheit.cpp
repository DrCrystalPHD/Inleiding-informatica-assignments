#include <iostream>
using namespace std;

int main() {

    double tempC;
    cout << "Greetings and welcome to my Temperature converter 9000!" << '\n' << "What is the temperature you want go convert into Fahrenheit (from Celsius)?: ";
    
    // here is where the userinput for the temperature in Celsius is asked
    cin >> tempC;

    // here is where tempF is declared with the formula of Fahrenheit
    double tempF = (tempC * 9/5) + 32;

    // the final resulting message
    cout << "The temperature is: " << tempF << " Fahrenheit";

    return 0;
}