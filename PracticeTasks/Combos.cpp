#include <iostream>
#include <string>
#include "Combos.h"

using namespace std;

vector<string> Combos::AllCombos;

void Combos::Init()
{
	int N = 0, K = 0;

	cout << "Enter first number: ";
	cin >> N;
	cout << "Enter second number: ";
	cin >> K;
	cout << "";

	std::string numbersAsString = std::to_string(N) + to_string(K);
	MakeCombos(numbersAsString.length(), numbersAsString);
	ShowCombos();
}

void Combos::MakeCombos(size_t step, std::string str, std::string completeString)
{

	if (step == 0)
		AllCombos.push_back(completeString);
	else
	{
		for (char ch : str)
			MakeCombos(step - 1, str, completeString + ch + " ");
	}
}

void Combos::ShowCombos()
{
	for (auto res : AllCombos)
		cout << res << endl;

	cout << "Total combos is: " << AllCombos.size();
}
