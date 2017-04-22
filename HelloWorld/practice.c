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


//#include<stdio.h>//奇偶
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


//#include<stdio.h>//奇偶
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
//			continue;//continue 语句 ，不执行下句"sum += i,继续执行上句'i++' "
//		//以此方式求1~100偶数和，去掉continue，则为求奇数和
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





//九九乘法表‘1X1=1’版
//#include<stdio.h>
//int main()
//{
//	int i;
//	int j;
////
//	printf("九九乘法表\n");
//
//	for (i = 1; i < 10; i++)
//	{
//		//printf("%d\n", i);
//		for (j = 1; j <= i; j++)
//		{
//			printf("%dX%d=%d\t", j, i, i*j);
//		}
//		printf("\n");
//	}
//
//
//	getchar();
//	return 0;
//
//}



///*
//
//* * * * *
// * * * *
//  * * *
//   * *
//    *
//*/
//#include<stdio.h>
//int main()
//{
//	int i;
//	int j;
//	int n;
//	char a='*';
//	for (i = 6; i > 1; i--)
//	{
//		for (n = 6 - i; n >= 1; n--)
//		{
//			printf(" ");//这里一个空格是题头注释的图案，两个空格是另外一种图案
//			
//		}
//		for (j = 1; j < i; j++)
//		{
//			printf("%c ",a);
//		}
//		printf("\n");
//	}
//	getchar();
//	return 0;
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







//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int num = 100;
//	int max = 0;
//	printf("Find a max prime number within 100\n");

////寻找素数，所有偶数都不符合，直接从1，3，5，7……开始（num+=2）
//	for (num = 1; num <= 100; num += 2)
//		
//	{//大于平方根的计算无意义
//		int tmp = sqrt(num);
//		
//
//		for (i = 2; i <= tmp; i++)
//		{
//			if (num % i == 0)
//			{
//				break;
//			}
//		}
//
//		if (i == tmp + 1)
//		{
//			max = num;
//
//		}
//	}
//	printf("Max prime from 1 to 100 is %d", max);
//	getchar();
//	getchar();
//	getchar();
//
//	return 0;
//}
//

//
//
//#include<stdio.h>
//int main()
//{
//	int i;
//	int j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d×%d=%d\t", j, i, i*j);
//		}
//		printf("\n");
//	}
//
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}


////100以内最大素数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int max = 0;
//	for (num = 1; num <= 100; num += 2)
//	{
//		int tmp = sqrt(num);
//			for (i = 2; i <= tmp; i++)
//		{
//				if (num % i == 0)
//				{
//					break;
//				}
//		}
//			if (i == tmp + 1)
//			{
//				max = num;
//			}
//	}
//	printf("the max prime is %d", max);
//
//
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}










//数9
//00~99，共200个数字（0~99，共100个数，二位数，100×2=200）
//#include<stdio.h>
//int main()
//{
//	
//	int num = 0;
//	int i = 0;
//	int counter = 0;
//	int sum = 0;
//	int max;
//	printf("Plese input max\n");
//	scanf_s
//	("%d", &max);
//	printf("sumary 9 from 1 to %d\n",max);
//	for(i=1;i<=max;i++)
//	{ 
//		num = i;
//		counter = 0;
//		while (num != 0)
//		{
//			if (num % 10 == 9)
//				counter++;
//			num = num / 10;
//		
//		}
////	printf("num = %d,counter = %d ", i,counter);
//	sum += counter;
//	}
//	printf("sum = %d\n", sum);
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}


//再来数9
//#include<stdio.h>
//
//
//int count(int num, int digit)
//{
//	int counter = 0;
//	while (num != 0)
//	{
//		if (num % 10 == digit)
//			counter++;
//		num /= 10;
//	}
//	return counter;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	printf("sumary 9 from 1 to 100.\n");
//	for (i = 1; i <= 1000; i++)
//	{
//	sum +=	count(i, 9);
//	}
//	printf("sum = %d\n", sum);
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}






//#include<stdio.h>
//int main()
//{
//	int kuatuo;
//
//	//float value;
//	//printf("Enter a floating-point value: ");
//
//	//scanf_s("%f", &value);
//	////printf("%.2f\n", value);
//	//printf("fixed-point natation: %f\n", value);
//	//printf("exponential natation: %e\n", value);
//	//printf("p natation: %.3a\n", value);
//	printf("计算n夸脱水有多少个水分子\n");
//	printf("输入夸脱数：");
//	scanf_s("%d", &kuatuo);
//	printf("%d夸脱水中含有约%.1f个水分子", kuatuo, kuatuo * 950 / 3.0e-23);
//
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}                     




//#include<stdio.h>
//#define PRAISE "You are an extraordinary being."
//int main()
//{
//	char name[40];
//	printf("What's your name?");
//	scanf_s("%s", name);
//	printf("Hello，%s.%s\n", name, PRAISE);
//	
//	
//
//
//
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
	//int a, b, c, t, max;
	//printf("Enter the three numer.\n");
	//while (1)
	//{

	//
	//scanf_s("%d,%d,%d",&a,&b,&c);

	//t = (a > b) ? a : b;
	//t = (t > c) ? t : c;

	//max = t;

	//printf("The max number is %d\n", max);
	//}



	////输入1000以内的数，求平方根，非整数，输出整数部分，大于1000，重新输入
	//float num;
	//float sqrt_num;
	//printf("Enter the number less than 1000:");
	//scanf_s("%f",&num);
	//if (num > 1000)
	//	printf("Please enter the number less than 1000!");
	//else
	//{
	//	sqrt_num = sqrt(num);
	//	printf("The sqrt(num) = %.1f.", sqrt_num);
	//}
	//getchar();
	//getchar();
	//getchar();
	//return 0;



	//输出函数
	//		{x		(x<1)
	//	y=	{2x-1	(1<=x<10)
	//		{3x-11	(x>=10)

	//int x, y;
	//while (1) 
	//{
	//printf("Enter the x.\n");
	//scanf_s("%d", &x);

	//if (x < 1)
	//	printf("y = %d\n", x);
	//else if(x < 10)
	//	printf("y = %d\n", 2*x-1);
	//else
	//	printf("y = %d\n", 3*x-11);
	//}



	//90分以上A，80~89B，70~79C，60~69D，60分以下E

//#include<stdio.h>
//int main() 
//{
//	int grade;
//	printf("输入成绩：");
//	scanf_s("%d", &grade);
//	switch (grade/10)
//	{
//	case 10:
//		printf("A");
//		break;
//
//	case 9:
//		printf("A");
//		break;
//
//	case 8:
//		printf("B");
//		break;	
//
//	case 7:
//		printf("C");
//		break;
//	case 6:
//		printf("D");
//		break;
//	default:
//		printf("E");
//		break;
//	}
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}

////输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数
//#include<stdio.h>
//int main()
//{
//	int letter = 0;
//	int space = 0;
//	int digit = 0;
//	int other = 0;
//	char c;
//	printf("输入一段字符：\n");
//
//	//执行循环，获取单个字符，按回车结束循环
//	while ((c=getchar())!='\n')//c=getchar要加括号
//	{
//		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')//ASCII
//			letter++;
//		else if (c == ' ')
//			space++;
//		else if (c >= '0' && c <= '9')//数字要加单引号
//			digit++;
//		else
//			other++;
//	}
//
//	printf("这行字符共有字母%d个，空格%d个，数字%d个，其他字符%d个", letter, space, digit, other);
//
//	getchar();
//	getchar();
//	return 0;
//}



////Sn=a+aa+aaa+……aa……a(n个a)=？
//#include<stdio.h>
//int main()
//{
//	int n,a,i;//n,a,i在下方代码存在赋值过程，不需要提前赋初值
//	int an = 0;//an、Sn在下方代码要直接使用，需要提前赋值
//	int Sn = 0;
//
//	printf("Sn=a+aa+aaa+……+aa……a(n个a)=？\n输入 n,a:\n");
//	scanf_s("%d,%d", &n, &a);
//
//	for (i=1;i<=n;i++)
//	{
//		an = an + a;
//		Sn = Sn + an;
//		a = a * 10;
//	}
//
//	printf("Sn=a+aa+aaa+……+aa……a(n个a)=%d", Sn);
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}




////1!+2!+3!+……n!=?
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a = 1;
//	int i = 0;
//	double an = 1;
//	double Sn = 0;
//
//	printf("Sn=1!+2!+3!+……n!=?\n输入 n:\n");
//	scanf_s("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		an = an*a;
//		Sn = Sn + an;
//		a = a + 1;
//	}
//	printf("Sn=1!+2!+3!+……n!=%e", Sn);
//	getchar();
//	getchar();
//	return 0;
//}

