#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& num, int target);

/*

Programa utilizado para identificar os indices dos elementos de um vetor, que somados
dao um valor alvo.

*/

int main()
{
	vector<int> numeros{ 1,2,3,4,5,6,7,8 };
	int target = 10;
	vector<int> result = twoSum(numeros, target);

	cout << "The numbers are: " << numeros[result[1]] << " , " << numeros[result[0]] << endl;
	cout << "At indices: " << result[1] << " and " << result[0];
}

vector<int> twoSum(vector<int>& nums, int target)
{
	unordered_map<int, int> mapa;
	for (int i = 0; i < nums.size(); ++i)
	{
		if (mapa.count(target - nums[i]))
			return { i, mapa[target - nums[i]] };
		else
			mapa[nums[i]] = i;
	}
	return {};
}