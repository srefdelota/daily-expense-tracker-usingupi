#include <stdio.h>
#include "expense.h"
#include "file_handler.h"

void showMenu() {
    printf("\n1. Add Expense\n");
    printf("2. View Expenses\n");
    printf("3. Total Expense\n");
    printf("4. Exit\n");
}

int main() {
    int choice;
    struct Expense e;
    struct Expense expenses[100];
    int count;

    while (1) {
        showMenu();
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            inputExpense(&e);
            saveExpense(e);
            printf("Expense saved!\n");
        }

        else if (choice == 2) {
            count = loadExpenses(expenses);
            for (int i = 0; i < count; i++) {
                displayExpense(expenses[i]);
            }
        }

        else if (choice == 3) {
            count = loadExpenses(expenses);
            printf("Total Expense: %.2f\n",
                   calculateTotal(expenses, count));
        }

        else if (choice == 4) {
            printf("Exiting...\n");
            break;
        }

        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
