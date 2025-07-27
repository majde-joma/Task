#include <iostream>
using namespace std;
int main()
{
                                            int mark;
                                            cout << "Enter the student's mark (0 - 100): ";
                                            cin >> mark;

                                            if (mark >= 90 && mark <= 100)
                                            cout << "Grade: A";
                                            else if (mark >= 80 && mark <= 89)
                                            cout << "Grade: B";
                                            else if (mark >= 70 && mark <= 79)
                                            cout << "Grade: C";
                                            else if (mark >= 60 && mark <= 69)
                                            cout << "Grade: D";
                                            else if (mark >= 0 && mark <= 59)
                                            cout << "Grade: F";
                                            else
                                            cout << "Invalid input";

                                            cout << endl;
        return 0;
}
 
