#include <iostream>
using namespace std;

// x! = x * !(x - 1)
//int factorialIterative(int);
int factorialRecursive(int);


int main() {
	int i = 0;

	for (i = 0; i < 10; i++) {
		//cout << i << "! = " << factorialIterative(i) << endl;
		cout << i << "! = " << factorialRecursive(i) << endl;
	}

	return 0;
}

/*int factorialIterative(int factorialMe) {
	int i = 0;
	int tally = 1;

	if (factorialMe < 0) {
		cout << "NO ! DEFINED FOR " << factorialMe << endl;
		return -1;
	}
	else if (factorialMe == 0) {
		return 1;
	}
	else {
		for (i = factorialMe; i >= 1; i--) {
			tally *= i;
		}
	}
	return tally;
}*/
int factorialRecursive(int factorialMe) {
	// BASE CASES
	if (factorialMe < 0) {
		cout << "NO ! DEFINED FOR " << factorialMe << endl;
		return -1;
	}
	else if (factorialMe == 0) {
		return 1;
	}
	// RECURSIVE CASE
	else {
		return factorialMe * factorialRecursive(factorialMe - 1);
	}
}