#include<stdio.h>
void fun1(int []);
void fun2(int [][2]);
int main()
{
	int a[3]={7,3,5},b[2][2]={30,5,16,2};
	fun1(a);
	fun2(b);
}

void fun1(int a[2])
{
	int sum=0,min=a[0],max=a[0];
	for(int i=0 ; i<3 ;i++)
	{
		sum = sum + a[i];
		if(min>a[i])
			min = a[i];
		if(max<a[i])
			max=a[i];
	}
	printf("Sum=%d \t min = %d \t max = %d\n",sum,min,max);
}

void fun2(int b[2][2])
{
	int sum=0,min=b[0][0],max=b[0][0];
	for(int i=0 ; i<2 ;i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			sum = sum + b[i][j];
			if(min>b[i][j])
				min = b[i][j];
			if(max<b[i][j])
				max=b[i][j];
		}
	}
	printf("Sum=%d \t min = %d \t max = %d\n",sum,min,max);
}
