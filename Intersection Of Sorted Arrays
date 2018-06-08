vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector <int> v;
    int i,j;
    i=j=0;
    int n1 = A.size();
    int n2 = B.size();
    
    while(i<n1 && j<n2)
    {
            if(A[i]<B[j]) i++;
            else if (A[i]>B[j]) j++;
            else { v.push_back(A[i]);i++;j++; }
    }
        return v;
}
