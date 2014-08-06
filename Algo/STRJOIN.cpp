//http://www.algospot.com/judge/problem/read/STRJOIN

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int len;
int arr[101];

int compare( const void *arg1, const void *arg2)
{
	int p1, p2;
	p1 = *(int*)arg1;
	p2 = *(int*)arg2;

	return (p1-p2);
}

void input()
{
	scanf_s("%d", &len);
	for( int i = 0 ; i < len ; i++)
		scanf_s( "%d", &arr[i]);
}

void process()
{
	int div = 0;
	while(1)
	{
		div = len/2 + len%2;
		len = div;

		qsort( (void *)arr, (size_t)(len), sizeof(int), compare);
		
		
		for( int i = 0 ; i < len ; i++ )
		{
			
		}
		
		if( len == 1)
			break;
	}
}
void output()
{
	printf_s("1\n");
}

int main(void)
{
	int repeat;
	FILE *tempFile;

	freopen_s(&tempFile, "input.txt", "r", stdin);
	freopen_s(&tempFile, "output.txt", "w", stdout);

	scanf_s("%d", &repeat);
	while(repeat--)
	{
		input();
		process();
		output();
	}

	return 0;
}