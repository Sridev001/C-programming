// Write a program that would sort a list of names in alphabetical order
//  Ascending or Descending, choice get from the user?

#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_NAME_LENGTH 50

// Function to swap two strings
void swap(char *str1, char *str2) {
    char temp[MAX_NAME_LENGTH];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

// Function to sort the names in ascending or descending order based on user's choice
void sortNames(char names[][MAX_NAME_LENGTH], int numNames, int order) {
    int i, j;
    for (i = 0; i < numNames-1; i++) {
        for (j = 0; j < numNames-i-1; j++) {
            if (order == 1) { // Ascending order
                if (strcmp(names[j], names[j+1]) > 0) {
                    swap(names[j], names[j+1]);
                }
            } else if (order == 2) { // Descending order
                if (strcmp(names[j], names[j+1]) < 0) {
                    swap(names[j], names[j+1]);
                }
            }
        }
    }
}

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int numNames, i, order;

    printf("Enter the number of names to be sorted (max %d): ", MAX_NAMES);
    scanf("%d", &numNames);

    printf("Enter the names:\n");
    for (i = 0; i < numNames; i++) {
        scanf("%s", names[i]);
    }

    printf("Sort names in (1) Ascending or (2) Descending order? ");
    scanf("%d", &order);

    sortNames(names, numNames, order);

    printf("Sorted names:\n");
    for (i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
