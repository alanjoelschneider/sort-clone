#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "inc/sort.h"

void print_int_array(int array[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i != size - 1) printf(", ");
    }
    printf("]\n");
}

void print_str_array(char *array[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%s", array[i]);
        if (i != size - 1) printf(", ");
    }
    printf("]\n");
}

int main(unsigned int argc, char *argv[]) {
    if (argc < 2) return 0;

    FILE *fp;
    if ((fp = fopen(argv[1], "r")) == NULL) return 1;

    char line[1024];
    char *lines[1000];

    unsigned int i = 0;
    while (fgets(line, 1024, fp) != NULL && i < 1000) {
        lines[i] = malloc(sizeof(line));
        strcpy(lines[i], line);
        i++;
    }

    selection_str(lines, i);

    for (int j = 0; j < i; j++) {
        printf("%s", lines[j]);
    }

    while (i > 0) {
        free(lines[i - 1]);
        i--;
    }

    return 0;
}
