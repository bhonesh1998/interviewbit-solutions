int Solution::candy(vector<int> &A) {
    vector<int> val(A.size(), 1);
    int i = 0; 
    while(i < A.size()){
        if(i == 0){
            if(A[i] > A[i+1]){
                val[i] = val[i+1] + 1;
            }
        }
        else if(i == A.size()-1){
            if(A[i] > A[i-1]){
                val[i] = val[i-1] + 1;
            }
        }
        else{
            if(A[i] > A[i+1] && A[i] > A[i-1]){
                val[i] = max(val[i+1], val[i-1]) + 1;
            }
            else if(A[i] > A[i+1]){
                val[i] = val[i+1] + 1;
            }
            else if(A[i] > A[i-1]){
                val[i] = val[i-1] + 1;
            }
        }
        i++;
    }
    
    i = A.size()-1;
    
    while(i >= 0){
        if(i == 0){
            if(A[i] > A[i+1]){
                val[i] = val[i+1] + 1;
            }
        }
        else if(i == A.size()-1){
            if(A[i] > A[i-1]){
                val[i] = val[i-1] + 1;
            }
        }
        else{
            if(A[i] > A[i+1] && A[i] > A[i-1]){
                val[i] = max(val[i+1], val[i-1]) + 1;
            }
            else if(A[i] > A[i+1]){
                val[i] = val[i+1] + 1;
            }
            else if(A[i] > A[i-1]){
                val[i] = val[i-1] + 1;
            }
        }
        i--;
    }
    
    int sol = 0;
    
    for(int i = 0; i < val.size(); i++){
        sol = sol + val[i];
    }
    
    return sol;
    
}
