#include "maximumSum.hpp"
#include <iostream>

// Function to find the maximum subarray using Kadane's algorithm.
// Returns a pair of indixes representing the start and end of the maximum subarray.
std::pair<int, int> maximumSum(const int N, const std::vector<double>& arr)
{
	// maxSum holds the maximum sum found so far.
	double maxSum = arr[0];
	// maxPair holds the start and end indices of that subarray.
	std::pair<int, int> maxPair(0, 0);

	// currentSum holds the sum of the current subarray under consideration.
	double currentSum = arr[0];
	// currentPair holds its start and end indices.
	std::pair<int, int> currentPair(0, 0);

	// Iterate over the array starting from the second element.
	for (int i = 1; i < N; ++i) 
	{
		// If adding the current element to the currentSum is beneficial, extend the current subarray.
		if (currentSum + arr[i] > arr[i]) {
			currentSum += arr[i];
			currentPair.second = i; // Extend the end index.
		}
		// Otherwise, start a new subarray at the current element.
		else {
			currentSum = arr[i];
			currentPair.first = i;
			currentPair.second = i;
		}

		// Update maxSum and maxPair if the current subarray has a higher sum.
		if (maxSum < currentSum) {
			maxSum = currentSum;
			maxPair = currentPair;
		}
	}

	return maxPair;
}