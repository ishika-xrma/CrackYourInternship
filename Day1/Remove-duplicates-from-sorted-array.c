int removeDuplicates(int* nums, int n) {
    if(n==0 || n==1){
        return n;
    }
    int i=0;
    while(i<n-1){
        if(nums[i]==nums[i+1]){
            for(int j=i+1;j<n-1;j++){
                nums[j]=nums[j+1];
            }
            n--;
        }
        else{
            i++;
        }
    }
    return n;
}