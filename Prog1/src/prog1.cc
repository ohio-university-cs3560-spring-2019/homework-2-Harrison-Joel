/**********************************************************************************
*	Joel Harrison
*	CS3560 HW1 Ohio University
*	Find Replace program
*	with input output file
*   commandline format (./program "target" "replacement" < input.txt > output.txt)
**********************************************************************************/


#include "../include/ReadWrite.h"

#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string targetString;
string replacementString;




int main(int argc, char* argv[]) {
	ReadWrite newFiles1;

	//read in
	newFiles1.ReadFile(std::cin);

	//set command line arguments as strings
	targetString = argv[1];
	replacementString = argv[2];

	//replace
	newFiles1.Replace(targetString, replacementString);

	//write out
	newFiles1.WriteFile();

	return 0;
}

