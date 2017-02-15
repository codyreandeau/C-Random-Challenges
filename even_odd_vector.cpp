#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>


using std::vector;

int countOdd(vector<int> v);
int countEven(vector<int> v);

int main() {

	//Vector that contains five odd numbers
	//and 6 even numbers.
	vector<int> v1{1,7,2,3,14,5,9,4,8,6,12};

	//print results.
	std::cout << "There are " << countOdd(v1) << " odd numbers in the vector." << std::endl;
	std::cout << "There are " << countEven(v1) << " even numbers in the vector." << std::endl;
}

/*
	Function that counts all of 
	the odd numbers in a vector.
*/
int countOdd(vector<int> v) {

	//initialize the counter
	int count = 0;

	//Check if vector passed is empty
	if (v.empty()) {
		return 0;
	}

	//Count the number of odd numbers in vector
	for (int i = 0; i < v.size(); i++) {
		if (v[i] % 2) {
			count++;
		}
	}

	return count;
}

/*
	Function that counts all of 
	the even numbers in a vector.
*/
int countEven(vector<int> v) {

	//initialize the counter
	int count = 0;

	//Check if vector passed is empty
	if (v.empty()) {
		return 0;
	}

	//Count the number of even numbers in vector
	for (int i = 0; i < v.size(); i++) {
		if (v[i] % 2 == 0) {
			count++;
		}
	}

	return count;
}