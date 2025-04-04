#include "readFromFile.hpp"
#include <fstream>
#include <string>

bool readFromFile(int& N, std::vector<double>& arr)
{
	// Prompt the user for the filename and read it.
	std::string fileName;
	std::cout << "Please enter the filename to open: ";
	// Allows for spaces in the filename
	if (!std::getline(std::cin, fileName)) {
		std::cerr << "Error reading the filename!\n";
		return false;
	}

	// Open the file.
	std::ifstream textFile{ fileName };
	if (!textFile.is_open()) {
		std::cerr << "Error opening text file: " << fileName << '\n';
		return false;
	}

	// Read the number of elements (size) of the array
	if (!(textFile >> N)) {
		std::cerr << "Error reading the size of the array!\n";
		return false;
	}
	if (N <= 0) {
		std::cerr << "The array size needs to be a positive number!\n";
		return false;
	}

	// Resize the vector to hold N elements.
	arr.resize(N);

	// Read each element and add them to the array.
	for (int i = 0; i < N; ++i) {
		if (!(textFile >> arr[i])) {
			std::cerr << "Error reading array element " << i+1 << ".\n";
			return false;
		}
	}

	textFile.close();
	return true;
}