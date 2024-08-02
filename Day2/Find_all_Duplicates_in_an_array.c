/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int n, int* returnSize) {
    int* dup=(int*)malloc(n*sizeof(int));
    int count[n+1];
    for(int i=0;i<=n;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[nums[i]]++;
    }
    int k=0;
    for(int i=0;i<=n;i++){
        if(count[i]>1){
            dup[k]=i;
            k++;
        }
    }
    *returnSize=k;
    return dup;
}