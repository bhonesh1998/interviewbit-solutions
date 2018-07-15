/*

https://www.interviewbit.com/problems/equal/

Equal
Given an array A of integers, find the index of values that satisfy A + B = C + D, where A,B,C & D are integers values in the array

Note:

1) Return the indices `A1 B1 C1 D1`, so that 
  A[A1] + A[B1] = A[C1] + A[D1]
  A1 < B1, C1 < D1
  A1 < C1, B1 != D1, B1 != C1 

2) If there are more than one solutions, 
   then return the tuple of values which are lexicographical smallest. 

Assume we have two solutions
S1 : A1 B1 C1 D1 ( these are values of indices int the array )  
S2 : A2 B2 C2 D2

S1 is lexicographically smaller than S2 iff
  A1 < A2 OR
  A1 = A2 AND B1 < B2 OR
  A1 = A2 AND B1 = B2 AND C1 < C2 OR 
  A1 = A2 AND B1 = B2 AND C1 = C2 AND D1 < D2
Example:

Input: [3, 4, 7, 1, 2, 9, 8]
Output: [0, 2, 3, 5] (O index)
If no solution is possible, return an empty list.

*/




vector<int> Solution::equal(vector<int> &A) {
    map <int ,pair<int,int> > m;
    map <int ,pair<int,int> > :: iterator it;
    int n,i,j;
    n=A.size();
    //sf("%d",&n);
    //int a[n];
    //for(i=0;i<n;i++) sf("%d",&a[i]);
        //vector <int> ans ;
     vector < tuple <int,int,int,int > > ans ;
     set <int> s;

        for(i=0;i<n-1;i++)
        {
                for(j=i+1;j<n;j++)
                {
                    int sum = A[i]+A[j];
                    if(m.find(sum)==m.end())
                    {
                            m[sum] = make_pair(i,j);
                            // m[sum].first = i;
                            //  m[sum].second = j;

                    }
                    else
                    { 

                        it = m.find(sum);

                        int a = (it->second).first;
                        int b = (it->second).second;
                        int c = i;
                        int d = j;
                        
                        s.insert(a);
                        s.insert(b);
                        s.insert(c);
                        s.insert(d);
                        
                        if(s.size()==4)
                        {ans.push_back(tuple <int,int,int,int >( (it->second).first , (it->second).second ,i,j ) );
                            s.clear();}
                        else 
                        s.clear();

                        //break;
                    }
                }
        }

        sort(ans.begin(),ans.end());
        vector <int> pp;
        pp.push_back(get<0>(ans[0]));
        pp.push_back(get<1>(ans[0]));
        pp.push_back(get<2>(ans[0]));
        pp.push_back(get<3>(ans[0]));

        return pp;

}
