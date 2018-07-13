 int j = 0;
        for(int i = 0; i < n; ++i) {
            while(j < n && arr[i] < arr[j]) {
                j++;
            }
        }
        
/*answer :- 
The first loop will run N times . 
For the second loop we can see there is arr[0] < arr[0] which is always false.
so total time complexity will be O(N).*/
