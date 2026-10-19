class Solution {
public:
    void print(vector<int>& nums, int i , int j ){
       
        while(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int i=0;
        int j=nums.size()-1;
        int n=nums.size();
         k = k % n;
        print(nums,i,j);
        print(nums,i,k-1);
        print(nums,k,j);
        
    }
};