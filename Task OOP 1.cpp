 #include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 class  Character {
private:
	string name;
	int	health;
	int level;

public:
	Character(string n, int h, int l) {
		name = n;
		health = h;
		level = l;
	}
    void takeDamage(int amount) {
        health -= amount;
        if (health < 0) {
            health = 0;
        }
    }

    
    void levelUp() {
        level++;
    }

     
    void getStatus() {
        cout << "Name: " << name << endl;
        cout << "Health: " << health << endl;
        cout << "Level: " << level << endl;
    }
};

int main() {
    Character hero("majde", 100, 1);
    hero.getStatus();
    cout << "\n-- Taking 30 damage --\n";
    hero.takeDamage(30);
    hero.getStatus();

    cout << "\n-- Leveling up --\n";
    hero.levelUp();
    hero.getStatus();

    cout << "\n-- Taking 80 damage --\n";
    hero.takeDamage(80);
    hero.getStatus();

    
    return 0;
}
 
