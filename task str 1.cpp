#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>  
using namespace std;
int main()
{
string text;
cout << "Enter a word: ";
cin >> text;

int count = 0;
for (char c : text) {
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        count++;
    }
}

cout << "Number of vowels: " << count << endl;









  
return 0;
}

