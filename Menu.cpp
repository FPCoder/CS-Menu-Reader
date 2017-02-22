#include <fstream>
#include <string>
#include <vector>
#include "Menu.h"
using namespace std;

Menu::Menu(ifstream& inFS) {
    string name;
    double price;

    while (inFS >> name >> price) {
        names.push_back(name);
        prices.push_back(price);
		recurrence.push_back(1);
    }
}
