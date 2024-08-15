int binarysearch(int* nums,int left, int right){
    int returnval;
    if(left<=right){
        int mid=left+(right-left)/2;
        if((mid==0 || nums[mid]>nums[mid-1]) && (mid==right || nums[mid]>nums[mid+1]) ){
            return mid;
        }
        else if(mid>0 && nums[mid-1]>nums[mid]){
            return binarysearch(nums,left,mid-1);
        }
        else{
            return binarysearch(nums,mid+1,right);
        }
    }
    return -1;
}
int findPeakElement(int* nums, int n) {
    if(n==1){
        return 0;
    }
    if(n==2){
        if(nums[0]>nums[1])
        return 0;
        else{
            return 1;
        }
    }
    int returnindex=binarysearch(nums,0,n-1);
    return returnindex;
}