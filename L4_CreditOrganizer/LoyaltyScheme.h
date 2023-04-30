#pragma once

ref class LoyaltyScheme
{
public:
	LoyaltyScheme();									// constructor
	void EarnPointsOnAmount(double amountSpent);		// castiga cate un punct pentru 10 uSD cheltuiti
	void RedeemPoints(int poinnts);						//rascumparare puncte
	int GetPoints();									//citeste valoare totala a punctelor
private:
	int totalPoints;									//numarul total de puncte stranse

};
