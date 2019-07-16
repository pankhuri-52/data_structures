#include <stdio.h>
#include <stdlib.h>
int main(int argc,const char *argv[])
{
    for(int i=argc-1;i>=1;i--)
    {
	    printf("%s\t",argv[i]);
    }
    return 0;
}
