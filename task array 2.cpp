#include <iostream>
#include <cmath>
#include <iomanip>  
using namespace std;
int main()
{
int num[2][2];
cout << "Enter 4 numbers: ";
int sum = 0;
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        cin >> num[i][j];
        sum += num[i][j];
    }
}
cout << "The sum of the numbers is=  " << sum << endl;
    
 

 
 




return 0;
}
