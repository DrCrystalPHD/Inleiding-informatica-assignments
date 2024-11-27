#include <iostream>
using namespace std;

int main() {
    
    double x, y;
    
    cout << "What is your first number?: " << endl;
    cin >> x;
    cout << "And your second one?: " << endl;
    cin >> y;

    double sum = x + y;
    
    cout << "The sum of those numbers is " << sum;

    return 0;
}