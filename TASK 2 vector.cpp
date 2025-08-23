 #include <iostream>
#include <vector>
using namespace std;

// Function to add a value to each element in the vector
void addValue(vector<int> &v, int value) {
    for (int &num : v) {
        num += value;
    }
}

int main() {
    vector<int> numbers = {1, 2, 3};

    addValue(numbers, 5);

    cout << "Updated vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
 
