void insertionsort(int* arr, int n){
    for(int i=1;i<n;i++){
        int temp=arr[i],j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int majorityElement(int* nums, int n) {
    insertionsort(nums, n);
    return nums[n/2];
}