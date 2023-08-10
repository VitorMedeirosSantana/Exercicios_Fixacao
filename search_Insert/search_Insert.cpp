#include <vector>
#include <iostream>

using namespace std;

int searchInsert(vector<int>& nums, int target);

int main()
{
    vector<int> numero{1,2,3,4,5,6,7,8,9,10};
    int target = 5;
    cout << searchInsert(numero, target);
}

int searchInsert(vector<int>& nums, int target)
{
    vector<int>::iterator esquerda = nums.begin();
    vector<int>::iterator direita = nums.end() - 1;
    int tamanho = nums.size() - 1;
    while (esquerda <= direita)
    {
        auto meio = esquerda + (direita - esquerda) / 2;
        if (target > *meio)
            esquerda = meio + 1;
        else
            direita = meio - 1;
    }
    return esquerda - nums.begin();
}