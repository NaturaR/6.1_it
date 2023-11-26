#include <time.h> 
#include <iomanip> 
#include <iostream>
using namespace std;
void fillArray(int array[]) {
	for (int i = 0; i < 23; i++) {
		array[i] = 4 + rand() % (16 - 4 + 1);
	}
}
void processArray(int array[], int& sum, int& count) {
	count = 0;
	sum = 0;
	for (int i = 0; i < 23; i++) {
		if (!(array[i] % 2 == 0 && i % 3 == 0)) {
			sum += array[i];
			array[i] = 0;
			count++;
		}
	}

}
void printArray(int array[], int sum, int count) {
	for (int i = 0; i < 23; i++) {
		cout << setw(4) << array[i] << " ";
	}


}
int main()
{
	int sum = 0;
	int count = 0;
	int array[23];
	srand((unsigned)time(NULL));
	fillArray(array);
	printArray(array, sum, count);
	cout << '\n';
	processArray(array, sum, count);
	cout << "sum: " << sum << "\n";
	cout << "count: " << count << "\n";
	printArray(array, sum, count);

}

