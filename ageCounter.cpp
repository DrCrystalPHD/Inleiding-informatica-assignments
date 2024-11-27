#include <iostream>
#include <ctime>
using namespace std;



int main() {

    int year;
    cout << "What year were you born in?: " << endl;
    cin >> year;

    int currentAge = 2024 - year;
    cout << "You are " << currentAge << " years old!!";

    return 0;
}


