#include <string>
#include <vector>
#include <iostream>

using namespace std;

string longestCommonPrefix(vector<string>& strs);

/*

Programa que encontra os prefixos em comum, dentro de um vetor de strings

*/

int main()
{
	vector<string> palavras{ "prefixos", "prenatal", "preparados", "preparando" };
	cout << longestCommonPrefix(palavras);
}

string longestCommonPrefix(vector<string>& strs)
{
	string resposta{};

	for (int i = 0; i < strs[0].size(); ++i)
	{
		for (int j = 1; j < strs.size(); ++j)
			if (strs[0][i] != strs[j][i])
				return resposta;

		resposta.push_back(strs[0][i]);
	}
	return resposta;
}