## Implement strStr().

strstr - locate a substring ( needle ) in a string ( haystack ). 
  
int strStr(const char* A, const char* B) {
    
    int i,j,count = 0,len = strlen(B),ind = -1;
    
    for(i = 0;i<strlen(A);)
    {
        count = 0;
        for(j = i;j<len;j++)
        {
            ind = i;
            if(B[j] == A[j])
            {
                count++;
            }
            else
            {
                break;
            }
            
        }
            i++;
    
    }
    if(len == count)
        return ind;
    else
        return -1;
}
