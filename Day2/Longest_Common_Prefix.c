char* longestCommonPrefix(char** str, int size) {
    char temp;
    int i=0;
    while(str[0][i]!='\0'){
        temp=str[0][i];
        for(int j=1;j<size;++j){
            if(str[j][i]!=temp || str[j][i]=='\0'){
                char *com=malloc((i+1)*sizeof(char));
                strncpy(com,str[0],i);
                com[i]='\0';
                return com;
            }
        }
        i++;
    }
    char *com=malloc((i+1)*sizeof(char));
    strncpy(com,str[0],i);
    com[i]='\0';
    return com;
}