#define MAX_LEN 1000
#include <stdio.h>
#include <string.h>
int main() 
{
    char ch,s[MAX_LEN];
    scanf("%c ",&ch);
    printf("%c\n",ch);
    scanf("%[^\n]%*c", s);
    printf("%s\n",s);
    scanf("%[^\n]%*c", s);
    printf("%s",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

