#include<stdio.h>
#include<string.h>
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}


//��������Ϊ���������˻�Ϊָ��
//�������������һ����ַ��ָ��������׵�ַ
//void BubbleSort(int* arr,int len)
//{
//	int i, j;
//	int temp;
//	for (i = 0; i < len - 1; i++)
//	{
//		for (j = 0; j < len - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	return;
//}
//int main()
//{
//	int i = 0;
//	
//	int arr[] = { 2,1,4,3,6,5,8,7,9,10 };
//	
//	BubbleSort(arr, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}



//int a = 10;
//
//int* test()
//{
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%p\n", p);
//	printf("%p\n", &a);
//
//	printf("%d\n", *p);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int i;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* p;
//	p = arr;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d\n", p[i]);
//		printf("%d\n",*(p+i));
//	}
//	return 0;
//}

//int main()
//{
//	int step;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* p;
//	p = &arr[3];
//	step = p - arr;
//	printf("%d\n", step);
//	return 0;
//}

//int main()
//{
//	int step;
//	char ch[] = "hello world";
//	char* p = &ch[4];
//	step = p - ch;
//	printf("%d\n", step);
//	return 0;
//}



//int main()
//{
//	int i;
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	*arr[2] = 123;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *arr[i]);
//	}
//	return 0;
//}



//struct stu
//{
//	int id;
//	char name[21];
//	char sex;
//	int age;
//	int score;
//	char address[51];
//};
//int main()
//{
//	//���սṹ���Ա�б�˳�����γ�ʼ������
//	struct stu ss = { 1001,"ʮ������",'F',18,999,"�ظ�ʮ�˲�" };
//
//
//	ss.id = 1002;
//	strcpy_s(ss.name, "�ز�����");
//	//��ӡ�ṹ����Ϣ
//	printf("���:%d\n", ss.id);
//	printf("����:%s\n", ss.name);
//	printf("�Ա�:%s\n", ss.sex == 'M' ? "��" : "Ů");
//	printf("����:%d\n", ss.age);
//	printf("����:%d\n", ss.score);
//	printf("��ַ:%s\n", ss.address);
//	return 0;
//}

//typedef struct stu student;
//struct stu
//{
//	int id;
//	char name[21];
//	char sex;
//	int age;
//	int score;
//	char address[51];
//};
//int main()
//{
//	int i = 0;
//	student ss[3] =
//	{
//		{1002,"ʮ�����޷���",'M',18,999,"�ظ�ʮ�˲�"},
//		{1003,"ʮ�����޷���",'F',18,999,"�ظ�ʮ�˲�"},
//		{1004,"ʮ�����޷���",'F',18,999,"�ظ�ʮ�˲�"}
//	};
//	for (i = 0; i < 3; i++)
//	{
//	printf("���:%d\n", ss[i].id);
//	printf("����:%s\n", ss[i].name);
//	printf("�Ա�:%s\n", ss[i].sex == 'M' ? "��" : "Ů");
//	printf("����:%d\n", ss[i].age);
//	printf("����:%d\n", ss[i].score);
//	printf("��ַ:%s\n", ss[i].address);
//	}
//	return 0;
//}



typedef struct stu
{
	int id;
	char name[21];
	int age;
	char sex;
	int score;
	
}student;

int main()
{
	int i = 0;
	student ss[2];
	//ͨ�����̻�ȡѧ����Ϣ
	for (i = 0; i < 2; i++)
	{
		scanf_s("%d %s %d,%c %d", &ss[i].id, ss[i].name, &ss[i].age, &ss[i].sex, &ss[i].score);
	}
	for (i = 0; i <2 ; i++)
	{
	printf("���:%d\n", ss[i].id);
	printf("����:%s\n", ss[i].name);
	printf("����:%d\n", ss[i].age);
	printf("�Ա�:%s\n", ss[i].sex == 'M' ? "��" : "Ů");
	printf("����:%d\n", ss[i].score);
	}
	return 0;
}