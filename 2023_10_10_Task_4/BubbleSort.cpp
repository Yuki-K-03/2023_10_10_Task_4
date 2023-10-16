#include <iostream>
#include <cstdio>
#include <new>
using namespace std;


void InputArray(int *array, const int size) {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 99 + 1;
	}
}

void ShowArray(const int* array, const int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

void BubbleSort(int* array, const int size) {
	bool end = false;
	int saveNum = 0;
	while (!end) {
		end = true;
		for (int i = 0; i < size - 1; i++) {
			if (array[i] > array[i + 1]) {
				ShowArray(&array[0], size);
				saveNum = array[i];
				array[i] = array[i + 1];
				array[i + 1] = saveNum;
				end = false;
			}
		}
	}
}

void mainSort() {
	int* array;
	int size = 0;
	printf("’l‚Ì”\n> ");
	cin >> size;

	array = new int[size];

	InputArray(&array[0], size);

	BubbleSort(&array[0], size);

	ShowArray(&array[0], size);

	if (array != NULL) {
		delete[] array;
		array = NULL;
	}
}