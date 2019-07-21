#include <stdio.h>
int main(){
	int a=0;
	int b=1;
	int c;
	printf("%d\n%d\n",a,b);
	for(int i=2;i<40;++i){
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
	return 0;
}
