#pragma once
#include "BankAccount.h"
ref class CurrentAccount :BankAccount
{
public:
	CurrentAccount(String^ holder, double limit);
	void ChangeOverdraftLimit(double newLimit);
	double GetOverdraftLimit();
	virtual String^ ToString() override;		//alege sa suprascrii ToString
	virtual bool CanDebit(double amount) override;		//trebuie suprascris CanDebit


private:
	double overdraftLimit;
};