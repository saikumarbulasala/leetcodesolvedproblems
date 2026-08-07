class Solution {
public: 
    int maxEle(vector<int>& nums){
        int n = nums.size();

        int maxEle = nums[0];
        for(int i = 0;i<n;i++){
            if(nums[i] > maxEle){
                maxEle = nums[i];
            }
        }
        return maxEle;
    }

    int sum(vector<int>& nums){
        int n = nums.size();
        int sum = 0;
        for(int i =0;i<n;i++){
            sum = sum + nums[i];
        }
        return sum;

    }

    int noOfStudents(vector<int>& nums, int pages){
        int stu = 1;
        int pagesForStu = 0;
        int n = nums.size();
        
        for(int i = 0;i<n;i++){
            if(pagesForStu + nums[i] <= pages){
                pagesForStu += nums[i];
            }
            else{
                stu++;
                pagesForStu = nums[i];
            }
        }
        return stu;

    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = maxEle(nums);
        int high = sum(nums);
        while(low <= high){
            int mid = (low + high)/2;
            int students = noOfStudents(nums, mid);
            if(students > k) low = mid + 1;
            else high = mid -1;

        }
        return low;

    }
};