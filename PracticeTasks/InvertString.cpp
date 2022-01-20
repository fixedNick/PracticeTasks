#include "InvertString.h"
#include <iostream>
#include <string>

using namespace std;

void InvertString::Init()
{
	string entered_string = "", inverted_string = "";
	cout << "Enter string: ";
	cin >> entered_string; ///! Если ввести строку с пробелом, то обработает часть до пробела.

	for (int i = entered_string.length() - 1; i >= 0; i--)
		inverted_string += entered_string[i];

	cout << "Инвертированная строка: " + inverted_string << endl;
}