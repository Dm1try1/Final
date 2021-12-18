#pragma once
#include "Expense.h"
#include "ExpenseRecord.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <iomanip>
#include <Windows.h>
#include <numeric> 

using namespace std;
class ExpenseInputScreen
{
private:
	ExpenseRecord* ptrExpenseRecord; // запись о расходах
public:
	ExpenseInputScreen(ExpenseRecord*);
	void setExpense();
};