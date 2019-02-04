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
#include <algorithm>



void ReadWrite::ReadFile(std::istream& Ifile){
	std::ostringstream stringStream;

	stringStream << Ifile.rdbuf();//read in the input file from and put it into the string stream
	const std::string fileString = stringStream.str();//new string = string stream

	//for loop takes string and puts each character into the vector
	for (int i = 0; i <= fileString.size(); ++i) {
		inputVector.push_back(fileString[i]);
	}
	return;
}



void ReadWrite::Replace(std::string target, std::string replacement) {
	int ssize = target.size();						//target size
	int replacemetsize = replacement.size();		//replacement size
	std::vector<char>::iterator position;			//iterator for our vector
	bool done = 0;


	//while loop to runthrough the input until there are no more target strings
	while(done==0){
		position = search(inputVector.begin(), inputVector.end(), target.begin(), target.end());	//search function from algorithm lib

		//check if search returned a position
		if (position != inputVector.end()) {
			
			inputVector.erase(position, position + ssize);	//remove target string

			//for loop that inserts new string in vector
			for (int i = replacemetsize; i >= 0 ; --i) {
				inputVector.insert(position,replacement[i]);
			}
		}

		else {
			done = 1;
		}
	}
	return;
}

void ReadWrite::WriteFile() {
	//for loop with iterator that runs through vector and prints it out
	for (std::vector<char>::const_iterator i = inputVector.begin(); i != inputVector.end(); ++i)
	std::cout << *i;

	return;
}
