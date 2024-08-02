/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int n, int key, int* returnSize) {
    int* arr=malloc(2* sizeof (int));
    *returnSize=2;
    for(int i=0;i<n;i++){
        int x=nums[i];
        for(int j=0;j<i;j++){
            int y=nums[j];
            if((x+y)==key){
                arr[0]=i;
                arr[1]=j;
                return arr;
            }
        }
    }
    return arr;
}