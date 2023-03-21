#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void selection_int(int nums[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int index_of_min = i;

        for (int j = i + 1; j < size; j++) {
            if (nums[j] < nums[index_of_min]) {
                index_of_min = j;
            }
        }

        if (index_of_min != i) {
            int temp = nums[i];
            nums[i] = nums[index_of_min];
            nums[index_of_min] = temp;
        }
    }
}

void insertion_int(int nums[], int size) {
    for (int i = 1; i < size; i++) {
        int j = i;
        int temp = nums[i];

        while (j > 0 && temp < nums[j - 1]) {
            nums[j] = nums[j - 1];
            j--;
        }

        nums[j] = temp;
    }
}

void selection_str(char *strings[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int index_of_min = i;

        for (int j = i + 1; j < size; j++) {
            if (strcmp(strings[j], strings[index_of_min]) < 0) {
                index_of_min = j;
            }
        }

        if (index_of_min != i) {
            char *temp = strings[i];
            strings[i] = strings[index_of_min];
            strings[index_of_min] = temp;
        }
    }
}

void insertion_str(char *strings[], int size) {
    for (int i = 1; i < size; i++) {
        int j = i;
        char *temp = strings[i];

        while (j > 0 && strcmp(temp, strings[j - 1]) < 0) {
            strings[j] = strings[j - 1];
            j--;
        }

        strings[j] = temp;
    }
}