////找出一串数值中最大的数
//#include<stdio.h>
//int main()
//{
//	float num=1;//while语句需要判定num的值，num初值不可为0，否则循环不执行，故赋值1
//	float max;
//
//	printf("Enter a number:\n");
//	scanf_s("%f", &max);//首先获取一个值赋值给max，使循环能正常进行比较
//	while (num != 0)//输入0终止循环
//	{
//		printf("Enter a number:\n");
//		scanf_s("%f", &num);
//		max = num >= max ? num : max;//将较大值赋值给max
//	}
//
//		printf("The largest number entered was %f", max);
//		//防止执行printf语句后直接关闭界面
//		getchar();
//		getchar();
//		getchar();
//
//	return 0;
//}


////猴子摘桃若干个桃，每天吃一半加一个，第n天早上只剩一个桃，求摘了几个桃
//#include<stdio.h>
//int main()
//{
//	int i, n;
//	int sum = 1;//第n天早上剩一个桃
//	printf("猴子摘桃若干个桃，每天吃一半加一个，第n天早上只剩一个，求摘了几个桃\n\
//输入n的值：");
//	scanf_s("%d", &n);
//
//	for (i = 1; i < n; i++)//第n天没吃桃故 'i < n'不能取等
//	{
//		sum = (sum + 1) * 2;//计算前一天剩几个桃子
//	}
//
//	printf("共摘了%d个桃", sum);
//	getchar();
//	getchar();
//	return 0;
//}



////计算Sn=2/1+3/2+5/3+8/5+13/8……=?
//#include<stdio.h>
//int main()
//{	
//	int i = 1;
//	int n = 0;
//	float a = 2;
//	float b = 1;
//	float t;
//	float Sn = 0;
//
//	printf("2/1+3/2+5/3+8/5+13/8……=?\n输入项数n:");
//	scanf_s("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		Sn = a / b + Sn;
//		t = a;
//		a = a + b;
//		b = t;
//	}
//
//	printf("Sn=2/1+3/2+5/3+8/5+13/8……= %f",Sn);
//	getchar();
//	getchar();
//	return 0;
//}


////计算两个正整数的最大公约数
//#include<stdio.h>
//int main()
//{
//	int m, n,t;
//
//	printf("Calculate greatest common divisor of two integers\n");
//	printf("Enter two integers:");
//	scanf_s("%d,%d",&m,&n);
//
//	while (n != 0)
//	{
//		t = n;//储存n的值
//		n = m%n;
//		m = t;//读取储存的n的值
//	}
//
//	printf("GCD<greatest common divisor>:%d",m);
//
//	getchar();
//	getchar();
//	return 0;
//}





////sum=1/1! + 1/2! +1/3! +……1/n!=?
//#include<stdio.h>
//int main()
//{
//	int n, i;
//	int an = 1;
//	float sum = 0;
//
//	printf("sum=1/1! + 1/2! +1/3! +……1/n!=?\nEnter the value of n:");
//	scanf_s("%d", &n);
//
//	for (i = 1; i <= n; i++)//通过n确定循环次数
//	{
//		an = an * i;//计算阶乘的值
//		sum = sum + 1.0 / an;//要使用“1.0”，使用“1”输出的只含整数部分
//	}
//
//	printf("sum=1/1! + 1/2! +1/3! +……1/n!=%.2f", sum);
//	getchar();
//	getchar();
//	getchar();
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	/*int i;
//	i = 0; do printf("%d,", i); while (i++); printf("%d\n", i); getchar(); getchar();
//	return 0;*/
//
//}








////水仙花数：153=1^3+5^3+3^3
//#include<stdio.h>
//int main()
//{
//	int i, a, b, c;
//	printf("Parcissus numbers are ");//该句只需打印一次，故在循环外打印
//
//	for (i = 100; i <= 999; i++)//100~999的三位数
//	{
//		a = i % 10;//个位
//		b = (i / 10) % 10;//十位
//		c = i / 100;//百位
//
//		if (a*a*a + b*b*b + c*c*c == i)
//			printf("%d ", i);//单句，可不加花括号，数字间以空格隔开
//	}
//	getchar();
//	return 0;
//}




////甲队a,b,c 乙队x,y,z;  a说他不和x比，c说他不和x,z比;求比赛名单
//#include<stdio.h>
//int main()
//{
//	char a, b, c;
//	for (a = 'x'; a <= 'z'; a++)
//	{
//		if (a != 'x')
//			for (c = 'x'; c <= 'z'; c++)
//			{
//				if (c != 'x'&&c != 'z'&&c!=a)
//					for (b = 'x'; b <= 'z'; b++)
//					{ 
//						if(b!=a&&b!=c)
//							printf("a-->%c\nb-->%c\nc-->%c", a, b, c);
//					}
//			}
//		
//
//	}
//	getchar();
//	return 0;
//}



////对10个元素的整数数组进行排序
//#include<stdio.h>
//#define N 10
//int main()
//{
//	int i,t,j;
//	int a[10];
//
//	//获取数组
//	printf("Enter ten number:\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("a[%d]=", i);
//		scanf_s("%d", &a[i]);
//	}
//
//	//打印数组原始排序
//	printf("The orginal number:\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//
//	//对数组进行排序，将最小的数赋值给a[0],第二小的赋值给a[1]……
//	for (i = 0; i < N; i++)
//	{
//		for (j = i + 1; j < N; j++)
//		{
//			if (a[j] < a[i])
//			{
//				t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//	}
//
//	//打印排序后数组
//	printf("The sorted number:\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ",  a[i]);
//	}
//
//	getchar();
//	getchar();
//	return 0;
//}





////100以内所有素数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i;
//	int num;
//
//	for (num = 1; num <= 100; num ++)
//	{
//		for (i = 2; i <= num; i++)
//		{
//			if (num % i == 0)
//			{
//				break;
//			}		
//		}
//		if (i == num)
//		printf("%d ", num);
//	}
//	
//	getchar();
//	getchar();
//	return 0;
//}


////ASCⅡ码字符与数值
//#include<stdio.h>
//int main()
//{
//	char a = 65;
//	printf("%c", a);
//	getchar();
//	getchar();
//
//	return 0;
//}





////CPP 二维数组示例
//#include<stdio.h>
//#define MONTHS 12//  一年的月份数 
//#define YEARS 5//  年数 
//int main()
//{
//	// 用2010～2014年的降水量数据初始化数组
//	const float rain[YEARS][MONTHS]=
//	{ 
//	{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
//	{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
//	{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
//	{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
//	{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
//	};
//	int year, month;
//	float subtot, total;
//
//	printf(" YEAR　　  \tRAINFALL　 (inches)\n");
//
//	for (year  = 0, total  = 0; year < YEARS; year++)
//	{
//		//  每一年，各月的降水量总和
//		for (month = 0, subtot = 0; month < MONTHS; month++)
//		{
//			subtot += rain[year][month];
//		}
//
//		printf("%5d　%15.1f\n", 2010 + year, subtot); 
//		total += subtot;// 5年的总降水量
//	}
//
//	printf("\nThe　yearly　average　is　%.1f　inches.\n\n", total  / YEARS);
//	printf("MONTHLY　AVERAGES:\n\n");
//	printf(" Jan\t Feb\t Mar\t Apr\t May\t Jun\t Jul\t Aug\t Sep\t Oct\t Nov\t Dec\n");
//
//	for (month  = 0; month < MONTHS; month++)
//	{
//		//  每个月，5年的总降水量 
//		for (year = 0, subtot = 0; year < YEARS; year++)
//		{
//			subtot += rain[year][month];
//		}
//
//		printf("%4.1f\t", subtot  / YEARS);
//	}
//
//	getchar();
//	getchar();
//	return 0;
//}




////指针地址
//#include<stdio.h>
//#define SIZE 4
//int main()
//{
//	short dates[SIZE];
//	short * pti;
//	short index;
//	double bills[SIZE];
//	double * ptf;
//	pti = dates;
//	ptf = bills;
//	printf("%23")
//	return 0;
//}







////输入输出3行4列数组，求出数组最大值，并得到其位置
//#include<stdio.h>
//#define ROW 3
//#define COL 4
//int main()
//{
//	int a[ROW][COL];
//	int i, j;
//	int row = 0, col = 0,max = 0;
//
//	//获取数组
//	printf("输入%d行%d列共%d个整数，用‘空格’或‘回车’隔开\n",ROW,COL,ROW*COL);
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			scanf_s("%d", &a[i][j]);
//		}
//	}
//
//	//输出数组，并在循环中找出最大值及其位置
//	printf("这个数组为：\n");
//	max = a[0][0];	//为max赋值a[0][0],开始进行数组内比较,
//					//未进行这一步骤，若出现极端情况，如所有元素都为负数时，结果会出错
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			if (max < a[i][j])
//			{
//				max = a[i][j];
//				row = i; col = j;//记录最大值的位置
//			}
//			printf("%d\t", a[i][j]);//使用制表符，使元素更整齐
//		}
//		printf("\n");
//	}
//	printf("此数组的最大值为%d,这个值位于第%d行第%d列。", max, row + 1, col + 1);
//
//	getchar();
//	getchar();
//	return 0;
//}




