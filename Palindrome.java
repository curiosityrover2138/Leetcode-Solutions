class Solution {
    public boolean isPalindrome(int x) {
        
         int temp=x;
        int sum=0;                                        //For Palindrome number
  while(x>0){    
   int r=x%10;  //getting remainder  
    sum=(sum*10)+r;    
   x=x/10;    
  }
    if(temp==sum){
        return true;
    }
        else{
            return false;
        }
    }
}
