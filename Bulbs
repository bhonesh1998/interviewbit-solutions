int Solution::bulbs(vector<int> &A) {

    int c = 0;
    int tog = 1;
    
    for(int i = 0; i < A.size(); i++){
        if(A[i] == 0){
            if(tog == 1){
                c++;
                tog = 0;
            }
        }
        else{
            if(tog == 0){
                c++;
                tog = 1;
            }
        }
    }
    
    return c;
}
