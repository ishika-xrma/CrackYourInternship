int binarysearch(int* nums,int left, int right,int key){
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==key){
            return mid;
        }
        else if(nums[mid]>key){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return -1;
}
int search(int* nums, int n, int key) {
    int pivot=0,i=0;
    if(nums[0]>nums[n-1]){
        while(i<n-1){
            if(nums[i+1]<nums[i]){
                pivot=i+1;
                break;
            }
            i++;
        }
    }
    if(pivot==0 || key>=nums[pivot] && key<=nums[n-1]){
        return binarysearch(nums,pivot,n-1,key);
    }
    else{
        return binarysearch(nums,0,pivot-1,key);
    }
}