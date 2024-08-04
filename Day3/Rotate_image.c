void rotate(int** arr, int n, int* matrixColSize) {
    int i=0,j=0;
    while(i<n){
        j=i+1;
        while(j<n){
            if(i<j){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
            j++;
        }
        i++;
    }
    
    j=n-1;
    int k=0;
    while(k<j){
        i=0;
        while(i<n){
            int temp=arr[i][k];
            arr[i][k]=arr[i][j];
            arr[i][j]=temp;
            i++;
        }
        j--;
        k++;
    }
}