#include "readFromFile.hpp"
#include "maximumSum.hpp"

int main()
{
	// Read number of elements and the array from a file
	int N;
	std::vector<double> arr;
	if (readFromFile(N, arr) == false) {
		return 1;
	}

	// Find the maximum subarray interval using Kadane's algorithm
	std::pair<int, int> maxSum = maximumSum(N, arr);

	// Output the interval in 1-based indexing (for user-friendly output)
	std::cout << "Maximum sum interval (1-based indexing): (" 
		<< maxSum.first + 1 << ", " << maxSum.second + 1 << ")\n";

	return 0;
}