/*

https://www.interviewbit.com/problems/min-xor-value/


Given an array of N integers, find the pair of integers in the array which have minimum XOR value. Report the minimum XOR value.

Examples : 
Input 
0 2 5 7 
Output 
2 (0 XOR 2) 
Input 
0 4 7 9 
Output 
3 (4 XOR 7)

Constraints: 
2 <= N <= 100 000 
0 <= A[i] <= 1 000 000 000
*/


nt Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int minXor = INT_MAX;
    int val = 0;
    for (int i = 0; i < A.size() - 1; i++) {
        val = A[i] ^ A[i + 1];
        minXor = min(minXor, val);
    }
    return minXor;
}
