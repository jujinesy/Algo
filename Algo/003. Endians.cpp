//#include<stdio.h>
//#include<math.h>
//
//FILE *tempFile;
//unsigned int Num;
//int Brest[32], Lrest[32];
//
//
//void input()
//{
//	scanf("%u", &Num);
//}
//
//void process()
//{
//	int i = 0;
//
//	for( int j = 0 ; j < 32 ; j++)
//	{
//		Brest[j] = 0;
//		Lrest[j] = 0;
//	}
//
//	while(1)
//	{ 
//		Brest[i++] = Num%2;
//		Num = Num/2;
//		if(Num == 1)
//		{
//			Brest[i] = 1;
//			break;
//		} else if (Num == 0) {
//			break;
//		}
//	}
//
//	for( int j = 0 ; j < 32 ; j++)
//	{
//		if( j >= 0 && j <= 7)
//		{
//			Lrest[j+24] = Brest[j];
//		}else if( j >= 8 && j <= 15){
//			Lrest[j+8] = Brest[j];
//		}else if( j >= 16 && j <= 23){
//			Lrest[j-8] = Brest[j];
//		}else if( j >= 24 && j <= 31){
//			Lrest[j-24] = Brest[j];
//		}
//	}
//
//	Num = 0;
//
//	for( int j = 0 ; j < 32 ; j++)
//	{
//		Num = Num + Lrest[j]*pow(2,(double)j);
//	}
//	
//}
//
//void output()
//{
//	//for(int i = 31 ; i >= 0; i -- )
//	//{
//	//	printf("%d ", Brest[i]);
//	//}
//	//printf("\n");
//	//for(int i = 31 ; i >= 0; i -- )
//	//{
//	//	printf("%d ", Lrest[i]);
//	//}
//	printf("%u\n", Num);	
//}
//
//
//int main()
//{
//	freopen_s(&tempFile, "input.txt", "r", stdin);
//	freopen_s(&tempFile, "output.txt", "w", stdout);
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