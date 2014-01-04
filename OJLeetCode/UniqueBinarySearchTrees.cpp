/*Unique Binary Search Trees 
Given n, how many structurally unique BST's (binary search trees) that store values 1...n?

For example,
Given n = 3, there are a total of 5 unique BST's.

   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3
*/
class Solution {
public:
    int numTrees(int n) {
        if (n <= 1) return 1;

		int sum = 0;
		int left, right;
		for (int i = 1; i <=n; i++)
		{
			left = numTrees(i-1);
			right = numTrees(n-i);
			sum += left*right;
		}
		return sum;
    }
};