## Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem


/**
 * @input A : String termination by '\0'
 * 
 * @Output Integer
 */
int isPalindrome(char* A) {
    
    char s[50];
	int i,j,count = 0,k = 0;
    for(i=0;i<strlen(A);i++)
	{
		if((A[i] >= 'a' && A[i] <= 'z') || (A[i] >= 'A' && A[i] <= 'Z' ))
		{
			s[k++] = tolower(A[i]);
			
		}
		else
		{
			continue;
		}
	}

	s[k] = '\0';
	for(i = 0,j = strlen(s)-1;i<j;)
	{
		
		if(s[i] == s[j])
			{
				i++;
				j--;
				count++;
			}
		else
		{
			return 0;
		}
	}
		
		
	if(count == strlen(s)/2)
		return 1;
	
}