////抽泼科牌
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#include<stdbool.h>//没加这个bool、false会显示未定义
//
//#define num_suits 4
//#define num_ranks 13
//
//int main()
//{
//	bool in_hand [num_suits][num_ranks] = { false };
//	int num_cards, rank, suit;
//	const char rank_code[] = { '2','3','4','5','6','7','8','9','10','j','q','k','a' };
//	const char suit_code[][10] = { "红桃","黑桃","方块","梅花" };
//	srand((unsigned)time(NULL));
//	printf("您需要几张牌:");
//	scanf_s("%d", &num_cards);
//	printf("系统为您分配的牌是：");
//	while(num_cards > 0)
//	{
//		suit = rand() % num_suits;
//		rank = rand() % num_ranks;
//		if (!in_hand[suit][rank])
//		{
//			in_hand[suit][rank] = true;
//			num_cards--;
//			printf("%s%c", suit_code[suit], rank_code[rank]);
//			if (num_cards != 0)
//				printf(", ");
//		}
//	}
//
//	system("pause");
//	return 0;
//}

////定义函数简单示例
//#include <stdio.h>
//int a, b;
////void jolly()
////{     printf("For he's a jolly good fellow!\n"); } 
////void deny()
////{     printf("Which nobody can deny!\n"); } 
//void change()
//{	a = a + b; b = a - b; a = a - b;	}
//int main()
//{
//	a = 1;
//	b = 2;
//	change();
//	printf("a=%d	b=%d", a, b);
//	getchar();
//	getchar();
//	//jolly();  
//	//jolly();  
//	//jolly();  
//	//deny(); 
//
//return 0; 
//}


//#include<stdio.h>
//int main()
//{
//	int i, sum, a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	sum = 1;
//	for (i = 0; i<10; i++)  sum -= a[i];
//	printf("%d", sum);
//
//
//	system("pause");
//	return 0; 
//}

//
//#include<stdio.h>
//int n, fac;
//void main()
//{
//	int c_fac(int n);
//	scanf_s("%d", &n);
//	printf("%d", c_fac(n));
//	system("pause");
//}
//
////阶乘递归
//int c_fac(int n)
//{
//	if (n > 0)
//		fac = n*c_fac(n - 1);
//	else fac = 1;
//
//	return fac;
//}



////删除字符串s中所出现的与变量c相同的字符。
//#include<stdio.h>
//char c,a[40];
//int i = 0,j;
//int main()
//{
//	printf("Enter a string.\n");
//	gets(a);
//	printf("What character you want to delete？");
//	c = getchar();
//	while (a[i] != '\0')
//	{
//		while (a[i] == c)
//			for (j = i; a[j] != '\0';j++)
//				a[j] = a[j + 1];
//		i++;
//	}
//	puts(a);
//
//	system("pause");
//	return 0;
//}

////e=sum=1+1/1! + 1/2! +1/3! +……1/n!=?
//#include<stdio.h>
//int main()
//{
//	int i, n;
//	float sum = 0;
//	printf("sum=1+1/1! + 1/2! +1/3! +……1/n!=?\n");
//	printf("enter the value of n:");
//
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//		sum += (1.0 / c_fac(i));
//
//	printf("sum=1+1/1! + 1/2! +1/3! +……1/n!=%.2f", sum + 1);
//	system("pause");
//	return 0;
//}
//
//
////calculate factorial
//int c_fac(int n)
//{
//	int fac;
//	if (n > 0)
//		fac = n*c_fac(n - 1);
//	else fac = 1;
//
//	return fac;
//}



////swap
//#include<stdio.h>
//void swap(int*s1, int*s2);
//void interchange(int *u, int*v);
//int main(void)
//{
//	int i = 0, x = 5, y = 10, s1[] = { 1,2,3 }, s2[] = { 4,5,6 };
//	//printf("Originally x = %d and y = %d.\n", x, y);
//	//interchange(&x, &y);//把地址发送给函数
//	//printf("Now x = %d and y = %d.\n", x, y);
//	printf("Originally s1:");
//	i = 0;
//	while (i<sizeof(s1)/sizeof(s1[0]))
//	{
//		printf("%d", s1[i]);
//		i++;
//	}
//	printf("\nOriginally s2:");
//	i = 0;
//	while (i<sizeof(s2) / sizeof(s2[0]))
//	{
//		printf("%d", s2[i]);
//		i++;
//	}
//
//	swap(s1, s2);
//	printf("\nNOW s1:");
//	i = 0;
//	while (i<sizeof(s1) / sizeof(s1[0]))
//	{
//		printf("%d", s1[i]);
//		i++;
//	}
//	printf("\nNOW s2:");
//
//	i = 0;
//	while (i<sizeof(s2) / sizeof(s2[0]))
//	{
//		printf("%d", s2[i]);
//		i++;
//	}
//
//	system("pause");
//	return 0;
//}
//void interchange(int*u, int*v)
//{
//	int temp;
//	temp = *u;//temp获得u所指向对象的值
//	*u = *v;
//	*v = temp;
//}
//void swap(int*s1, int*s2)
//{
//	int temp,i = 0;
//	while (i<3)
//	{
//		temp = s1[i];
//		s1[i] = s2[i];
//		s2[i] = temp;
//		i++;
//	}
//}

////culculate sinx;
//#include<stdio.h>
//#include<math.h>
//int main() 
//{
//	float sum = 0, an = 1, x, sin;
//	int n = 1;
//	while (1)
//	{
//		sum = 0; an = 1,n=1;
//	printf("Input x:\n");
//		scanf_s("%f", &x);
//		while (abs(an) >= pow(10, -5) )
//		{
//
//			an = pow(-1, n / 2)*pow(x, n) / c_fac(n);
//			//printf("pow(-1, n / 2)=%f", pow(-1, n / 2));
//			sum += an;
//			n += 2;
//			//printf("an=%f", an);
//			//printf("sum=%f", sum);
//
//		}
//		printf("sinx=%f\n", sum);
//	}
//	
//	//sin = sinl (x);
//	//printf("\nsinx%f", sin);
//	system("pause");
//	return 0; }
//
////阶乘递归
//int c_fac(int n)
//{
//	int fac;
//	if (n > 0)
//		fac = n*c_fac(n - 1);
//	else fac = 1;
//
//	return fac;
//}

//// Culculator
//#include<stdio.h>
//int main()
//{
//	double number1;
//	double number2;
//	char operation;
//
//	printf("\nEnter the calculation\n");
//	scanf_s("%lf%c", &number1, &operation);
//	scanf_s("%lf", &number2);
//	printf("%lf%c%lf", number1, operation, number2);
//
//	switch (operation)
//	{
//	case '+':
//		printf("=%lf\n", number1 + number2);
//		break;
//
//	case '-':
//		printf("=%lf\n", number1 - number2);
//		break;
//
//	case '*':
//		printf("=%lf\n", number1*number2);
//		break;
//
//	case '/':
//		if (number2 == 0)
//			printf("\n\n\aDavision by zero error!\n");
//		else
//			printf("=%lf\n", number1 / number2);
//		break;
//
//	case '%':
//		if ((long)number2 == 0)
//			printf("\n\n\aDavision by zero error!\n");
//		else
//			printf("=%ld\n", (long)number1 % (long)number2);
//		break;
//
//	default:
//		printf("\n\n\aDavision by zero error!\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}

