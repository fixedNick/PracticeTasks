#include <iostream>
#include "Combos.h"
#include "InvertString.h"

using namespace std;

void Menu(int& operation)
{
	while (true)
	{
		cout << "[0] Exit" << endl;
		cout << "[1] Все сочетания N & K" << endl;
		cout << "[4] Инвертировать строку" << endl;
		cin >> operation;

		if (operation < 0 || operation > 5)
			cout << "-- Error: bad input" << endl;
		else break;
	}
}

int main()
{
	setlocale(LC_ALL, "");
	// Прелагает ввод двух числе, запускает перебор сочетаний.
	// Описание работы в C# проекте.
	int operation = -1;
	Menu(operation);
	switch (operation)
	{
		case 0: return 0;
		case 1:
			Combos::Init();
			break;
		case 4:
			InvertString::Init();
			break;
	}

	return 0;
}