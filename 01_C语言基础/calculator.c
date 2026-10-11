#include <stdio.h>
int main(){

   double x,y;
   char op;
   double result;
   while(1){
   		printf("请输入算式：");
   	   scanf("%lf %c %lf",&x,&op,&y);
    if(op=='+'){
 result=x+y;
}
  else if(op=='-'){
   	result=x-y;
   }
   else if(op=='*'){
   result=x*y;
   }
   
else if(op=='/'){
if(y==0){
		printf("除数不能为0。\n");
		continue;
	
		}  
		else
		result=x/y;
	
	
} 

   
   
   
   printf("答案是：%f\n",result);
   break;
}
   return 0; 
   
}
