#ifndef MENU_H
#define MENU_H

#include <fstream>
#include <vector>
using namespace std;

class Menu {
public:
    Menu() {}
    Menu(ifstream&);
private:
    vector<string> names;
    vector<double> prices;
	vector<int> recurrence;
};

#endif // MENU_H
