#include <iostream>
using namespace std;

int main() {
    double result;
    double x, y;
    int addType;
    
    cout << "What is your first number?: ";
    cin >> x;
    cout << "And your second one?: ";
    cin >> y;
    
    do {
        cout << "Do you want to: 1. add, 2. subtract, 3. multiply or 4. divide?" << '\n' << "Insert the corresponding number: ";
        cin >> addType;
        if (addType == 1) {
            result = x + y;
        }
        else if (addType == 2) {
            result = x - y;
        }
        else if (addType == 3) {
            result = x * y;
        }
        else if (addType == 4) {
            result = x / y;
        }
        else {
            cout << "Not a valid number, try again." << endl;
        }
    }
    while(addType <= 0 || addType > 4);
        
        cout << "Your result is " << result;

    return 0;
}