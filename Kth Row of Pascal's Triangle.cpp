vector<int> Solution::getRow(int A) {

    
    
     int n=A+1;

        if(n==0)
        {
                vector < vector<int>  > v;
               // v[0].push_back(0);
                return v[0];

        }
        
        else
        {

      vector< vector<int> > a(n);

       int i,j;
            for(i=0;i<n;i++)
            {
               
               a[i] = vector<int> (n+1);
            for(j=0;j<n+1;j++)
            {
                a[i][j]=0;
            }

            }

            a[0][1]=1;

                 for(i=1;i<n;i++)
            {
            for(j=1;j<n+1;j++)
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
            }

            vector < vector<int>  > v(n);




   for(i=0;i<n;i++)
            {
            for(j=1;j<i+2;j++)
            {

                v[i].push_back(a[i][j]);

               //pf("%d ",a[i][j]);
            }
            //pf("\n");
            }

  return v[n-1];
  
        }

    
    

    
    
}
