#include <stdio.h>
#include <string.h>
#include "expense.h"

void inputExpense(struct Expense *e) {
    printf("Enter amount: ");
    scanf("%f", &e->amount);

    printf("Enter category: ");
    scanf(" %[^\n]", e->category);

    printf("Enter description: ");
    scanf(" %[^\n]", e->description);
}

void displayExpense(struct Expense e) {
    printf("Amount: %.2f | Category: %s | Description: %s\n",
           e.amount, e.category, e.description);
}
