#include<stdio.h>
#include<string.h>

//����
//��ά�������ʡ���У�����ʡ����
int main()
{
	int arr [3][4] = {{1,2,3},{4,5}};
	//�������δ�ӡ����
	//�ȴ�ӡ�У��ٴ�ӡ��
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





////1��strlen �� sizeof û���κεĹ���
////2��strlen - ���ַ������� - ֻ������ַ����󳤶ȣ�������\0���������㣬����������\0��
////				- ���û��������\0���������һ�������ַ������ȵ������ 
////				- �⺯�� - ��Ҫ����ͷ�ļ�string.h
////3��sizeof - ������������顢���͵Ĵ�С��������\0�� - ��λ���ֽ� - ������
//int main()
//{
//	int i = 0;
//	char arr[] = "abcdef";
//	//printf("%c\n",arr[3]);		//d - ��[ ]�� - �±����ò�����
//
//	//���δ�ӡ�������е�Ԫ��
//	for(i = 0;i<6;i++)
//	{
//		printf("%c\n",arr[i]);		//��%c�� - ��ӡ�ַ�
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
//	printf("%d\n",strlen(arr2));		//�����
//
//	return 0;
//}




////�Զ��庯��
////��n�Ľ׳�
////2��ʹ�õݹ��Ҳ�������ʱ�����ķ���
//int Fac2(int x)
//{
//	if(x <= 1)
//		return 1;
//	else
//		return x*Fac2(x-1);
//}
//
//////1����ѭ������
////int Fac1(int x)
////{
////	int i = 0;
////	int ret = 1;
////	for (i = 1;i<=x;i++)
////	{
////		ret *=i;		//����ret = ret*i
////	}
////	return ret;
////}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	//ret = Fac1(n);		//����ѭ���׳˺���1 - Fac1
//	ret = Fac2(n);		//�ݹ�׳˺���2 - Fac2
//	printf("%d! = %d\n",n,ret);
//
//	return 0;
//}