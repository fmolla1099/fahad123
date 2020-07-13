# include <iostream>
using namespace std;
int main()
{
	int meal;
	int mealQty;
	int drinks;
	int drinksQty;
	double Burger = 25.00;
	double Spaghetti = 30.00;
	double Chicken = 75.00;
	double AmountOfSaleBurger = 0;
	double AmountOfSaleSpaghetti = 0;
	double AmountOfSaleChicken = 0;
	double coke = 15.75;
	double it = 20.50;
	double AmountOfSaleCoke = 0;
	double AmountOfSaleIt = 0;
	double cash;
	double total = 0;
	cout << "\n\t JM NGA FOOD CASHIERING\t\n\n";
	cout << "\t\t = MEAL = \t\n\n";
	cout << "[1] Burger.............Php 25.00\n [2] Spaghetti.............Php 30.00\n [3] Chicken..........Php 75.00\n\n";
	cout << "What is your meal: ";
	cin >> meal;
	cout << "How many? :";
	cin >> mealQty;
	cout << "\t\t = DRINKS = \t\t\n\n";
	cout << "[1] Coke.............Php 15.75\n [2] Iced Tea.............Php 20.50\n\n";
	cout << "What is your drinks: ";
	cin >> drinks;
	cout << "How many? :";
	cin >> drinksQty;
	cout << "\n\t = Item Ordered = \t\t\n\n";
	switch (meal)
	{ 
	case 1:
		cout << "Burger............Php 25.00 X" << mealQty << "=" << mealQty * Burger << "\n";
		AmountOfSaleBurger = mealQty * Burger;
		break;
	case 2:
		cout << "Spaghetti.........Php 30.00 X" << mealQty << "=" << mealQty * Spaghetti << "\n";
		AmountOfSaleSpaghetti = mealQty * Spaghetti;
		break;
	case 3:
		cout << "Chicken..............Php 75.000 X" << mealQty << "=" << mealQty * Chicken << "\n";
		AmountOfSaleChicken = mealQty * Chicken;
		break;
	}
	switch (drinks)
	{
	case 1:
		cout << "Coke...........Php 15.75 X" << drinksQty << "=" << drinksQty * coke << "\n";
		AmountOfSaleCoke = drinksQty * coke;
		break;
	case 2:
		cout << "Iced Tea.........Php 20.50 X" << drinksQty << "=" << drinksQty * it << "\n";
		AmountOfSaleIt = drinksQty * it;
		break;
	}
	total = 0;
	total = total + AmountOfSaleBurger + AmountOfSaleChicken + AmountOfSaleSpaghetti + AmountOfSaleCoke + AmountOfSaleIt;
	cout << "Total Amount is: " << total << "\n";
	cout << "Cash: ";
	cin >> cash;
	cout << "Change: " << cash << total << "\n\n";
	cout << "ENJOY YOUR MEAL! \n\n\n";
	cout << "\n\n\t-------------\n";
	cout << "\t Please Subscribe";
	cout << "\n\twww.youtube.com/jmnga\n";
	cout << "\t------------------------------\n";
}
