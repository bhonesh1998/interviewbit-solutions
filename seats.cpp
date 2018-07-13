int Solution::seats(string A) {
    long long int c=0;
      int i,j,n1= A.length();
    string s;
    for(i=0;i<n1;i++)
        if(A[i]!=' ')s.push_back(A[i]);
        int n = s.length();
        
        int count = 0;
    //int i;
    for( i = 0; i < n; i++){
        if(s[i] == 'x'){
            count++;
        }
    }
    
    if(count == 0 || count == 1){
        return 0;
    }
    
    int mid = 0;
    
    for(i = 0; i < n; i++){
        if(s[i] == 'x'){
            mid++;
            if(mid == (count/2)+1){
                mid = i;
                break;
            }
        }
    }
    
 //   cout << mid << endl ;
     
    int l=mid-1,r=mid+1;
     
    for( i = 0; i < n; i++){
        if(s[i] == 'x'){
            if(mid>i){
                c+=(l-i);
                l--;
            }else if(mid<i){
                c=(c+(i-r))%10000003;
                r++;
            }
           
        }
    }
    
        
   
        return   (int)((c)%10000003) ;
    
}
