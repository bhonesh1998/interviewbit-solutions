string Solution::countAndSay(int A) {
 
int n,i,j;
n=A;
     string s1,s2,st1,s3,s4;
     s1="1" ; s2 ="11";s3="21";s4="1211";
     if(n==1) cout << s1;
     else if(n==2) cout << s2 ;
     else if(n==3) cout << s3 ;
     else if(n==4) cout << s4 ;
     
     int count = 1;
     bool ram = false ;
     for(i=5;i<=n;i++)
      {
                
              string r ;
              if(ram == false)
               r=s4;
              else
              r=st1;
              
              if(!st1.empty())
              st1.clear();
                int si = r.length();
              for(j=0 ; j<si ; j++)
                {
                    ram = true  ;
                   
                    if(r[j+1]!=r[j])
                    { st1.push_back(count+'0');
                      st1.push_back(r[j]);
                      count =1 ;
                    } else count++;
                }
      }
 
      return st1;
}
