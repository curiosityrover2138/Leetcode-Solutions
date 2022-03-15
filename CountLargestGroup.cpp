class Solution {
public:
    int countLargestGroup(int n) {
        int c=0; int ma=0; //count and count of array variables are declared
        unordered_map<int,int> a; //create a map for storing the values of the sum of the digits avoiding duplicates
        for(int i=1;i<=n;i++){
            int t=i; int sum=0;
            while(t){ sum+=t%10; t/=10;}
            
            a[sum]++;// find the sum of the digits and store it in the map
            if(a[sum]>ma){ ma=a[sum]; c=0;}
            if(a[sum]==ma) c++;//if the sum is equal to all the other values, we increase the count of the group size
        }
        return c;//return the maximum group size possible 
        
    }
};
