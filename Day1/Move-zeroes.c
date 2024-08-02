void moveZeroes(int* nums, int n) {
    if(n==1){
        return;
    }
    int i=0,j=1;
    while(i<n && j<n){
        if(nums[i]!=0){
            i++;
        }
        if(nums[i]==0 && nums[j]!=0){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
           // swap(nums[i],nums[j]);
            i++;
        }
        j++;
    } 
}