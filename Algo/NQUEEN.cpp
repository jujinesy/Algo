#include <stdio.h>  
int getNQ(int *t, int p, int n, int m){
	int i, cnt = 0, k[12] = { 0 };
	for (i = m - 1; i > 0; i--){
		if (p - i > -1 && t[p - i] == m - i) return 0;
	}
	for (i = m - 1; i > 0; i--){
		if (p + i < n && t[p + i] == m - i) return 0;
	}
	if (m == n) return 1;
	t[p] = m++;
	for (i = 0; i < n; i++){
		if (t[i] == 0) cnt += getNQ(t, i, n, m);
	}
	t[p] = 0;
	return cnt;
}
int main(void) {
	int c, n, t[12], i, cnt;
	scanf("%d", &c);
	while (c--){
		scanf("%d", &n);
		cnt = 0;
		for (i = 0; i < n; i++) t[i] = 0;
		for (i = 0; i < n / 2; i++) cnt += getNQ(t, i, n, 1);
		cnt *= 2;
		if (n % 2 == 1) cnt += getNQ(t, i, n, 1);
		printf("%d\n", cnt);
	}
	return 0;
}