int powmod(int x, int n, int d) {
    int r;
    if(x==0)
    return 0;
    if(n==0)
    return 1;
    
    long long int base =x ,ans=1;
     while (n > 0) 
    {
        if (n % 2 == 1)
        {
            ans = (ans * base) % d;
            n--;
        } 
        else
        {
            base = (base * base) % d;
            n /= 2;
        }
    }
   if (ans < 0) 
        ans = (ans + d) % d;
  return ans ;
}
