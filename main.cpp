/* To Do: 
	Read list files
	Create Vector for Item names
	Check prices on each list file and find average
	put averages into separate vector
	print vectors*/

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int size = argc;
	std::string str;
	std::vector<double> prices;
	std::vector<string> names;
	std::vector<int> recurrence;
	//Creates a vector containing item names of 1st menu
	string name = "";
	double num;
	ifstream fileReader;
	fileReader.open(str);
	while (!(fileReader.eof())) {
		fileReader >> name;
		names.push_back(name);
		fileReader >> num;
		prices.push_back(num);
		recurrence.push_back(1);
	}
	//Checks subsequent menues with vectors and adds to items/prices/recurrence accordingly
	//TO-DO


	//Divides prices by corresponding recurrence and prints accordingly
	//TO-DO


    return 0;
}
