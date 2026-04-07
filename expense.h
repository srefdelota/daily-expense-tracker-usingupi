#ifndef EXPENSE_H
#define EXPENSE_H

struct Expense {
    float amount;
    char category[50];
    char description[100];
};

void inputExpense(struct Expense *e);
void displayExpense(struct Expense e);

#endif
