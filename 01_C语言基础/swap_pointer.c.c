#include <stdio.h>
void swap(int*x,int*y){


	int t=*x;
	*x=*y;
	*y=t;
}
	
	int main(){
	
	int b=0;
 int a=42;
 printf("交换前a=%d,b=%d\n",a,b);
   swap(&a,&b);
  printf("交换后a=%d,b=%d\n",a,b);
  return 0;
}
