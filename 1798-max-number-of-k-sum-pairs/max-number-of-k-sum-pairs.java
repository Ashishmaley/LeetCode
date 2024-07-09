class Solution {
    public int maxOperations(int[] nums, int k) {
        int count = 0;
        HashMap<Integer,Integer> mp = new HashMap<>();
        for(var num:nums){
            mp.put(num,mp.getOrDefault(num,0)+1);
        }
        for(var num:nums){
            if(mp.getOrDefault(num,0)>0){
                var complement = k-num;
                if(mp.getOrDefault(complement,0)>0){
                    if(complement == num){
                        if(mp.get(num)>=2){
                            count++;
                            mp.put(num,mp.getOrDefault(num,0)-2);
                        }
                    }else
                    if(mp.getOrDefault(complement,0)>0){
                        count++;
                        mp.put(num,mp.getOrDefault(num,0)-1);
                        mp.put(complement,mp.getOrDefault(complement,0)-1);
                    }
                }
            }
        }
        return count;
    }
}