//
//
////指针算法
//#include<stdio.h>
//#define SIZE 10
//int sump(int*start, int*end);
//int main(void)
//{
//	int marbelse[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
//	long answer;
//	answer = sump(marbelse, marbelse + SIZE);
//	printf("The total number of marbles is %ld.\n", answer);
//	system("pause");
//	return 0;
//}
///*使用指针算法*/
//int sump(int*start, int*end)
//{
//	int total = 0;
//	while (start < end)
//	{
//		total += *start;
//		start++;
//	}
//	return total;	
//}



	


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define N    15
//#define black "黑"
//#define white "白"
//char time1[128];
//
//
//int chessboard[N + 1][N + 1] = { 0 };
//
//int whoseTurn = 0;
//
//void sleep(long wait);
//void initGame(void);
//void printChessboard(void);
//void playChess(void);
//int judge(int, int);
//
//int main(void)
//{
//	initGame();
//
//	while (1)
//	{
//		whoseTurn++;
//
//		playChess();
//		
//	}
//	
//	return 0;	
//}
//
//void initGame(void)
//{
//	int i = 0;
//	char c;
////	_strtime_s(time1, 128);
//	const time_t t = time(NULL);
//	int year = t / 31557600+1970;//函数返回值为从1970年1月1日起经过的秒数
//	int hour = t / 3600 % 12;//得到结果为西方时间，需要加上8个小时
//
//	while (1)
//	{
//		_strtime_s(time1, 128);
//		printf("\n载入时间：     %d %s   \t", year,time1);
//		
//		if (hour > 6 && hour < 11)printf("早上好！");
//		else if (hour >= 11 && hour <= 13)printf("中午好！");
//		else if (hour > 13 && hour < 19)printf("下午好！");
//		else printf("晚上好！");
//		printf("\n ");
//		for (i = 0; i < 10; i++)
//			printf("——");
//
//		printf("\n");
//		printf("|");
//		for (i = 0; i < 4; i++)
//			printf("    ");
//		printf("  WELCOME");
//		for (i = 0; i < 5; i++)
//			printf("   ");
//		printf("|");
//
//		printf("\n");
//		printf("|");
//		for (i = 0; i < 10; i++)
//			printf("    ");
//		printf("|");
//
//		printf("\n");
//		printf("|");
//		for (i = 0; i < 4; i++)
//			printf("    ");
//		printf("  五子棋 ");
//		for (i = 0; i < 5; i++)
//			printf("   ");
//		printf("|");
//
//		printf("\n ");
//		for (i = 0; i < 10; i++)
//			printf("——");
//
//
//
//
//
//		printf("\n\t\t输入y开始游戏:");
//
//		c = getchar();
//		if (c != 'y'  && c != 'Y')
//			//exit(0);
//			break;
//	}
//	system("cls");
//	printChessboard();
//}
//
//void printChessboard(void)
//{
//	int i, j;
//
//	for (i = 0; i <= N; i++)
//	{
//		for (j = 0; j <= N; j++)
//		{
//			if (i == 0 && j == 0)
//				printf("   ");
//			else if (i==0)
//				printf("%3d", j);
//			else if (j == 0)
//				printf("%3d", i);
//			else if (chessboard[i][j] == 1)
//				printf(" ○");
//			else if (chessboard[i][j] == 2)
//				printf(" ●");
//			else
//				printf("  *");
//		}
//		printf("\n");
//	}
//}
//
//void playChess(void)
//{
//	int i, j, winner;
//	
//	if (whoseTurn % 2 ==1 )
//		printf("轮到%s棋下子,请输入位置坐标（坐标按空格或回车隔开）：",white);
//	else
//		printf("轮到%s棋下子,请输入位置坐标（坐标按空格或回车隔开）：", black);
//
//		scanf_s("%d %d", &i, &j);
//
//		while (i < 1 || i>15 || j < 1 || j>15 || chessboard[i][j] != 0)//判断位置是否允许落子
//		{
//			printf("该坐标越界或已有棋子，请重新输入落子坐标：");
//			scanf_s("%d %d", &i, &j);
//		}
//
//		chessboard[i][j] = 2 - whoseTurn % 2;	
//
//	system("cls");
//	printChessboard();
//
//	if (judge(i, j))
//	{
//		if ( whoseTurn % 2== 1)
//		{
//			printf("白子获胜！\n");
//			system("pause");
//			exit(0);
//		}
//		else
//		{
//			printf("黑子获胜！\n");
//			system("pause");
//			exit(0);
//		}
//	}
//}
//
////判断是否五子连珠
//int judge(int x, int y)
//{
//	int i, j;
//	int t = 2 - whoseTurn % 2;//判断最后下子的是白子还是黑子
//
//	for (i = x - 4, j = y; i <= x; i++)//		‘——’五子连珠
//	{
//		if (i >= 1 && i <= N - 4 && t == chessboard[i][j] && t == chessboard[i + 1][j] && t == chessboard[i + 2][j] && t == chessboard[i + 3][j] && t == chessboard[i + 4][j])
//			return 1;
//	}
//	for (i = x, j = y - 4; j <= y; j++)//		‘|’五子连珠
//	{
//		if (j >= 1 && j <= N - 4 && t == chessboard[i][j] && t == chessboard[i][j + 1] && t == chessboard[i][j + 1] && t == chessboard[i][j + 3] && t == chessboard[i][j + 4])
//			return 1;
//	}
//	for (i = x - 4, j = y - 4; i <= x, j <= y; i++, j++)//		‘/’五子连珠
//	{
//		if (i >= 1 && i <= N - 4 && j >= 1 && j <= N - 4 && t == chessboard[i][j] && t == chessboard[i + 1][j + 1] && t == chessboard[i + 2][j + 2] && t == chessboard[i + 3][j + 3] && t == chessboard[i + 4][j + 4])
//			return 1;
//	}
//	for (i = x + 4, j = y - 4; i >= 1, j <= y; i--, j++)//		‘\’五子连珠
//	{
//		if (i >= 1 && i <= N - 4 && j >= 1 && j <= N - 4 && t == chessboard[i][j] && t == chessboard[i - 1][j + 1] && t == chessboard[i - 2][j + 2] && t == chessboard[i - 3][j + 3] && t == chessboard[i - 4][j + 4])
//			return 1;
//	}
//
//	return 0;
//}
//
//void sleep(long wait)
//{
//	long goal;
//	goal = wait + clock();
//	while (goal > clock());
//}





////输出一串字符串中的最长单词,同样长度打印出现的第一个
//#include<stdio.h>
//int main()
//{
//	int i = 0,input=0,state=0,letter=0,max=0,p;
//	char s[200];
//	//char s[] = "This is   a  books.";
//	//input	   0111101100010011110 
//	//state    0111101100010011110
//	gets(s);
//	int judge_type(int c);
//
//	while (s[i]!='\0')
//	{
//		input = judge_type(s[i]);
//		if (input == 1 && state == 1) 
//			letter++;
//		if (input == 0 && state == 1)
//		{
//			if (max < ++letter)
//			{
//				max = letter;
//				p = i - letter;
//			}
//			letter = 0;
//		}
//		state = input;
//		i++;
//	}
//	while (s[p] >= 'a'&&s[p] <= 'z' || s[p] >= 'A'&&s[p] <= 'Z')
//	{
//		printf("%c", s[p]);
//		p++;
//	}
//	system("pause");
//}
//
//int judge_type(int c)
//{
//	int f = 0;
//	if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
//		f = 1;
//	return(f);
//}

////输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换
//#include<stdio.h>
//int main()
//{
//	int number[10];
//	void get_10number(int *number);
//	void find_swap(int *number);
//	void output_10number(int *number);
//	
//	get_10number(number); 
//	find_swap(number);
//	output_10number(number);
//
//	system("pause");
//}
//
//void get_10number(int *number)
//{
//	int i;
//	printf("\nEnter 10 number:\n");
//	for (i = 0; i < 10; i++) 
//	{
//		scanf_s("%d", &number[i]);
//	}
//}
//
//void find_swap(int *number)
//{
//	int t,i,*max, *min;
//	max = min = number;
//
//	/*
//	指针指向问题，数值变换，指针指向未改变，
//	当第一个数为max时，交换后max指向第一个数变为最小值
//	*/
//	//方案1
//	for (i = 1; i < 10; i++)	
//		if (number[i] < *min)  min = number+i;  
//	
//	t = *min;*min = number[0];number[0] = t;//swap min
//
//	for (i = 1; i < 10; i++)	
//		if (number[i] > *max)  max = number + i;
//	
//	t = *max;*max = number[9];number[9] = t;//swap max
//
//
//	////方案2
//	//for (i = 1; i < 10; i++)
//	//{
//	//	if (number[i] > *max)  max = number+i;  
//	//	if (number[i] < *min)  min = number + i;
//	//}
//	//t = *min;
//	//*min = number[0];
//	//number[0] = t;
//
//	//if (max == number)max = min;
//
//	//t = *max;
//	//*max = number[9];
//	//number[9] = t;
//}
//void output_10number(int *number) 
//{
//	int i;
//	for (i = 0; i < 10; i++)
//		printf("%d ", number[i]);	
//}



////口袋中有若干 红、黄、蓝、白、黑五种颜色的球，
////每次从口袋中取出3个球，编程打印出得到3种不同颜色的球的所有可能取法。
//#include<stdio.h>
//void main()
//{
//	enum color { red, yellow, blue, white, black };
//	enum color i, j, k, pri;
//	int n, loop;
//	n = 0;
//	for (i = red; i <= black; i++)
//		for (j = i+1; j <= black; j++)
//			if (i != j)
//			{
//				for (k = j+1; k <= black; k++)
//					if ((k != i) && (k != j))
//					{
//						n = n + 1;
//						printf("%d.\t", n);
//						for (loop = 1; loop <= 3; loop++)
//						{
//							switch (loop)
//							{
//							case 1:pri = i; break;
//							case 2:pri = j; break;
//							case 3:pri = k; break;
//							default:break;
//							}
//							switch (pri)
//							{
//							case red:printf("red\t"); break;
//							case yellow:printf("yellow\t"); break;
//							case blue:printf("blue\t"); break;
//							case white:printf("white\t"); break;
//							case black:printf("black\t"); break;
//							default:break;
//							}
//						}
//						printf("\n");
//					}
//			}
//	system("pause");
//}








////时间界面
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void main(void)
//{
//	void sleep(long wait);
//	int flag = 1;
//	char time1[128];
//	_strtime_s(time1,128);
//
//
//	const time_t t = time(NULL); 
//	int nian = t / 31557600;
//	int hour = t / 3600 % 12 + 8;
//	
//	
//
//	do
//	{
//		
//
//	//	printf("Hello!\n");
//		_strtime_s(time1, 128);
//		printf(" %d ", nian + 1970);
//		printf("%s\n\t", time1);
//		if (hour > 6 && hour < 11)printf("早上好！");
//		else if (hour >= 11 && hour <= 13)printf("中午好！");
//		else if (hour > 13 && hour < 19)printf("下午好！");
//		else printf("晚上好！");
//		sleep(1 * 1000);
//		system("cls");
//	} while (flag);
//
//}
//
//void sleep(long wait)
//{
//	long goal;
//	goal = wait + clock();
//	while (goal > clock());
//}


