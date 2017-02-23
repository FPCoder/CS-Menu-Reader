#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Counts.h"
using namespace std;

int main(int argc, char *argv[]) {
	Counts ct; // keeps track of data from menu files
	for (int i = 1; i < argc; ++i) { // read each file given in argv
		ct.readFile(argv[i]);
	}

	ct.print(); // display results

	return 0;
}
