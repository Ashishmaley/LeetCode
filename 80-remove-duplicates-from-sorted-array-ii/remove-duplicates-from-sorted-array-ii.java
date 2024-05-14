class Solution {
    public int removeDuplicates(int[] nums) {
        Map<Integer,Integer>mp = new TreeMap<>();
        int count=0;
        for(int i=0;i<nums.length;i++){
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        }
        int i=0;
        for(Map.Entry<Integer,Integer> ele :mp.entrySet()){
            if(ele.getValue()>=2){
                count+=2;
                nums[i++]=ele.getKey();
                nums[i++]=ele.getKey();
            }else{
                nums[i++]=ele.getKey();
                count++;
            }
        }
        return count;
    }
}