#include <stdio.h>
#include <stdbool.h>

bool anagram(char *s,char *t)
{
    int array[256];
int i;


for(i=0;s[i];i++)
{
array[s[i]]++;
}


for(i=0;t[i];i++)
{
    array[t[i]]--;
}


for(i=0;i<256;i++)
    if(array[i]!=0)
    return false;
return true;

}

int main()
{
    
    char s[] = "cook";
    char t[] = "cook";
    if ( anagram(s, t))
      printf("Anagram");
    else
      printf("not an anagram");
 
    return 0;
}




