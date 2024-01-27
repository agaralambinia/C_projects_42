#include <printf.h>
#include <stdio.h>
int main()
{
    //argcount tests
    printf("argcount %d\n", argcount("%%")==0);
    printf("argcount %d\n", argcount("%d")==1);
    printf("argcount %d\n", argcount(""));
    printf("argcount %d\n", argcount("eee%d%deee")==2);
}
/*
- check input
- check 
*/