#include <stdio.h>u
#include <math.h>
//求100-200间的素数



int main()
{
	int i = 100;
	int n = 2;
	for (i = 101; i <= 200; i += 2)//缩小i的范围，因为偶数不可能是素数
	{
		for (n = 2; n <= sqrt(i); n++)//将n的范围缩小至i的开方，也可减小至i/2
		{
			if (i % n == 0)
				break;
		};
		if (n >= sqrt(i))
			printf("%d", i);
	};
	return 0;
}




//int main()
//{
//	int i = 100;
//	int n = 2
//	for (i = 100; i <= 200; i++)
//	{
//		for (n = 2; n <= sqrt(i); n++)
//		{
//			if (i % n == 0)
//				break;
//		};
//		if (i >= sqrt(i))
//			printf("%d", i);
//	};
//	return 0;
//}




//int main()
//{
//	int i = 100;
//	int n = 2;
//	for (i = 100; i <= 200; i++)
//	{
//		for (n = 2; n <= i; n++)
//		{
//			if (i % n == 0)
//				break;
//		};
//		if (i == n)
//			printf("%d", i);
//	};
//	return 0;
//}




//int main()
//{
//	int i = 100;
//	int n = 2;
//	for (i = 100; i <= 150; i++)
//	{
//		for (n = 2; n <= 200; n++)
//		{
//			if (i > n && i % n != 0)
//				printf("%d", i);
//		};
//	};
//	return 0;
//}