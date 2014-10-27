#include <stdio.h>
#include <string.h>
#define MAX 200    // (10^MAX - 1) * (10^MAX - 1) 까지 계산됩니다. 
FILE *tempFile; //

void main()
{
	freopen_s(&tempFile, "input.txt", "r", stdin);
	freopen_s(&tempFile, "output.txt", "w", stdout);

	char num[2][MAX + 1], *ptr;
	unsigned char mul[MAX + MAX + 2];
	int count, len[2], mul_len, i, j, k;


	int re;

	scanf("%d", &re);

	while (re--)
	{

		for (count = 0; count < 2;)
		{
			//printf("정수%d 입력(%d자리 이하) : ", count + 1, MAX); 
			count + 1;
			scanf("%s", num[count]);
			//gets(num[count]);
			ptr = num[count];
			while (*ptr)
			if (*ptr < '0' || *ptr > '9')
				break;
			else ptr++;
			if (*ptr)
				printf("다시 입력하세요.\n");
			else len[count++] = strlen(num[count]);
		}


		mul_len = len[0] + len[1]; // 이게 마지막 자릿값입니다. 실제 길이는 이거보다 1 큼 
		memset(mul, 0x00, mul_len + 2); // mul 배열 초기화.. 

		for (i = 0; i < len[0]; i++)

		for (j = 0; j < len[1]; j++) // 곱셈은.. 정수2부터 곱해짐.. 
		{
			k = mul_len - i - j; // 뒷자리부터 연산.. 올림값 처리를 위해서.. 
			mul[k] += (num[0][len[0] - i - 1] - '0') * (num[1][len[1] - j - 1] - '0'); //곱함 
			if (mul[k] > 9) { mul[k - 1] += (mul[k] / 10); mul[k] %= 10; } // 올림값 처리 
		}

		for (i = 0; i <= mul_len; i++) mul[i] += '0';  // mul 배열을 문자화 

		for (i = 0; mul[i] == '0';) i++; // 앞자리가 0 이면 출력에서 제외하기 위해서 

		//printf("%s * %s\n= %s\n", num[0], num[1], &mul[i]);
		printf("%s\n", &mul[i]);
	}
}
//100
//55018 222995
//910371 766149
//937577 846514
//338367 241666
//511266 545785
//642328 351168
//979020 658022
//33089 701320
//924314 595903
//878403 487942
//850807 279500
//37517 440864
//986648 474276
//341795 259040
//433414 688701
//390020 533209
//645463 188289
//192582 199840
//995691 852994
//293857 231637
//222264 102526
//877918 632625
//321326 56830
//590038 397847
//102487 789158
//505349 648263
//501257 120070
//868058 665288
//284166 566854
//715831 121010
//177839 316652
//230851 872289
//661446 828147
//476409 515915
//635985 751132
//932772 430154
//513359 314149
//435158 401487
//718138 596604
//985244 449655
//794153 459785
//975699 30371
//297854 86411
//32916 742791
//56939 859283
//777121 107214
//220169 35020
//484674 791978
//251762 698288
//245010 346667
//949429 503923
//763065 770105
//145739 369488
//993053 482598
//517617 927771
//719749 787087
//1726 379557
//242575 103521
//123795 628494
//914950 768372
//137859 117072
//599670 467073
//911195 279118
//66204 466098
//362006 866830
//486702 169670
//798164 36338
//804710 785977
//419401 306404
//773476 966667
//762136 321338
//787436 467121
//850303 276339
//446009 132364
//168702 26615
//812592 280141
//102896 571217
//537883 936471
//257809 425710
//409183 90032
//366371 530465
//662828 609396
//636010 562889
//359381 786325
//357541 480708
//417179 448745
//390806 389206
//479237 980321
//27137 721368
//330763 263590
//342831 875488
//178164 161372
//158432 535838
//984582 208327
//597532 36233
//532905 783903
//505270 645767
//425709 804202
//679689 283583
//444955 667940