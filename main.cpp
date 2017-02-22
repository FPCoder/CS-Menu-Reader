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
#include "Counts.h"
using namespace std;

int main(int argc, char *argv[]) {
	Counts ct;
	/*int size = argc;
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
	}*/
	//Checks subsequent menues with vectors and adds to items/prices/recurrence accordingly
	//TO-DO
	for (int i = 1; i < argc; ++i) {
		ct.readFile(argv[i]);
	}
	ct.print();
	
	/*char menu[5];
for(int i = 0; menu[i] != '\0'; i++)
    menu[i] = '\0';
for(int i = 0; i <= 8; i++) {
    menu = "file" + (i + '0');
    ifstream myfile(menu1);

//Open data files to read in data
  ifstream myfile ("menu1.txt");

  if (myfile.is_open())
  {
	  //read in the size of the matrix
	  myfile>>N;

	  //declare double pointer matrix
	  int **matrix = new int*[N];
stream myfile(menu);
}
	  //Allocate Memory
	  for(int i = 0; i < N; i++){
		  matrix[i] = new int [N];
	  }
	  //make sure fileis not at end and read int the contents into the array matrix
	  while(myfile.good()){
		  for(int i = 0; i < N; i++){
			  for(int j = 0; j <N; j++){
		  myfile>>matrix[i][j];
			  }
		  }
	  } */

	
	//Divides prices by corresponding recurrence and prints accordingly
	//TO-DO


	return 0;
}