//#include<stdio.h>
//#include<time.h>
// int main()
//	{
//	  const time_t t = time(NULL); // time_t t = 0; time(&t);也可以
//	  int nian = t / 31557600;
//	  int xiaoshi = t / 3600;
//	  printf(" %d年 %d时%", nian+1970,xiaoshi%12+8);	
//	  system("pause");
//	 }




////龟兔赛跑
//#include<stdio.h>
//#include<time.h>
//void main()
//{
//	srand((unsigned)time(NULL));
//	int sum1=0, sum2=0, i,tmp1,tmp2;
//	for (i = 0; i < 10000; i++)
//	{
//		tmp1 = rand() % 100;
//		if (tmp1 >= 0 && tmp1 < 50)sum1 += 3;
//		if (tmp1 >= 50 && tmp1 < 70)sum1 -= 6;
//		if (tmp1 >= 70 && tmp1 < 100)sum1 += 1;	
//	}
//	for (i = 0; i < 10000; i++)
//	{
//		tmp2 = rand() % 100;
//		if (tmp2 >= 0 && tmp2 < 20)sum2 += 0;
//		if (tmp2 >= 20 && tmp2 < 40)sum2 -= 9;
//		if (tmp2 >= 40 && tmp2 < 50)sum2 += 15;
//		if (tmp2 >= 50 && tmp2 < 80)sum2 += 3;
//		if (tmp2 >= 80 && tmp2 < 100)sum2 -= 2;
//	}
//	printf("乌龟%d步,兔子%d步", sum1, sum2);
//	system("pause");
//}
//
//
//#include<stdio.h>
//#include<math.h>
//int prime(int x);
//void ComputeSum(int *p, int n);
//
//void main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	ComputeSum(a, 10);
//	system("pause");
//
//}
////判断x是否为素数，是返回1，不是返回0
//int prime(int x)
//{
//	int i, t = 1;
//	if (x == 1)return(0);
//	for (i = 2; i <= sqrt(x); i++)
//		if (x % i == 0)
//			t = 0;
//	return(t);
//}
//void ComputeSum(int *p, int n)
//{
//	int sum = 0, i;
//	for (i = 0; i < 10; i++)
//		if (prime(*(p+i)))sum += *(p+i);
//
//	printf("sum=%d", sum);
//}


//#include<stdio.h>
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	char * find;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		find = strchr(st, '\n');
//		if (find)
//			* find = '\0';
//		else
//			while (getchar()!='\n')
//			{
//				continue;
//			}
//		return ret_val;
//	}
//}



////复合字面量
//#include<stdio.h>
//#define MAXTITL 41
//#define MAXAUTL 31
//struct book
//{
//	char title[MAXAUTL];
//	char author[MAXAUTL];
//	float value;
//};
//int main()
//{
//	struct book readfirst;
//	int score;
//	puts("Enter test score:");
//	scanf("%d", &score);
//	if (score >= 84)
//		readfirst = (struct book) {
//		"Crime and Punishment",
//			"Fyodor Dostoyevsky",
//			11.25};
//	else readfirst = (struct book) {
//		"Mr.Bouncy's Nice Hat",
//			"Fred Winsome",
//			5.99};
//	puts("Your assigned reading:");
//	printf("%s by %s:$%.2f\n", readfirst.title, readfirst.author, readfirst.value);
//	system("pause");
//		return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main(int argc, char *argv[])
//{
//	int ch;
//	FILE*fp;
//	unsigned long count = 0;
//	if (argc != 2) 
//	{
//		printf("Usage: %s filename\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//	if ((fp = fopen(argv[1], "r")) == NULL)
//	{
//		printf("Can't open %s\n", argv[1]);
//		exit(EXIT_FAILURE);
//	}
//	while ((ch = getc(fp)) != EOF)
//	{
//		putc(ch, stdout);
//		count++;
//	}
//	fclose(fp);
//	printf("File %s has %lu characters\n", argv[1], count);
//	return 0;
//	
//}




//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(void)
//{
//	////write file
//	//FILE *fp=fopen("data.txt", "w");
//	////fputc('A', fp);
//	//if (fp != NULL)
//	//{
//	//	fputs("Hello World", fp);
//	//	fclose(fp);
//	//}
//	//else
//	//	puts("Can't save file");
//	//puts("End");
//	//FILE *fp = fopen("data.txt", "r");
//	//if (fp!=NULL) 
//	//{
//	//	//char ch = fgetc(fp);
//	//	//printf("%c\n", ch);
//
//
//	//	//char buf[100];
//	//	//fgets(buf, 6, fp);
//	//	//puts(buf);
//	//	//fclose(fp);
//	//	char buf[100];
//	//	memset(buf, 0, 100);
//	//	for (int i = 0; i < 100; i++)
//	//	{
//	//		char ch = fgetc(fp);
//	//		if (ch != EOF)
//	//		{
//	//			buf[i] = ch;
//	//		}
//	//		else break;
//	//	}
//	//	printf("%s\n",buf);
//	//		fclose(fp);
//	//}
//
//	//else
//	//	puts("Can't read file");
//	//
//
//
//	////write
//	
//	//FILE *fp = fopen("data.txt", "w");
//	//if (fp)
//	//{
//	//	for (int i = 0; i < 100; i++)
//	//		fprintf(fp, "Item %d\n", i);
//	//}
//	//else
//	//	printf("Can't not write to file");
//
//
//
//	//read
//	FILE *fp = fopen("data.txt", "r");
//	if (fp)
//	{
//		int i,a;
//		char s[10];
//		for(i=0;i<100;i++)
//		{
//			fscanf(fp, "%s %d\n", &s,&a);
//			printf("%s %d\n", s,a);
//			//printf(" %d\n", a);
//		}
//		fclose(fp);
//	}
//	else
//		printf("Can't read to file");
//	system("pause");
//
//	return EXIT_SUCCESS;
//}





//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAXTITL 40
//#define MAXAUTL 40
//#define MAXBKS 10
//char * s_gets(char *st, int n);
//struct book
//{
//	char title[MAXTITL];
//	char author[MAXAUTL];
//	float value;
//};
//int main(void)
//{
//	struct book library[MAXBKS];
//	int count = 0;
//	int index, filecount;
//	FILE * pbooks;
//	int size = sizeof(struct book);
//	if ((pbooks = fopen("book.dat", "a+b")) == NULL)
//	{
//		fputs("Can't open book.dat file\n", stderr);
//		exit(1);
//	}
//	rewind(pbooks);
//	while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
//	{
//		if (count == 0)
//			puts("Current contents of book.dat:");
//		printf("%s by %s:$%.2f\n", library[count].title, library[count].author, library[count].value);
//		count++;
//	}
//	filecount = count;
//	if (count == MAXBKS)
//	{
//		fputs("The book.dat file is full.", stderr);
//		exit(2);
//	}
//	puts("Please add new book titles.");
//	puts("Press [enter] at the start of a line to stop.");
//	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
//	{
//		puts("Now enter the author:");
//		s_gets(library[count].author, MAXAUTL);
//		puts("Now enter the value:");
//		scanf("%f", &library[count++].value);
//		while (getchar() != '\n')
//			continue;
//		if (count < MAXBKS)
//			puts("Enter the next title.");
//	}
//	if (count > 0)
//	{
//		puts("Here is the list of your books:");
//		for (index = 0; index < count; index++)
//			printf("%s by %s:$%.2f\n", library[index].title, library[index].author, library[index].value);
//		fwrite(&library[filecount], size, count - filecount, pbooks);
//	}
//	else
//		puts("No books? Too bad.\n");
//	puts("Bye.\n");
//	fclose(pbooks);
//	system("pause");
//	return 0;
//	
//}
//
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	char * find;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		find = strchr(st, '\n');
//		if (find)
//			* find = '\0';
//		else
//			while (getchar()!='\n')
//			{
//				continue;
//			}
//		return ret_val;
//	}
//}






//#include<stdlib.h>
//#include<stdio.h>
//#define filename "file.txt"
//void main(void)
//{
//	FILE * fp;
//	char ch,s;//, filename[10];
//	//puts("Enter filename：");
//	//gets(filename);
//	
//	if ((fp = fopen(filename, "w")) == NULL)
//	{
//		puts("can't open the file\n");
//		exit(1);
//	}
//	puts("Enter string finishing with '#':");
//	while ((ch = getchar()) != '#')
//	{
//		fputc(ch, fp);
//		putchar(ch);
//	}
//
//	fclose(fp);
//	system("pause");
//}



