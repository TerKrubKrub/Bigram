#include <stdio.h>
int main()
{
	int x[100000];
	int i, n0 = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	for (i = 0; i > -1; i++)
	{
		scanf_s("%d", &x[i]);
		n0++;
		if (x[i] != 0 && x[i] != 1) break;
	}
	for (i = 0; i < n0; i++)
	{
		if (x[i] == 0 && x[i + 1] == 0) n1++;
		if (x[i] == 0 && x[i + 1] == 1) n2++;
		if (x[i] == 1 && x[i + 1] == 0) n3++;
		if (x[i] == 1 && x[i + 1] == 1) n4++;
	}
	printf("%d\n%d\n%d\n%d", n1, n2, n3, n4);
	return 0;
}