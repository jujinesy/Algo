#include<stdio.h>
#include<string.h>
#include<math.h>
FILE *tempFile;

char str['ab'];
int sum = 0;

void input();
void process();
int f_square(int a, int b);
int f_conver(char a);
void output();



void input()
{
	//scanf("%s", str);
	gets(str);
}

void process()
{

	for(int i = 0 ; i < strlen(str) ; i++)
	{
		sum += f_conver(str[strlen(str)-1-i])*f_square(62,i)%61;
	}


}

int f_square(int a, int b)
{
        int i, sum=1;

        if(b==0)
                sum = 1;
        else {
                for(i=1;i<=b;i++)
                        sum *= a;
        }
        return sum;
}

int f_conver(char a)
{
        int i=0;

        if( 48 <= a && a <= 57) {
			i = a - 48;
		}else if( 97 <= a && a <= 122 ) {
			i = a - 61;
		}else if ( 65 <= a && a <= 90 ) {
			i = a - 55;
		}

        return i;
}


void output()
{
	//printf("%d \n",sum);
	//printf("%d \n",sum%61);
	if( sum%61 == 0 ) {
		printf("yes\n");
	}else{
		printf("no\n");
	}
}

int main()
{
	freopen_s(&tempFile, "input.txt", "r", stdin);
	freopen_s(&tempFile, "output.txt", "w", stdout);
	
	while(1)
	{
		input();
		if(	strcmp(str,"end") == 0 )
			break;
		
 		process();
 		output();

	}
	
	
	return 0;
}