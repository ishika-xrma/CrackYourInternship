class Solution {
    public int findDuplicate(int[] nums) {
        int[] count=new int[nums.length];
        for(int num : nums){
            count[num]++;
        }
        for(int i=0;i<count.length;i++){
            if(count[i]>=2){
                return i;
            }
        }
        return -1;
    }
}