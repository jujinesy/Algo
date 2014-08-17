//http://www.algospot.com/judge/problem/read/STRJOIN

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[100], size;

void push(int n)
{
	int tmp, v;

	a[size] = n;
	for (v = size; v > 0; v = (v - 1) / 2) {
		if (a[v] < a[(v - 1) / 2]) {
			tmp = a[v];
			a[v] = a[(v - 1) / 2];
			a[(v - 1) / 2] = tmp;
		}
		else
			break;
	}
	size++;
}

int pop()
{
	int rc = a[0], tmp, v;

	if (size == 0)
		return 0;

	a[0] = a[--size];
	a[size] = 2147483647;
	v = 0;

	while (v * 2 + 1 < size) {
		if (a[v] > a[v * 2 + 1] || a[v] > a[v * 2 + 2]) {
			if (a[v * 2 + 1] > a[v * 2 + 2]) {
				tmp = a[v * 2 + 2];
				a[v * 2 + 2] = a[v];
				a[v] = tmp;
				v = v * 2 + 2;
			}
			else {
				tmp = a[v * 2 + 1];
				a[v * 2 + 1] = a[v];
				a[v] = tmp;
				v = v * 2 + 1;
			}
		}
		else
			break;
	}
	return rc;
}

int main()
{
	int c, i, n, result, val;

	scanf("%d", &c);

	while (c--) {
		scanf("%d", &n);
		if (n == 1) {
			scanf("%d", &val);
			printf("0\n");
			continue;
		}

		result = 0;
		size = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &val);
			push(val);
		}

		while (size > 2) {
			val = pop() + pop();
			result += val;
			push(val);
		}

		result += (pop() + pop());
		printf("%d\n", result);
	}

	return 0;
}