//#include<stdio.h>
//#include<stdlib.h>
//void main(void)
//{
//	FILE * in, *out;
//	char ch, infile[10], outfile[10];
//	printf("Enter the infile name:\n");
//	scanf("%s", infile);
//	printf("Enter the outfile name:\n");
//	scanf("%s", outfile);
//	if ((in = fopen(infile, "r")) == NULL)
//	{
//		printf("can't open infile\n");
//		exit(1);
//	}
//	if ((out = fopen(outfile, "w")) == NULL)
//	{
//		printf("can't open outfile\n");
//		exit(2);
//	}
//	while (!feof(in))
//		fputc(fgetc(in), out);
//	fclose(in);
//	fclose(out);
//	system("pause");
//}


//结构体与文件
//#include<stdio.h>
//#include<stdlib.h>
//#define SIZE 4
//struct student_type
//{
//	char name[10];
//	int num;
//	int age;
//	char addr[15];
//};
//void save(void);
//void read(void);
//void output(void);
//struct student_type stu[SIZE];
//struct student_type stu1[SIZE];
//void main(void)
//{
//	int i;
//	for (i = 0; i < SIZE; i++)
//		scanf("%s %d %d %s,", stu[i].name, &stu[i].num, &stu[i].age, stu[i].addr);
//	save();
//	read();
//	output();
//}
//void save(void)
//{
//	FILE *fp;
//	int i,count=1;
//			if ((fp = fopen("in.txt", "wb")) == NULL)
//			{
//				printf("can't open file\n");
//				return;
//			}
//			for (i = 0; i < SIZE; i++)
//				if (fwrite(&stu[i], sizeof(struct student_type), count, fp) != count)
//					printf("file write error\n");
//	fclose(fp);
//}
//void read(void) 
//{
//	FILE *fp;
//	int i, count = 1;
//	if ((fp = fopen("in.txt", "rb")) == NULL)
//	{
//		printf("can't open file\n");
//		return;
//	}
//	for (i = 0; i < SIZE; i++)
//		if (fread(&stu1[i], sizeof(struct student_type), count, fp) != count)
//			printf("file read error\n");
//	fclose(fp);
//}
//void output(void)
//{
//	int i;
//	for (i = 0; i < SIZE; i++)
//		printf("%s %d %d %s\n", stu1[i].name, stu1[i].num, stu1[i].age, stu1[i].addr);
//	system("pause");
//}


//#include<stdio.h>
//void main(void)
//{
//	//指向二维数组的指针
//	int *p;
//	int a[2][2] = {1,2,3,4};
//	p = (*(a + 1) + 1);
//	printf("%d", *p);
//	int(*pz)[2];
//	pz = a;
//	printf("pz[0][0]=%d", pz[0][0]);
//	system("pause"); //== return0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//void main(void)
//{
//	//fputs
//	FILE * fp;
//	char st[40];
//	if((fp=fopen("output.txt","w"))==NULL)
//	{ 
//		printf("Can't open file!");
//		exit(1);
//	}
//	printf("Input a string:\n");
//	//scanf("%s", st);
//	gets(st);
//	fputs(st, fp);
//	fclose(fp);
//
//	//fgets
//	char str[40];
//	if ((fp = fopen("output.txt", "r")) == NULL)
//	{
//		printf("Can't open file!");
//		exit(1);
//	}
//	fgets(str, 40, fp);
//	printf("%s\n", str);
//	fclose(fp);
//	system("pause");
//}


////rewind()	putc()	getc()
//#include<stdio.h>
//void main(void)
//{
//	FILE *fp1, *fp2;
//	fp1 = fopen("file1.c", "r");
//	fp2 = fopen("file2.c", "w");
//	while (!feof(fp1))putchar(getc(fp1));
//	rewind(fp1);//回到文件头
//	while (!feof(fp1))
//		putc(getc(fp1), fp2);
//	fclose(fp1);
//	fclose(fp2);
//	system("pause");
//}


////从键盘输入一个字符串，小写换大写，存到“test”文件中
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void main(void)
//{
//	int i;
//	char s[50],s1[50];
//	puts("Enter a string:");
//	gets(s);
//	for (i = 0; i < strlen(s); i++)
//	{
//		if (s[i] >= 'a'&&s[i] <= 'z')
//			s[i] -= 32;
//	}
//	//puts(s);
//	//write
//	FILE *fp;
//	if ((fp = fopen("test", "w")) == NULL)
//	{
//		puts("can't open file!");
//		exit(1);
//	}
//	fprintf(fp, "%s", s);
//	fclose(fp);
//
//
//	//read
//	if ((fp = fopen("test", "r")) == NULL)
//	{
//		puts("can't open file!");
//		exit(1);
//	}
//	fscanf(fp, "%s", &s1);
//	fclose(fp);
//
//	puts(s1);
//	system("pause");
//}



////文件A,B,里面存有一行字母,将信息合并，然后按字母顺序排序，输出到C；
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void combine(char *s1, char *s2, char *s3);
//void sort(char *a, int N);
//
//void main(void)
//{
//	char a[50], b[50],c[200]="\0";	
//	FILE *fp;
//
//
//	//read A
//	if ((fp = fopen("A", "r")) == NULL)
//	{
//		puts("can't open file!");
//		exit(1);
//	}
//	fgets(a, 50, fp);
//	fclose(fp);
//	puts(a);
//
//	//read B
//	if ((fp = fopen("B", "r")) == NULL)
//	{
//		puts("can't open file!");
//		exit(1);
//	}
//	fgets(b, 50, fp);
//	//fread(b, 50, 1, fp);//长度未知，烫烫烫烫烫
//	fclose(fp);
//	puts(b);
//	combine(a, b, c);
//	//puts(c);
//	sort(c, strlen(c));
//	//puts(c);
//
//	//write
//	if ((fp = fopen("C", "w+")) == NULL)
//	{
//		puts("can't open file!");
//		exit(1);
//	}
//	fwrite(c, strlen(c), 1, fp);//fputs(c, fp);也行
//	fclose(fp);
//	system("pause");
//}
//void combine(char *s1, char *s2, char *s3)
//{
//	strcat(s3, s1);
//	strcat(s3, s2);
//}
//
//void sort(char *a,int N)
//{
//	int i,j;
//	char t;
//	for (i = 0; i < N; i++)
//		{
//			for (j = i + 1; j < N; j++)
//			{
//				if (a[j] < a[i])
//				{
//					t = a[i];
//					a[i] = a[j];
//					a[j] = t;
//				}
//			}
//		}
//}



////strcat函数注意事项
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void main(void)
//{
//	char s1[50] = "ABCDEFG", s2[50] = "HIJKLMNOPQ";
//	char s3[101] = "\0";//将s3初始化为\0,追加时自动被忽略，未初始化的s3填满了“烫烫烫烫烫”
//
//	strcat(s3, s1);
//	puts(s3);
//	strcat(s3, s2);
//	puts(s3);
//	system("pause");
//}

////狼找兔子
//#include <stdio.h>
//void main()
//{
//	int a=0,i,cave[10],tmp=2;
//	for (i = 0; i < 10; i++)
//		//cave[i] = i+1;
//		*(cave + i) = -~i;
//	/*for (i = 0; i < 10; i++)printf("%d ", cave[i]);
//	puts("\n");*/
//
//	//0 + 2
//	//2 + 3
//	//5 + 4
//	//9 + 5
//	//temp从2开始累加，直接为第一个洞cave[0]赋值0
//
//	//cave[0] = 0;
//	*cave = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a = (a + tmp) % 10;
//		//cave[a] = 0;
//		*(cave + a) = 0;
//		tmp++;
//	}
//	printf("安全的洞：");
//	for (i = 0; i < 10; i++)
//		//if(cave[i]!=0)
//		if(*(cave+i)!=0)
//			//printf("%d ", cave[i]);
//			printf("%d ", *(cave+i));
//	system("pause");
//}


////条件查找
//#include<stdio.h>
//#include<string.h>
//#define N 3
//
//struct Student
//{
//	char name[20];
//	int num;
//	int age;
//	char sex;
//};
//void searchAndDisplay(struct Student *ps, int kind);
//void main()
//{
//	int kind;
//	struct Student stu[N] = { {"张三",1001,19,'M'},{"li4",1002,20,'M'},"王five",1003,21,'M' };
//	//printf("%c", stu[0].sex);
//	puts("Enter what kind you find(1,2,3):");
//	scanf("%d", &kind);
//	searchAndDisplay(stu, kind);
//	system("pause");
//}
//void searchAndDisplay(struct Student *ps, int kind)
//{
//	char name_t[20];
//	int num_t,age_t;
//	int i;
//	switch (kind)
//	{
//	case 1:
//		printf("Find by name:");
//		gets(name_t);
//		for (i = 0; i < N; i++)
//		{
//			if (!strcmp(ps[i].name,name_t))
//			{
//				puts("Find!");
//				printf("name:%s,number:%d,age:%d,sex:%c", ps[i].name, ps[i].num, ps[i].age, ps[i].sex);
//			}
//		}
//		break;
//
//	case 2:
//		printf("Find by number:");
//		scanf("%d", &num_t);
//		for (i = 0; i < N; i++)
//		{
//			if (ps[i].num==num_t)
//			{
//				puts("Find!");
//				printf("name:%s,number:%d,age:%d,sex:%c", ps[i].name, ps[i].num, ps[i].age, ps[i].sex);
//			}
//		}
//
//	case 3:
//		printf("Find by age:");
//		scanf("%d", &age_t);
//		for (i = 0; i < N; i++)
//		{
//			if (ps[i].age == age_t)
//			{
//				puts("Find!");
//				printf("name:%s,number:%d,age:%d,sex:%c", ps[i].name, ps[i].num, ps[i].age, ps[i].sex);
//			}
//		}
//		break;
//	default:
//		break;
//	}
//}


