#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
int N;
cout << "Enter a number N: ";
cin >> N;
int* arr = new int[N];
for (int i = 0; i < N; i++) {
	arr[i] = 2 * (i + 1);
}
  cout << "First " << N << " even numbers: ";
for (int i = 0; i < N; i++) {
	cout << arr[i] << " ";
}
cout << endl;
delete[] arr;
 return 0;
}
