#include <iostream>
using namespace std;

int main() {
	int randomNumber;
	for (int counter = 0; counter < 10; counter = counter + 1) {
		randomNumber = rand();
		cout << randomNumber << endl;
	}
	return 0;
}