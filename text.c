#include<stdio.h>
#include<string.h>

//数组
//二维数组可以省略行，不能省略列
int main()
{
	int arr [3][4] = {{1,2,3},{4,5}};
	//按行依次打印数组
	//先打印行，再打印列
	int i = 0;
	for(i = 0;i<3;i++)
	{
		int j = 0;
		for(j = 0;j<4;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}





////1、strlen 和 sizeof 没有任何的关联
////2、strlen - 求字符串长度 - 只能针对字符串求长度，遇到“\0”结束计算，但不包括“\0”
////				- 如果没有遇到“\0”，会输出一个大于字符串长度的随机数 
////				- 库函数 - 需要引用头文件string.h
////3、sizeof - 计算变量、数组、类型的大小，包括“\0” - 单位是字节 - 操作符
//int main()
//{
//	int i = 0;
//	char arr[] = "abcdef";
//	//printf("%c\n",arr[3]);		//d - “[ ]” - 下标引用操作符
//
//	//依次打印出数组中的元素
//	for(i = 0;i<6;i++)
//	{
//		printf("%c\n",arr[i]);		//“%c” - 打印字符
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n",sizeof(arr1));	//4
//	printf("%d\n",sizeof(arr2));	//3
//	printf("%d\n",strlen(arr1));		//3
//	printf("%d\n",strlen(arr2));		//随机数
//
//	return 0;
//}




////自定义函数
////求n的阶乘
////2、使用递归且不创建临时变量的方法
//int Fac2(int x)
//{
//	if(x <= 1)
//		return 1;
//	else
//		return x*Fac2(x-1);
//}
//
//////1、用循环方法
////int Fac1(int x)
////{
////	int i = 0;
////	int ret = 1;
////	for (i = 1;i<=x;i++)
////	{
////		ret *=i;		//或者ret = ret*i
////	}
////	return ret;
////}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	//ret = Fac1(n);		//创建循环阶乘函数1 - Fac1
//	ret = Fac2(n);		//递归阶乘函数2 - Fac2
//	printf("%d! = %d\n",n,ret);
//
//	return 0;
//}