////结构体，计算总分，平均分，统计不及格人数，按总成绩排序，输出不及格学生的信息,
//#include<stdio.h>
//#include<string.h>
//#define N 3
//int i,j;
//
//struct Student
//{
//	char name[20];
//	long int number;
//	char sex;
//	float scores[3];
//	float score_sum;
//	float score_average;
//};
//
//void calculate_findfail(struct Student *p, int n);
//
//
//void main(void){
//	struct Student stu[N+1] = { {"Zhang",1232016011,'M',70,71,59},{"Li",1232016001,'W',80,58,55},{"Liu",1232016150,'W',90,80,99} };
//	puts("All students information:");
//	/*for(i=0;i<N;i++)
//	printf("name:%s \t number:%ld \tsex:%c\tscores(1,2,3):%.2f\t%.2f\t%.2f\n", stu[i].name, stu[i].number, stu[i].sex, stu[i].scores[0], stu[i].scores[1], stu[i].scores[2]);
//*/
//	calculate_findfail(stu, N);
//	system("pause");
//}
//
//void calculate_findfail(struct Student *p, int n)
//{
//	int tmp[N],k=0;
//	for (i = 0; i < n; i++)
//	{
//		p[i].score_sum = p[i].scores[0] + p[i].scores[1] + p[i].scores[2];
//		p[i].score_average = p[i].score_sum / 3;
//	//	printf("%.2f  %.2f\n", p[i].score_sum, p[i].score_average);
//		if (p[i].scores[0] < 60 || p[i].scores[1] < 60 || p[i].scores[2]<60)
//		{
//			tmp[k] = i;
//			k++;
//			//printf("%s", p[i].name);
//		}
//	}
//	puts("\nfail exam students:");
//	for (i = 0; i < k; i++)
//	{
//		//printf("%.2f  %.2f\n", p[tmp[i]].score_sum, p[tmp[i]].score_average);
//		printf("name:%s \tnumber:%ld sex:%c scores(1,2,3):%.2f %.2f %.2f  score_sum:%.2f score_average:%.2f\n", p[tmp[i]].name, p[tmp[i]].number, p[tmp[i]].sex, p[tmp[i]].scores[0], p[tmp[i]].scores[1], p[tmp[i]].scores[2], p[tmp[i]].score_sum, p[tmp[i]].score_average);
//	}
//	puts("\nbefore sort:");
//	for (i = 0; i<N; i++)
//		printf("name:%s \tnumber:%ld\tsex:%c\tscores:%.2f\t%.2f\t%.2f score_sum:%.2fscore_average:%.2f\n", p[i].name, p[i].number, p[i].sex, p[i].scores[0], p[i].scores[1], p[i].scores[2], p[i].score_sum, p[i].score_average);
//
//	for (i = 0; i < n; i++)
//		for (j = i + 1; j < n; j++)
//		{
//			if(p[i].score_sum<p[j].score_sum)
//			{
//				p[n] = p[i];
//				p[i] = p[j];
//				p[j] = p[n];
//			}
//	}
//	puts("");
//	puts("after sort:");
//	for (i = 0; i<N; i++)
//		printf("name:%s \tnumber:%ld\tsex:%c\tscores:%.2f\t%.2f\t%.2f score_sum:%.2fscore_average:%.2f\n", p[i].name, p[i].number, p[i].sex, p[i].scores[0], p[i].scores[1], p[i].scores[2],p[i].score_sum,p[i].score_average);
//
//
//}




