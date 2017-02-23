#ifndef COUNTS_H
#define COUNTS_H

#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Counts {
public:
	Counts() {} // Default Constructor: do nothing
	void readFile(char st[]); // read a file given by command prompt
	int inVec(string); // determine if a Menu item already exists in the vectors
	void print() const; // print the results
private:
	vector<string> names; // name of each Menu item
	vector<double> prices; // total price of each menu item
	vector<int> recurrence; // number of items encountered
	void readFile(string fname); // read a file by string name
};

#endif // !COUNTS_H
