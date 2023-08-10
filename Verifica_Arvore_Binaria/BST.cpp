// Verifica_Arvore_Binaria.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {};
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right)
}

int main()
{

}

bool isSameTree(TreeNode* p, TreeNode* q)
{
	if (!p && !q)
		return true;
	if (!p || !q)
		return false;
	if (p->val != q->val)
		return false;
	return(isSameTree(p->right, q->right) && isSameTree(p->left, q->left));

}

