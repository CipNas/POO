#pragma once
#include "pch.h"
#include "LoyaltyScheme.h"					//pag 126

using namespace System;						// adaugat pentru linia 17 utilizarea String

ref class CreditCardAccount
{
public:
	static int GetNumberOfAccounts();					//pag118
	CreditCardAccount(long number, double limit);		// declarare constructor
	void SetCreditCardLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	static CreditCardAccount();							//pag 120
	literal String ^name = "Super Platinum Card";		//pag 122
	void RedeemLoyaltyPoints();							//pag 126
	
private:
	initonly long accountNumber;				//pag122
	double currentBalance;
	double creditLimit;
	
	static int numberOfAccounts = 0;				//pg 88 adaugare numar de conturi

	static double interestRate;						//pg 120

	LoyaltyScheme^ scheme;						//pag126 handler obiect din loayaltyScheme

};