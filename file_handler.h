#include <stdio.h>
#include "file_handler.h"

void saveExpense(struct Expense e) {
    FILE *fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(fp, "%.2f,%s,%s\n", e.amount, e.category, e.description);
    fclose(fp);
}

int loadExpenses(struct Expense arr[]) {
    FILE *fp = fopen("data.txt", "r");

    if (fp == NULL) {
        return 0;
    }

    int i = 0;
    while (fscanf(fp, "%f,%49[^,],%99[^\n]\n",
                  &arr[i].amount,
                  arr[i].category,
                  arr[i].description) != EOF) {
        i++;
    }

    fclose(fp);
    return i;
}

float calculateTotal(struct Expense arr[], int count) {
    float total = 0;
    for (int i = 0; i < count; i++) {
        total += arr[i].amount;
    }
    return total;
}
