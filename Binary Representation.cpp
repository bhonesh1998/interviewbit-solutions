string Solution::findDigitsInBinary(int A) {
    if(A==0)
    {
        string s="0";
        return s;
    }
    else
    {
    stack <int> st;
   string s;
    while(A!=0)
    {
        int r=A%2;
        A/=2;
        st.push(r);
    }
    while(!st.empty())
    {
        int p=st.top();
        st.pop();
        if(p==1)
        s.push_back('1');
        else
        s.push_back('0');
        //v.push_back(p);
    }
    return s;}
}
