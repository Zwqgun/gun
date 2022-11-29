#include<stdio.h>

//定义两个函数实现两个数的相加，相乘
//int jia(int a,int b)
//{
//	return(a+b);
//} 
//int cheng(int a,int b)
//{
//	return(a*b);
//}
//int main()
//{
//	int a,b;
//	printf("请随机输入两个数值：");
//	scanf("%d %d",&a,&b);
//	printf("a+b=%d\n",jia(a,b));
//	printf("a*b=%d\n",cheng(a,b)); 
//	return 0;
//}

//定义函数调用实现冒泡排序法
/*int fun(int a[10])
{
	int i,j,temp;
	for(i=0;i<10-1;
	i++)
	{
		for(j=0;j<10-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	return 0;
} 
int main()
{
	int a[10];
	int i;
	printf("请随机输入十个数值：");
	for(i=0;i<10;i++)
	{   scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("初始化一维数组为：%d\n",a[i]);
	}
	fun(a);
	for(i=0;i<10;i++)
	{
		printf("冒泡排序后的一维数组为：%d\n",a[i]);
	}
	return 0;
}*/

//定义二维数组函数进行传参，找出鞍点
/*int fun(int a[4][4])
{
	int i,j;//i表示行，j表示列 
	int max,min,max01,flag;
	for(i=0;i<4;i++)
	{
		max=a[i][0];//初始最大值为第一行第一个 
		max01=0;//初始值为0，表示第一列 
		for(j=0;j<4;j++)
		if(a[i][j]>max){max=a[i][j];max01=j;}
		min=a[i][max01];//初始最小值为max所在的行，列 
		for(j=0;j<4;j++)
        if(a[j][max01]<min)break;
        if(j>=4)
        {
        	printf("二维数组的鞍点为a[%d][%d]=%d\n",i,max01,max);
        	flag=0;
		}
	} 
	if(flag)
	printf("该二维数组没有鞍点！\n");
	return 0;
}
int main()
{
	int a[4][4];
	int i,j;
	printf("请随机输入4*4的一组二维数组：");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	} 
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("初始二维数组为：%d\t",a[i][j]);
		}printf("\n"); 
	}
	fun(a);
	return 0;
}*/ 
