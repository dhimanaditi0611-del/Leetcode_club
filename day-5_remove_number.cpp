class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int a = 0;
        for(int i=0;i<nums.size();i=i+2){
            int f=nums[i];
            int s=nums[i + 1];
            int t=s;
            while(t>0){
                f=f*10;
                t=t/10;
            }
            int value=f+s;
            if(i==0||value<a){
                a = value;
            }
        }
        return a;
    }
};