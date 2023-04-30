#include "pch.h"
#include "CreditCardAccount.h"

#using <mscorlib.dll>
using namespace System;

void CreditCardAccount::SetCreditCardLimit(double amount)
{
	creditLimit = amount;
	//accountNumber = 10;			// pag 122
}
bool CreditCardAccount::MakePurchase(double amount)
{
	if (currentBalance + amount > creditLimit)
	{
		return false;
	}
	else
	{
		currentBalance += amount;
		// inserare pentru pag 126 daca balanta curenta depaseste 50% sau mai mult din credit
		if (currentBalance >= creditLimit / 2)
		{
			if (scheme == nullptr)		// daca obiectul LoyaltyScheme nu exista
			{
				scheme = gcnew LoyaltyScheme();		//se creeaza obiectul
			}
			else
			{
				scheme->EarnPointsOnAmount(amount);		//obiectul loyaltyscheme exista si se apeleaza castig de pcte
			}
		}
		//////////////final inserare pag 126
		return true;
	}
}
void CreditCardAccount::MakeRepayment(double amount)
{
	currentBalance -= amount;
}
void CreditCardAccount::PrintStatement()
{
	Console::Write("Current balance: ");
	Console::WriteLine(currentBalance);
}
long CreditCardAccount::GetAccountNumber()
{
	return accountNumber;
}
CreditCardAccount::CreditCardAccount(long number, double limit)			//constructorul clasei
{
	accountNumber = number;
	currentBalance = 0.0;
	creditLimit = limit;
	numberOfAccounts++;								//pg89 a incrementarea numarului de conturi la fiecare noua creare
	Console::Write("Acesta este contul cu numarul ");
	Console::WriteLine(numberOfAccounts);
	scheme = nullptr;								//pag 126
}
int CreditCardAccount::GetNumberOfAccounts()		//pg 119
{
	return numberOfAccounts;
}
static CreditCardAccount::CreditCardAccount()		//pag 120
{
	interestRate = 4.5;
	Console::WriteLine("A fost apelat constructorul static");
}
void CreditCardAccount::RedeemLoyaltyPoints()
{
	if (scheme == nullptr)
	{
		Console::WriteLine("Regrete, nu aveti inca o"
			"schema de loialitate");
	}
	else
	{
		Console::Write("Puncte disponibile: ");		//afiseaza numr pcte disponibile
		Console::Write(scheme->GetPoints());			
		Console::Write(". Cate puncte doriti"
			"sa rascumparati? = ");
		String ^input = Console::ReadLine();		// citeste cate puncte se doresc convertite
		int points = Convert::ToInt32(input);
		scheme->RedeemPoints(points);				//apeleaza conversie puncte
		Console::Write("Puncte ramase: ");
		Console::WriteLine(scheme->GetPoints());
	}

}