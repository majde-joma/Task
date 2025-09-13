#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Book {
private:
    string title;
    string author;
    double price;

public:
    Book(const string& t, const string& a, double p) {
        title = t;
        author = a;
        if (p > 0)
            price = p;
        else
            price = 0;
    }
    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    double getPrice() const {
        return price;
    }
    void setPrice(double newPrice) {
        if (newPrice > 0) {
            price = newPrice;
        }
        else {
            cout << "Invalid price. Must be greater than 0." << endl;
        }
    }
    void printInfo() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};
int main() {
    Book b1("Clean Code", "Robert C. Martin", 45.5);

    b1.printInfo();

    cout << "\n-- Trying to set price to -10 --\n";
    b1.setPrice(-10);  
    b1.printInfo();

    cout << "\n-- Updating price to 60 --\n";
    b1.setPrice(60);
    b1.printInfo();

    return 0;
}

 
