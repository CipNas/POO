#pragma once

using namespace System;

ref class BankAccount abstract
{
public:
	BankAccount(String ^holder);
	void Credit(double amount);
	bool Debit(double amount);
	double GetBalance();
	virtual String^ ToString() override;	//clasele derivate pot suprascrie acesta functie
	virtual bool CanDebit(double amount) abstract;			//clasele derivate trebuie sa suprascrie acesta functie, se poatte folosit '=0' in loc de 'abstract'
private:
	String^ accountHolder;
	double balance;
protected:
	String^ RoutingInstrunctions(double amount);

};