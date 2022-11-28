#include<stdio.h>

//void fun(int a)
//{
//	printf("%d",a+1);
//}
//int main()
//{
//	int a=1;
//	fun(a);
//	fun(a);
//	fun(a);
//	return 0;
//} 
 
 /*int main()
 {
 	printf("sum=%d\n",sum(3,5));
	return 0; 
 }
 int sum(int a,int b)
{
	return(a+b);
 }*/
 
 /*int main()
 {
 	void sum(int a,int b);
 	sum(3,5);
 	return 0;
 }
void sum(int a,int b)
{
	printf("sum=%d\n",a+b);
}*/

/*int fun(int a,int b);
int main()
{
	printf("ans=%d\n",fun(3,5));
	return 0;
}
int fun(int a,int b)
{
	return(a+=b);
}*/

/*int max(int a,int b)
{
	return(a>b?a:b);
 } 
 int main()
 {
 	printf("%d\n",max(6,8));
 }*/
 
 int sum(int a)
 {
 	int c=0;
 	static int b=3;
 	c+=1;
 	b+=2;
 	return a+b+c;
  } 
  void main()
  {
  	int i;
  	int a=2;
  	for(i=0;i<5;i++)
  	{
  		printf("%d\n",sum(a));
	  }
  }
