#include <iostream>
#include <cmath>
#include <iomanip>  
using namespace std;
int main()
{
int num[4];
int mix = 0;
cout << "Enter 4 numbers: ";
for (int i = 0; i < 4; i++) {
    cin >> num[i];
    if (num[i] > mix) {
        mix = num[i];
    }
}
cout << "The maximum number is: " << mix << endl;
return 0;
}
