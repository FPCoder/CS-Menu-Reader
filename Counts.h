#ifndef COUNTS_H
#define COUNTS_H

#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Counts {
public:
	Counts() {}
	void readFile(char st[]);
	void readFile(string fname);
	int inVec(string);
	void print() const;
private:
	vector<string> names;
	vector<double> prices;
	vector<int> recurrence;
};

#endif // !COUNTS_H
