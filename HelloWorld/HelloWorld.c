//#include <stdio.h>
//
//int main(void)
//
//{
//	float weight;
//
//	float value;
//
//	printf("are you worth you weight in platinum?\n");
//
//	printf("let's check it out.\n");
//
//	printf("please enter your weight in pounds:");
//
//    scanf_s("%f", &weight);
//
//	value = 1700.0 * weight * 14.5833;
//
//	printf("your weight in platinum is worth $%.2f\n", value);
//
//	printf("you are easily worth that!if platinum prices drop,\n");
//
//	printf("eat more to maintain your value.\n");
//
//
//	getchar();
//	getchar();
//	getchar();
//
//	return 0;
//}


//
//#include<stdio.h>

//int main()
//{
//	//int x = 100;
//
//	//printf("dec = %d;octal = %o;hex= %x\n", x, x, x);
//
//	//printf("dec = %d;octal = %#o;hex= %#x\n ", x, x, x);
//
//	//getchar();
//
//	char ch ;
//
//	printf("Please enter a character.\n");
//
//	scanf_s("%c", &ch);
//	
//	printf("The code for %c is %d.\n",ch,ch);
//
//
//	getchar();
//	getchar();
//	return 0;
//
//
//}



//
//#include<stdio.h>
//int main()
//{
	//int counter = 0;

	//printf("count your finger\n");

	//counter = 0;

	//while (counter<10)
	//{
	//	counter++;

	//	printf("counter = %d\n", counter);
	//}
	//getchar();
	//return 0;



	/*counter = 1;

	while (counter <=10)
	{
		printf("counter = %d\n", counter);
		counter++;
		
	}*/


	//counter = 0;
	//	do{
	//		counter++;

	//		printf("counter = %d\n", counter);
	//	}while(counter < 10);

	//getchar();


	//return 0;
//}


//#include<stdio.h>//��ż
//int main()
//{
//	int num = 0;
//
//	printf("demo judge number parity\n");
//	
//	while(1)
//	{
//		scanf_s("%d", &num);
//		printf("num = %d\n", num);
//
//		if (num % 2 == 0)
//			printf("num%d is even\n", num);
//		else
//			printf("num%d is odd\n", num);
//	}
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}


//#include<stdio.h>//��ż
//int main()
//{
//	int num = 0;
//	printf("demo judge number parity\n");
//	while(1) {
//		scanf_s("%d", &num);
//
//		if (num % 2 == 0)
//			printf("num %d is even\n", num);
//		else printf("num %d is odd\n", num);
//	}
//		getchar();
//		getchar();
//		getchar();
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int sum = 0;
//	int i = 0;
//
//	printf("sum 1 to 100\n");
//
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			continue;//continue ��� ����ִ���¾�"sum += i,����ִ���Ͼ�'i++' "
//		//�Դ˷�ʽ��1~100ż���ͣ�ȥ��continue����Ϊ��������
//		      sum += i;
//	}
//	printf("sum = %d\n", sum);
//
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//
//	printf("sum 1 to 100\n");
//
//	for (i = 0; i <= 100; i++)
//		if (i % 2 == 0) 
//			sum += i;
//		
//			
//		printf("sum = %d\n", sum);
//
//	
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}




//#include<stdio.h>
//int main() {
//	int i = 0;
//	int j = 0;
//
//	printf("print 9*9 multiplication table\n");
//
//	for (i = 1; i < 10; i++)
//	{
////		printf("i = %d\n", i);
//
//		for (j = 1; j <= i; j++)
//			//			printf("j = %d\n", j);
//			printf("%d*%d=%d\t", j, i, i*j);
//		printf("\n");
//
//	}
//
//	getchar();
//	getchar();
//	getchar();
//
//	return 0;
//
//}





//�žų˷���1X1=1����
//#include<stdio.h>
//int main()
//{
//	int i;
//	int j;
////
//	printf("�žų˷���\n");
//
//	for (i = 1; i < 10; i++)
//	{
//		//printf("%d\n", i);
//		for (j = 1; j <= i; j++)
//		{
//			printf("%dX%d=%d\t", j, i, i*j);
//		}
//		printf("\n");
//
//	}
//
//
//	getchar();
//	return 0;
//
//}




//#include<stdio.h>
//
//int main()
//{
//	int i = 0 ;
//	int num = 100;
//	
//	
//	printf("Find a max prime number within 100\n");
//	
//	for (i = 2; i <= num - 1; i++)
//	{
//		//printf("%d", i);
//		if (num % i == 0)
//		{
//			printf("i = %d\n", i);
//		}
//		//printf("% is prime number."num);
//	}
//
//	getchar();
//	getchar();
//
//	return 0;
//}




//Find a max prime number within 100(100���������)
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int num = 100;
//	int max = 0;
//	printf("Find a max prime number within 100\n");
//	//while (1) {
//		//printf("Please enter the number.\n");
//		//scanf_s("%d", &num);
//	for(num = 1;num <= 1000000; num+=2)
//	{ 
//			int tmp = sqrt(num);
//			//int tmp = num - 1;
//			for (i = 2; i <= tmp; i++)//���˴����Ϸֺš�;������for(����);,��ʾforѭ�������ݲ�ִ�С�
//			{
//				if (num % i == 0)
//				{
//					//printf("i = %d\n", i);
////					printf("num %d is NOT a prime\n", num);
//					break;
//				}
//			}
//			//printf("i = %d\n", i);
//			if (i == tmp + 1)
//			{
//				max = num;
////				printf("num %d is a prime\n", num);
//			}
//	}
//	printf("Max prime from 1 to 100 is %d", max);
//
//	getchar();
//
//	return 0;
//}



//#include <stdio.h>
//#include<math.h>
//int main()
//{
	//int i = 0;
	//int num = 100;
	//int max = 0;
	//printf("Find a max prime number within 100\n");

	//for (num = 1; num <= 100; num += 2)
	//	//Ѱ������������ż���������ϣ�ֱ�Ӵ�1��3��5��7������ʼ��num+=2��
	//{
	//	int tmp = sqrt(num);
	//	//����ƽ�����ļ���������

	//	for (i = 2; i <= tmp; i++)
	//	{
	//		if (num % i == 0)
	//		{
	//			break;
	//		}
	//	}

	//	if (i == tmp + 1)
	//	{
	//		max = num;

	//	}
	//}
	//printf("Max prime from 1 to 100 is %d", max);
#include <stdio.h>
#include<math.h>
	int main()
	{
	float sum = 0;
	float price;
	float adjusted_price;
	float value1 = 0;
	float value2 = 0;
	float value3 = 0;
	float value4 = 0;
	float value5 = 0;
	float value6 = 0;
	float value7 = 0;
	float value8 = 0;
	float value9 = 0;
	float value10 = 0;
	while (1)
	{

	
	printf("���뵥����Ʒ�۸��ö��Ÿ���\n");

	scanf_s("%f,%f,%f,%f,%f,%f,%f,%f,%f,%f", &value1, &value2, &value3, &value4, &value5, &value6, &value7, &value8, &value9, &value10);

	sum = value1 + value2 + value3 + value4 + value5 + value6 + value7 + value8 + value9 + value10;

	printf("��Ʒ�۸�ϼ�=%.1f\n\n", sum);

	printf("������Ʒ�ۺ�۸�\n\n");
	scanf_s("%f", &adjusted_price);

	printf("������Ʒδ�ۿۼ۸�\n\n");
	scanf_s("%f", &price);


	printf("Ӧ�����:%.1fԪ\n\n\n\n",sum*adjusted_price/price);

}
	getchar();
	getchar(); 
	getchar();

	return 0;
}