////1.编写一个程序，其功能是删除字符串s中所出现的与变量c相同的字符。
//#include<stdio.h>
//#include<string.h>
//void main()
//{
//	char s[50] = "uhyjksgksyhgjyyyyguk56y7812y%y*……&aayaa";
//	char ch = 'y';
//	int i,j;
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		while (s[i] == ch)
//		{
//			for(j=i;s[j]!='\0';j++)
//			{ 
//				s[j] = s[j + 1];
//			}
//		}
//	}
//	puts(s);
//	system("pause");
//}
////2.e可以用级数1 + 1 / 1!+ 1 / 2!+ ⋯ + 1 / n!来近似计算。
////本题要求对给定的非负整数n，求该级数的前n项和。
//#include<stdio.h>
//#include<math.h>
//float _1_fac(int n);
//
//void main()
//{
//	int n = 6;
//	float sum=0;
//	for (n = 6; n >= 0; n--)
//		sum += _1_fac(n);
//	printf("%f", sum);
//
//	system("pause");
//}
//float _1_fac(int n)
//{
//	//int i;
//	if (n == 0)return 1;
//	int sum = 1;
//	for (; n > 0; n--)
//		sum *= n;
//	
//	//printf("%d", sum);
//	return(1. / sum);
//}
////三色球问题。若一个口袋中放有12个球，其中有3个红色的，3个白色的，6个黑色的，
////从中任取8个球，问共有多少种不同的颜色搭配？
//#include<stdio.h>
//#include<time.h>
//void main()
//{
//	//srand((unsigned)time(NULL));
//	const int red=3, white=3, black=6;
//	int			i,		j,		k,n=0;
//	
//	//i=rand() % red+1;
//	//j= rand() % white + 1;
//	for (i = 0; i <= red; i++)
//		for (j = 0; j <= black; j++)
//		{
//			if (i + j <= 8)
//			{
//				k = 8 - i - j;
//				//printf("red %d whit %d black %d\n", i, j, k);
//				n++;
//			}
//			
//		}
//	printf("%d", n);
//	system("pause");
//}
////已知函数e^x可以展开为幂级数1 + x + x^2 / 2!+ x^3 / 3!+ ⋯ + x^k / k!+ ⋯。
////现给定一个实数x，要求利用此幂级数部分和求e^x的近似值，
////求和一直继续到最后一项的绝对值小于0.00001。
//#include<stdio.h>
//#include<math.h>
//
//double fac(int n);
//double sc(double x, double k);
//void main(void)
//{
//	double t=1,sum=0;
//	int i,k;
//	printf("calculate e^k , enter the value of k:");
//	scanf("%d", &k);
//	for (i = 0; t>=0.00001; i++)
//	{
//		t = sc(k, i);
//		sum += t;
//		//printf("%lf\n", sum);
//
//	}
//	printf("%.5lf",sum);
//	system("pause");
//}
//
////x^k/k!
//double sc(double x,double k)
//{
//	if (x == 0)return 1;
//	return (pow(x, k) / fac(k));
//}
//
//double fac(int n)
//{
//	double f=1;
//	if (n == 0)return 1;
//	for (; n > 0; n--)
//		f *= n;
//	return f;
//}
////1.给定n本书的名称和定价，本题要求编写程序，
////查找并输出其中定价最高和最低的书的名称和定价。
//#include<stdio.h>
//#include<string.h>
//void main()
//{
//	char s[3][50] = { "Programming in C","Programming in VB","Programming in Delphi" };
//	//puts(s[2]);
//	float a[3] = { 21.5,18.5,25.0 };
//	int i,t_h,t_l;
//	t_h = t_l = 0;
//	
//	for (i = 1; i < 3; i++)
//	{
//		//printf("a[%f]=%f", a[i]);
//		if (a[i] > a[t_h])t_h = i;
//		if (a[i] < a[t_l])t_l = i;
//	}
//	//printf("high=%d,low=%d", t_h, t_l);
//	printf("highest:\n%f,%s", a[t_h], s[t_h]);
//	printf("lowest:\n%f,%s", a[t_l], s[t_l]);
//	system("pause");
//}
////给定两个均不超过9的正整数a和n，
////要求编写程序求a + aa + aaa++⋯ + aa⋯a（n个a）之和
//#include<stdio.h>
//#define A 2
//#define N 10
//void main(void)
//{
//	int i,a,an, j,sum;
//	
//	for (i = 1; i < N; i++)
//	{
//		sum =an = a = A;
//		for (j = 0; j < i - 1; j++)
//		{
//			an = an * 10 + a;
//			sum += an;
//		}
//		printf("sum%d=%d\n", i,sum);
//	}
//	system("pause");
//}
////10进制转2~16进制
//#include<stdio.h>
//#define N 20
//void main(void)
//{
//	int digit,i,t,num,sys,a[N];
//	printf("Enter the number you want to transport:");
//	scanf("%d", &num);
//	printf("Enter the system you want transport to:");
//	scanf("%d", &sys);
//
//		digit = -1;//++digit,start form 0
//		while(num!=0)
//		{
//			t = num % sys;
//			a[++digit] = t;
//			num /= sys;
//		}
//		
//		for (i = digit; i >= 0; i--)
//		{
//				
//			if (sys == 16 && a[i] > 9)
//				printf("%c ", a[i] + 55);//ASCii
//			else 
//				printf("%d ", a[i]);
//		}
//	
//	system("pause");
//}
////编写函数void factor(int x, int *p, int *n)，
////其功能是求解整数x的因子，将这些因子存放到p指向的数组中，
////并将因子的个数存储到n指向的变量中。
////提示：整数24的因子为2，4，6，8，12，24。
//#include<stdio.h>
//void factor(int x, int *p, int *n);
//void main(void)
//{
//	int i,f[20], num;
//	factor(24,f, &num);
//	printf("%d\n", num);
//	for (i = 0; i < num; i++)
//		printf("%d ", f[i]);
//
//	system("pause");
//}
//void factor(int x, int *p, int *n)
//{
//	int i,num;
//	num = 0;
//	for (i = 1; i <= x; i++)	
//		if (x%i == 0)
//		{
//			*(p + num) = i;
//			num++;
//		}
//	*n = num;
//}
////编写函数void print(int n, char ch)，其功能是输出n行由字符ch所构成的图形。
////例如print(3, ’#’)和print(4, ’*’)得到的输出图形分别为
//#include<stdio.h>
//void print(int n, char ch);
//void main(void)
//{
//	print(3, '#');
//	print(4, '*');
//	system("pause");
//}
//void print(int n, char ch)
//{
//			//2*n-1
//
//		//n-1 ch*1 n-1
//		//n-2 ch*3 n-2
//		//n-3 ch*5 n-3
//		//n-4 ch*7 n-4
//	int i,j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n - i; j++) printf(" ");
//		for (j = 1; j <= i*2-1; j++)printf("%c", ch);
//		//for (j = 1; j <= n - i; j++) printf(" ");
//		puts("");//上面那条语句实际上并不需要，直接换行即可
//	}	
//}
////编写函数void getMaxAndMin(int *p, int res[2])，
////其功能是求解p所指向的二维数组中的最大偶数和最小奇数分别存放到res数组中。
//#include<stdio.h>
//void getMaxAndMin(int(*p)[3], int res[2]);
//void main(void)
//{
//	int(*p)[3];
//	int a[3][3] = { 11,52,13,4,2,67,7,48,9 }, res[2];
//	p = a;
//	//printf("%d %d %d", *(*(p + 2) + 2), *(*(p + 1)), *(*(p + 2)));
//	getMaxAndMin(p, res);
//	printf("max=%d min=%d", res[0], res[1]);
//	system("pause");
//}
//void getMaxAndMin(int (*p)[3], int res[2])
//{
//	int i, j;
//		//max, min;
//	//max = min = p[0][0];
//	res[0] = res[1] = p[0][0];
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//		{
//			if (p[i][j] % 2 == 0) 
//				if (p[i][j] > res[0])res[0] = p[i][j];
//			
//			if (p[i][j] % 2 != 0)
//				if (p[i][j] < res[1])res[1] = p[i][j];
//		}
//	//res[0] = max;
//	//res[1] = min;
//}
////编写函数void sort(char*s1, char *s2, char *s3)，
////其功能是将s1、s2和s3指向的三个字符串按照从小到大排序后输出。
//#include<stdio.h>
//#include<string.h>
//void sort(char *s1, char *s2, char *s3);
//void main(void)
//{
//	char s1[100] = "asgrjksdnj225rs1";
//	char s2[100] = "rgserhejksdnj2gr1";
//	char s3[100] = "esrtkjksdnjgsr21254";
//	sort(s1, s2, s3);
//	puts(s1);
//	puts(s2);
//	puts(s3);
//	system("pause");
//}
//void sort(char *s1, char *s2, char *s3)
//{
//	char t[200];
//	if (strcmp(s1, s2) > 0) 
//	{
//		strcpy(t, s1);
//		strcpy(s1, s2);
//		strcpy(s2, t);
//	}
//	if(strcmp(s1,s3)>0)
//	{
//		strcpy(t, s1);
//		strcpy(s1, s3);
//		strcpy(s3, t);
//	}
//	if (strcmp(s2, s3)>0)
//	{
//		strcpy(t, s2);
//		strcpy(s2, s3);
//		strcpy(s3, t);
//	}
//}
////编写程序输出奇数方阵
//#define N 15
//#include<stdio.h>
//void main(void)
//{
//	
//	//int *a = (int *)calloc(N*N, sizeof(int));
//	int a[N][N] = { 0 }, n, i, j, i_t, j_t;
//
//	i = 0;
//	j = N / 2;
//	a[i][j] = 1;
//	
//
//	for (n = 2; n <= N*N; n++)
//	{
//		i_t = i - 1;
//		j_t = j + 1;
//		if (i == 0)i_t = N - 1;
//		if (j == N - 1)j_t = 0;
//		if (a[i_t][j_t] != 0) { i_t = i + 1; j_t = j; }
//		i = i_t; j = j_t;
//		a[i][j] = n;
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//			printf("%d\t", a[i][j]);
//		puts("");
//	}
//	system("pause");
//}



//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define N 7
//int i,j;
//struct STUDENT
//{
//	char name[20];
//	int num;
//	float score[4];
//};
//
//void sort(struct STUDENT a[N]);
//void main(void)
//{
//	////write
//	//
//	//struct STUDENT stu[N] = {
//	//	{"wws",12301,67.5,78.9,88.0,99.2} ,
//	//	{"zzs",12302,89.7,45.6,78.8,85.7},
//	//	{"twm",12303,56.6,77.7,89.9,85.7},
//	//	{"lsz",12304,56.6,77.7,89.9,89.9},
//	//	{"rwc",12305,99.9,78.7,89.8,77.7},
//	//	{"fac",12306,44.4,55.5,100.0,66.6},
//	//	{"com",12307,66.6,66.6,66.6,66.6} 
//	//};
//	//FILE *fp;
//	//if ((fp = fopen("info.dat", "w+")) == NULL)
//	//	puts("Can't open file!");
//
//	//for (i = 0; i < N; i++)
//	//	if (fwrite(&stu[i], sizeof(struct STUDENT), 1, fp) != 1)
//	//		printf("write file error");
//
//
//	//read
//	struct STUDENT stu[N+1];
//	FILE *fp;
//	if ((fp = fopen("info.dat", "r")) == NULL)
//		puts("Can't open file!");
//
//	for (i = 0; i < N; i++)
//		if(fread(&stu[i], sizeof(struct STUDENT), 1, fp)!=1)
//			printf("read file error");
//
//		//fscanf(fp,"%s %d %.1f %.1f %.1f %.1f", &stu[i].name, &stu[i].num, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2], &stu[i].score[3]);
//	fclose(fp);
//
//
//
//	
//	for (i = 0; i < N; i++)
//		printf("%s %d %.1f %.1f %.1f %.1f\n", stu[i].name, stu[i].num, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].score[3]);
//	
//	sort(stu);
//	puts("after\n\n");
//	for (i = 0; i < N; i++)
//		printf("%s %d %.1f %.1f %.1f %.1f\n", stu[i].name, stu[i].num, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].score[3]);
//
//
//	if ((fp = fopen("infosort.dat", "w+")) == NULL)
//		puts("Can't open file!");
//
//	for (i = 0; i < N; i++)
//		if (fwrite(&stu[i], sizeof(struct STUDENT), 1, fp) != 1)
//			printf("write file error");
//	fclose(fp);
//
//
//
//	//puts("sort:");
//	//if ((fp = fopen("infosort.dat", "r")) == NULL)
//	//	puts("Can't open file!");
//	//for (i = 0; i < N; i++)
//	//	if (fread(&stu[i], sizeof(struct STUDENT), 1, fp) != 1)
//	//		printf("read file error");
//	//fclose(fp);
//	//for (i = 0; i < N; i++)
//	//	printf("%s %d %.1f %.1f %.1f %.1f\n", stu[i].name, stu[i].num, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].score[3]);
//
//	system("pause");
//}
//void sort(struct STUDENT a[N])
//{
//	for(i=0;i<N;i++)
//		for(j=i+1;j<N;j++)
//			if(strcmp(a[i].name,a[j].name))
//			{
//				a[N] = a[i];
//				a[i] = a[j];
//				a[j] = a[N];
//			}
//}

//#include<stdio.h>
//void main(void)
//{
//	int i, j, n;
//	for (i = 6; i < 100000; i++)
//	{
//		n = i;			 
//		for (j = 0; j < 5; j++)
//		{
//			if (n % 5 == 1)
//				n = (n - 1) / 5 * 4;
//			else 
//				break;
//		}
//		if (j == 5)
//		{
//			printf("%d", i); break;
//		}
//	}
//
//	system("pause");
//}



	