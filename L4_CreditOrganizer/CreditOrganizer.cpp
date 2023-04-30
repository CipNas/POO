#include "pch.h"
#include "CreditCardAccount.h"

using namespace System;

int main()
{    
    Console::Write("Numele cardului este ");              //pag122
    Console::WriteLine(CreditCardAccount::name);            //pg122

    int n = CreditCardAccount::GetNumberOfAccounts();       //pg119
    Console::Write("Numarul initial de conturi: ");         //pg119       
    Console::WriteLine(n);                                  //pg119
    
    Console::WriteLine("Se creeaza primul obiect");         //pag 99
    CreditCardAccount^ account1;                             //pag99
    account1 = gcnew CreditCardAccount(12345, 2000);
    Console::WriteLine("\nSe cheltuie 300");
    account1->MakePurchase(300);
    Console::WriteLine("\nSe cheltuie 700");
    account1->MakePurchase(700);
    Console::WriteLine("\nSe cheltuie 500");
    account1->MakePurchase(500);
    account1->PrintStatement();
    Console::WriteLine("\nRascumparare puncte\n");
    account1->RedeemLoyaltyPoints();
    //Console::WriteLine("\nSe creeaza al 2-lea obiect");
    //CreditCardAccount^ account2;
    //account2 = gcnew CreditCardAccount(67890, 5000);
    //account2->MakePurchase(750);
    //account2->PrintStatement();

    //n = CreditCardAccount::GetNumberOfAccounts();       //
    //Console::Write("Numarul actual de conturi: ");
    //Console::WriteLine(n);

 }
