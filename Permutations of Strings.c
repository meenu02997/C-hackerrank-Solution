#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	void swap(char **s,int x,int y)
{
    char *temp;
    temp = s[x];
    s[x] = s[y];
    s[y] = temp;
}

void reverse(char **s,int x, int y)
{
    
    while(x<y)
    {
     swap(s,x,y);
        x++;
        y--;
    }
}

int next_permutation(int n, char **s)
{
    int i,inv=-1;
    for(i=0;i<n-1;i++)
    {
        if(strcmp(s[i],s[i+1]) < 0)
        {
            inv = i;
        }
    }
    if(inv == -1) return 0;
    for(i=n-1;i>inv;i--)
    {
        if(strcmp(s[inv],s[i]) < 0)
        {
            swap(s,inv,i);
            break;
        }
    }
    reverse(s,inv+1,n-1);
    return 1;
    }


int main()