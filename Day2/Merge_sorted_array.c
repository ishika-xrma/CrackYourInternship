void merge(int* arr1, int nums1Size, int m, int* arr2, int nums2Size, int n) {
    if(m==0 && n==0){
        return;
    }
    if(m==0 && n!=0){
        for(int i=0;i<n;i++){
            arr1[i]=arr2[i];
    }
    return;
    }
    int copy[m];
    for(int i=0;i<m;i++){
        copy[i]=arr1[i];
    }
    int i=0,j=0,k=0;
    while(j<m && k<n){
        if(copy[j]<=arr2[k]){
            arr1[i]=copy[j];
            j++;
        }
        else{
            arr1[i]=arr2[k];
            k++;
        }
        i++;
    }
    while(j<m){
            arr1[i]=copy[j];
            j++;
            i++;
    }
    while(k<n){
            arr1[i]=arr2[k];
            k++;
            i++;
    }
}