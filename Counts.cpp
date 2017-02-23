#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "Counts.h"
using namespace std;

void Counts::readFile(char fname[]) {
	string st(fname);
	readFile(st);
}

void Counts::readFile(string fname) {
	ifstream inFS(fname);
	string name;
	double price;
	int count, i;

	if (!inFS.is_open()) {
		cout << "Unable to open " << fname << endl;
		return;
	}
	while (inFS >> name >> price) {
		i = inVec(name);
		if (i < 0) { // if name not already in vectors
			names.push_back(name);
			prices.push_back(price);
			recurrence.push_back(1);
		}
		else {
			/*names.insert(names.begin() + i + 1, "");
			prices.insert(prices.begin() + i + 1, price);
			recurrence.insert(recurrence.begin() + i, recurrence.at(i) + 1);*/
			prices[i] += price;
			recurrence[i]++;
		}
	}
}

int Counts::inVec(string name) {
	for (int i = 0; i < names.size(); ++i)
		if (names.at(i) == name)
			return i;
	return -1; // only reached if no match is found
}

void Counts::print() const {
	cout << "Names\tAvg Prices\tRecurrence" << endl;
	for (int i = 0; i < names.size(); ++i) {
		cout << names.at(i) << "\t";
		cout << std::fixed << std::setprecision(2) << prices.at(i) / recurrence.at(i) << "\t\t";
		cout << recurrence.at(i) << endl;
	}
}