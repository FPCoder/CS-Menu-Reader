#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "Counts.h"
using namespace std;

/**
given a command line argument, convert to the string form and read the file
*/
void Counts::readFile(char fname[]) {
	string st(fname);
	readFile(st);
}

/**
read the file and push data into the respective vectors.
Ends when no more data can be read.
*/
void Counts::readFile(string fname) {
	ifstream inFS(fname.c_str());
	string name;
	double price;
	int count, i;

	if (!inFS.is_open()) { // print error and return if file not found
		cout << "Unable to open " << fname << endl;
		return;
	}
	while (inFS >> name >> price) {
		i = inVec(name); // index of the item, -1 if not found
		if (i < 0) { // if name not already in vectors
			names.push_back(name);
			prices.push_back(price);
			recurrence.push_back(1); // occurence count of each item starts at 1
		}
		else {
			prices[i] += price;
			recurrence[i]++; //increment the recurrence
		}
	}
}

/**.
determine if the name of the entree is already in the vector "names"
@return -1 if not already in vectors
*/
int Counts::inVec(string name) {
	for (int i = 0; i < names.size(); ++i)
		if (names.at(i) == name)
			return i;
	return -1; // only reached if no match is found
}

/**
prints results: Names, Average Price, # of Occurences
*/
void Counts::print() const {
	cout << "Names\tAvg Prices\tRecurrence" << endl;
	for (int i = 0; i < names.size(); ++i) { 
		cout << names.at(i) << "\t"; //print out names

        //print the average of the price
		cout << std::fixed << std::setprecision(2) << prices.at(i) / recurrence.at(i) << "\t\t"; 

		cout << recurrence.at(i) << endl; //print the recurrences
	}
}
