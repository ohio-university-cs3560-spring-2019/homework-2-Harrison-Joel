/**********************************************************************************
*	Joel Harrison
*	CS3560 HW1 Ohio University
*	Find Replace program
*	with input output file
*   commandline format (./program "target" "replacement" < input.txt > output.txt)
**********************************************************************************/
#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <vector>

class ReadWrite {
public:
	void ReadFile(std::istream& Ifile);
	void WriteFile();
	void Replace(std::string target, std::string replacement);

private:
	std::vector<char> inputVector;
};