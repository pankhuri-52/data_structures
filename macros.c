#include <stdio.h>
#define multiply(a,b) a*b
#define concat(a,b) a##b 
#ifndef p
#define p 10
#endif
#define coutmine(n)\
	int i=0;\
	while(i<n)\
         {\
		printf("%d\n",i);\
		 i++;\
	}
int main(void){
	int c=multiply(2+3,4+5);
	printf("%d\n",c);
	printf("%d\n",concat(12,08));
	int a;
	a=10;
	printf("%p",&a);
	coutmine(5);
	printf("%d",p);
	return 0;
}
