#include <stdio.h>
#include <string.h>
int main(){
        char str1[15]="Hello World";
        puts(str1);
        char str2[]="hello world";
        puts(str2);
        char str3[]={'h','e','l','l','o','w','o','r','l','d'};
        puts(str3);
        char str4[12]={'h','e','l','l','o','w','o','r','l','d'};
        puts(str4);
        const char *str="Hello World";
        printf("%s\n",str);
        char *str5="Hello World";
        puts(str5);
        return 0;
}

