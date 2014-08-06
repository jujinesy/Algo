//#include <stdio.h>
//
//int arr[100] = {0};
//int N;
//int cnt;
//
//
//void input()
//{
//	int i, j;
//
//	scanf("%d", &N);	
//
//	for( i = 1 ; i <= N ; i++)
//	{
//		for( j = i - 1 ; j < 100 ; j += i)
//		{
//			if( arr[j] == 0 )
//			{
//				arr[j] = 1;
//			} else
//			{
//				arr[j] = 0;
//			}
//		}
//	}
//}
//
//void process()
//{
//	int i;
//	for( i = 0 ; i < 100 ; i++ )
//	{
//		if( arr[i] == 1)
//		{
//			cnt++;
//		}
//	}
//	printf("%d \n", cnt);
//	cnt = 0;
//
//	for( i = 0 ; i < 100 ; i++ )
//	{
//		if( arr[i] == 1)
//		{
//			printf("%d ", i+1);
//		}
//	}
//	printf("\n");
//	for( i = 0 ; i < 100 ; i++ )
//	{
//		arr[i] = 0;
//	}
//
//}
//
//void output()
//{
//
//
//}
//int main()
//{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//
//	int re;
//
//	scanf("%d", &re);
//
//	while(re--)
//	{
//		input();
//		process();
//		output();
//	}
//	
//	
//	return 0;
//}