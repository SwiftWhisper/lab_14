#include <iostream>
using namespace std;
float findAverage(int* arr, const int* SIZE) {
	int sum = 0;
	for (int i = 0; i < *(SIZE); ++i) {
		sum += *(arr + i);
	}
	return (float)sum / (*(SIZE));
}
int main()
{
	setlocale(LC_ALL, "ukr");
	const int SIZE = 10;
	int arr[SIZE];
	cout << "������  10 �������� ��� ������: " << endl;
	for (int i = 0; i < SIZE; ++i) {
		if (!(cin >> arr[i])) {
			cout << "�������� ������������ ��� �����" << endl;
			return 0;
		}
	}

	double average = findAverage(arr, &SIZE);
	cout << "������ �������� � �����: " << average << endl;
	return 0;

}