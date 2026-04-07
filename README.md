# Daily Expense Tracker in C

A simple CLI-based expense tracker built using C that helps users record and analyze daily spending.

## 🚀 Features
- Add expenses manually
- View all expenses
- Calculate total spending
- Store data using file handling

## 💡 Real-World Extension
This project can be extended by integrating data from UPI apps transaction history.

Users can:
- Copy transaction history from apps like Google Pay / PhonePe / Paytm
- Convert it into a structured format
- Import it into this tracker for automatic expense logging

This bridges the gap between manual tracking and real financial data.

## 🛠️ Future Improvements
- Import UPI transaction history (CSV/Text format)
- Categorize expenses automatically (Food, Travel, Shopping)
- Monthly and weekly reports
- Search and filter by category/date
- Upgrade to GUI-based application

## ▶️ Compile & Run

```bash
gcc main.c expense.c file_handler.c -o expense
./expense
