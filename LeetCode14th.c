char * longestCommonPrefix(char ** strs, int strsSize){
    int i,j;
    int count = 0;
    char* s;
    char* s1 = (char *)malloc(200*sizeof(char));
    memset(s1, '\0', 200*sizeof(char));
    s = s1;

    
    if (strsSize == 0)
        return s;
    else{
        for(j=0;j<strlen(strs[0]);j++){
            for(i=0;i+1<strsSize;i++)
                if(strs[i][j] != strs[i+1][j]) {
                    return s1;
                }
            *s = strs[0][count];
            s++;
            count++;
        }
    }
    return s1;
}
