#ifndef COMBOS_H
#define COMBOS_H

#include <vector>
#include <string>

using namespace std;

class Combos
{
public:
	static vector<string> AllCombos;
	static void Init();
private:
	static void MakeCombos(size_t step, std::string str, std::string completeString = "");
	static void ShowCombos();
};
#endif