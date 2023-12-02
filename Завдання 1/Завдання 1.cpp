#include <stdio.h>
#include <iostream>
#include <limits>
#include <cmath>
using namespace std;
int findDistanseBetween(int* arr, const int* SIZE, int* min, int* max) {
	int minI = 0, maxI = 0;
	for (int i = 0; i < *(SIZE); ++i) {
		if (*(arr + i) < *(min)) {
			*(min) = *(arr + i);
			minI = i;
		}
		if (*(arr + i) > *(max)) {
			*(max) = *(arr + i);
			maxI = i;
		}
	}
	if ((minI - maxI) > 0) {

		return abs((minI - maxI) - 1);
	}
	if ((minI - maxI) < 0) {
		return abs((minI - maxI) + 1);
	}
	if (minI == maxI) {
		return 0;
	}
}
int main()
{
	setlocale(LC_ALL, "ukr");
	const int SIZE = 10;
	int arr[SIZE];
	cout << "Введіть  10 елементів для масива: " << endl;
	for (int i = 0; i < SIZE; ++i) {
		if (!(cin >> arr[i])) {
			cout << "Введений неправильний тип даних" << endl;
			return 0;
		}
	}
	int min = INT_MAX;
	int max = INT_MIN;
	int distBetween = findDistanseBetween(arr, &SIZE, &min, &max);
	cout << "Мінімальне значення в масиві це: " << min << endl;
	cout << "Максимальне значення в масиві це: " << max << endl;
	cout << "Відстань між мінімальним і максимальним значенням: " << distBetween << endl;
	return 0;

}