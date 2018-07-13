int r(int m,int n)
{
    if(n!=0) return r(n,m%n); else return m;
}

int Solution::gcd(int A, int B) {
    
    int ans = r(A,B);
    return ans ;
    
    
}
// worst case : O(logmin(m,n))
