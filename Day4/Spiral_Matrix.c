/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** mtr, int row, int* col, int* returnSize) {
    int n=row*(*col);
    int* arr=(int*)malloc(n*(sizeof(int)));
    int top=0,left=0,right=(*col)-1,bottom=row-1;
    int j=0;
    while(top<=bottom && left<=right ){
        for(int i=left;i<=right && j<n;i++){
            arr[j++]=mtr[top][i];
           // j++;
        }
        top++;
        for(int i=top;i<=bottom && j<n;i++){
            arr[j++]=mtr[i][right];
           // j++;
        }
        right--;
        if(top<=bottom){
        for(int i=right;i>=left && j<n;i--){
            arr[j++]=mtr[bottom][i];
            //j++;
        }
        
        bottom--;
        }
        if(left<=right){
        for(int i=bottom;i>=top && j<n;i--){
            arr[j++]=mtr[i][left];
           // j++;
        }
        left++;
        }
    }
    *returnSize=j;
    return arr;

}