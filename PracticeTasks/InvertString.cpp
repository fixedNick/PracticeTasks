#include "InvertString.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void InvertString::Init()
{
	vector<string> inverted_lines;
	
	string filepath_load = "", filepath_save = "InvertedStringsResult.txt";

	cout << "Etner filename to invert data: ";
	cin >> filepath_load;

	ifstream in(filepath_load, ios::binary | ios::in);
	if (in.is_open() == false)
	{
		cout << "-- Error: bad filename" << endl;
		return;
	}

	while (in.eof() == false)
	{
		string str_to_invert = "";
		string inverted_string = "";
		getline(in, str_to_invert);

		for (int i = str_to_invert.length() - 1; i >= 0; i--)
			inverted_string += str_to_invert[i];
		inverted_lines.push_back(inverted_string);
	}
	in.close();

	
	ofstream out(filepath_save); // Переписать на итераторы для корректной записи в файл (Обработать \r последовательности для корректного перехода на новую строку)
	for (auto line : inverted_lines) {
		out << line << "\n";
	}

	out.close();
}