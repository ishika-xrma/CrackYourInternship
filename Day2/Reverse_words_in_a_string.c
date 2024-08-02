char* reverse(char*s){
    int i=0,j=strlen(s)-1;
    while(i<j){
        int temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    return s;
}
char* reverseWords(char* s) {
    int len=strlen(s);
    s=reverse(s);
    char* r = (char*)malloc(len + 1);
    char *token=strtok((char*)s," ");
    int i=0;
    while(token!=NULL & i<len){
        token=reverse(token);
        strcpy(&r[i],token);
        i+=strlen(token);
        if((token=strtok(NULL," "))!=NULL){
            r[i]=' ';
            i++;
        }
    }
    return r;
}