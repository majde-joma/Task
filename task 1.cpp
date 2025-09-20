#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Math
{
public:
	static int add(int a, int b) {
		return a + b;
	}
};
int main()
{
	cout << "Sum = " << Math::add(5, 7) << endl;
	return 0;
}
