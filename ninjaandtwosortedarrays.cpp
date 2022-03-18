vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    //this is a two pointer approach to the problem, we just iterate through the arrays both at the same time and then put the smaller
    //element from the two arrays in Array1;
   

   int i=m-1,j=n-1,c=m+n-1;
   while(i>=0 && j>=0)
   {
           if(arr1[i]>arr2[j])
       {
           arr1[c--]=arr1[i--];
       }
       else
       {
            arr1[c--]=arr2[j--];
       }
   }
   while(i>=0)
   {
       arr1[c--]=arr1[i--];
   }
   while(j>=0)
   {
       arr1[c--]=arr2[j--];
   }
   return arr1; }

