int strStr(char* str1, char* str2) {
    int len2=strlen(str2);
    int len1=strlen(str1);
    
    int i=0,j=0;
    for(int i=0;i<=len1-len2;i++){
        j=0;
        while(j<len2 && str1[i+j]==str2[j]){
            j++;
        }
        if(j==len2){
            return i;
        }
    }
    return -1;
}