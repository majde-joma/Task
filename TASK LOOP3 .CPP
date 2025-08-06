#include <iostream>
#include <c math>
using namespace std;

int main() {
    int num;
    do {
        cout << "Enter a number: ";
        cin >> num;
    } while (num <= 10);

    cout << "You entered: " << num << endl;
    return 0;
