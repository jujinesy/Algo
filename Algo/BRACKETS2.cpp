#include<stdio.h>
#include<string.h>

FILE *tempFile;
char str['ab'], stack['ab'], *p;
int err;


void input()
{
	scanf("%s",str);
	//gets(str);
}

void process()
{
	int i = -1, idx = 0;
	for(p=str;(int)*p;p++)
	{
		( ++idx%2 != 0 )?err=3:err=0; 
		if( *p == '(' ||  *p == '{' ||  *p == '[' )
		{
			i++;
			stack[i] = *p;
		} else 
		{
			if (*p == ')') {
				if( stack[i] == '(' )
				{
					i--;
					continue;
				} else {
					err=3;
					break;
				}
			} else if(*p == '}') {
				if( stack[i] == '{' )
				{
					i--;
					continue;
				} else {
					err=3;
					break;
				}
			} else if(*p == ']') {
				if( stack[i] == '[' )
				{
					i--;
					continue;
				} else {
					err=3;
					break;
				}
			} 
		}
		//if( *p == '(') 
		//{
		//	arr[0][0]++;
		//} else if( *p == '{' )
		//{
		//	arr[0][1]++;
		//} else if( *p == '[' )
		//{
		//	arr[0][2]++;
		//} else if( *p == ')' )
		//{
		//	arr[1][0]++;
		//} else if( *p == '}' )
		//{
		//	arr[1][1]++;
		//} else if( *p == ']' )
		//{
		//	arr[1][2]++;
		//}
	}
	if ( i != -1 )
		err=3; 
}

void output()
{
	//printf("%d %d %d \n%d %d %d \n", arr[0][0], arr[0][1], arr[0][2], arr[1][0], arr[1][1], arr[1][2]);
	//if( arr[0][0] == arr[1][0] && arr[0][1] == arr[1][1] && arr[0][2] == arr[1][2] )
	//{
	//	printf("YES\n");
	//} else {
	//	printf("NO\n");
	//}
	//arr[0][0] = 0;
	//arr[0][1] = 0;
	//arr[0][2] = 0;
	//arr[1][0] = 0;
	//arr[1][1] = 0;
	//arr[1][2] = 0;
	////int arr[2][3] = { {0, 0, 0}, {0, 0, 0} };
	if( err != 3) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	err=0;

}


int main()
{
	freopen_s(&tempFile, "input.txt", "r", stdin);
	freopen_s(&tempFile, "output.txt", "w", stdout);
	
	int re;

	scanf("%d", &re);

	while(re--)
	{
		input();
		process();
		output();
	}
	
	
	return 0;
}