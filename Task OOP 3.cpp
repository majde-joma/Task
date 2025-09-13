#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Patient {
private:
    string name;
    int age;
    string medicalHistory;
    string password;
public:
    Patient(const string& n, int a, const string& pass)  
        : name(n), age(a), password(pass), medicalHistory("")  {}
    void addHistory(const string& entry) {
        if (!medicalHistory.empty()) {
            medicalHistory += "\n";
        }
        medicalHistory += entry;
    }

     
    string getHistory(const string& pass) const {
        if (pass == password) {
            return medicalHistory.empty() ? "No medical history." : medicalHistory;
        }
        else {
            return "Access denied: wrong password.";
        }
    }

    
    string getBasicInfo() const {
        return "Name: " + name + ", Age: " + to_string(age);
    }
};

 int main() {
    Patient p1("Ahmed Ali", 30, "1234");

    cout << p1.getBasicInfo() << endl;

    p1.addHistory("2023: Flu treatment");
    p1.addHistory("2024: Annual check-up");

    cout << "\nTrying with wrong password:\n";
    cout << p1.getHistory("0000") << endl;

    cout << "\nTrying with correct password:\n";
    cout << p1.getHistory("1234") << endl;
    return 0;
 }
