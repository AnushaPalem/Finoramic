#include <stdio.h>
#include <stdbool.h>

bool anagram(char *s,char *t)
{
    int arr1[256]={0},arr2[256]={0};
    int i;
    for(i=0;s[i]&&t[i];i++)
    {
        arr1[s[i]]++;
        arr2[t[i]]++;
    }
     for (i = 0; i < 256; i++)
        if (arr1[i] != arr2[i])
            return false;
 
    return true;
    
}
int main()
{
    char s[ ]="cook";
    char t[ ]="cook";
    if (anagram(s,t))
    printf("anagram");
    else
    printf("not an anagraam");
}




