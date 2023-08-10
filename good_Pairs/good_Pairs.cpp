#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

int numIdenticalPairs(vector<int>& nums);

/*

Programa que encontra os pares dentro de um vetor
Pares são aqueles cujo valor numero[i] == numero[j], e i < j

*/

int main()
{
	vector<int> numero = { 1, 1, 1, 1 };
	cout << "There are " << numIdenticalPairs(numero) << " pairs";

}

int numIdenticalPairs(vector<int>& nums)
{

	unordered_map<int, int> umap; //Initializing a Hash Table

	for (int i = 0; i < nums.size(); i++) //Iterating through the vector
		++umap[nums[i]];  //Counting the occurences of a number and storing it in value. 

	int good_pairs = 0;
	for (auto i : umap) //Using the formula 
	{
		int n = i.second; //i.second implies -- value of hash table
		good_pairs += ((n) * (n - 1)) / 2; // usar n-2 para trios. 

	}
	return good_pairs;
}