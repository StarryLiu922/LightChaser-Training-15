#include <stdio.h>
#include <stdlib.h>
int main (){
	int n;
	int i;
   printf("请输入要几个数：");
	scanf("%d",&n);
	 int *arr = (int*)malloc(n * sizeof(int));
	 if (arr==NULL ){
	 	printf("内存不足");
		 return 0;
	 }
	 printf("请输入几个数："); 
		int sum=0;
	double result;
	for(i=0;i<n;i++){
	scanf( "%d",&arr[i]);
    sum=sum+arr[i];

}
    result=sum/(double)n;
	printf("平均数为：%f\n",result);
	free (arr);
	arr=NULL;
	return 0;
}
	
