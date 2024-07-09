class Solution {
    public int maxOperations(int[] nums, int k) {
        int count = 0;
        int i = 0, j = nums.length-1;
        Arrays.sort(nums);
        //quick(nums, 0, nums.length-1);
        while(i<j){
            if(nums[i]+nums[j] == k){
                count++;
                i++;
                j--;
            }else if(nums[i]+nums[j]>k){
                j--;
            }
            else{
                i++;
            }
        }
        return count;
    }

    public void sort(int[] nums){
        for(int i = 0; i<nums.length-1; i++){
            for(int j = i+1; j<nums.length; j++){
                if(nums[i]>nums[j]){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }

    public void quick(int[] nums,int start, int end){
        if(start<end){
            int part = partion(nums, start, end);
            quick(nums, start, part-1);
            quick(nums, part+1, end);
        }
    }

    public int partion(int[] arr, int start, int end){
        int pivot = arr[end];
        int i = start-1;
        for(int j = start; j<=end-1; j++){
            if(arr[j]<pivot){
                i++;
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
        int t = arr[i+1];
        arr[i+1] = arr[end];
        arr[end] = t;

        return i+1;
    }
}