#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {

	vector<int> array = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "Count of even elements: " << count_if(array.begin(), array.end(), [](int elem) { return elem % 2 == 0; }) << endl;

	return 0;
}