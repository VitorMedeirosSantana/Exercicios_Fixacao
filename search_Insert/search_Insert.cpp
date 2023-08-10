#include <vector>
#include <iostream>

using namespace std;

int searchInsert(vector<int>& nums, int target);

/*

Programa utilizado para pesquisar, dentro de um vetor de inteiros crescentes, um numero
de maneira rapida, com menor gasto de memoria. Caso esse numero não exista, informar qual
a posição ele deverá ser inserido dentro do vetor.

*/

int main()
{
    vector<int> numero{1, 2, 4, 5, 6, 7, 8, 9, 10};
    int target = 3;
    cout << "A posicao do numero fica em:  numero[" << searchInsert(numero, target) << "]";
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