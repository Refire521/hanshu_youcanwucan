#include<stdio.h>
#define M 4
#define N 4
int main()
{
	int a[M][N] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int b[N][M], i, j;
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++)
			printf("%5d", a[i][j]);
			printf("\n");
	}
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++)
			b[j][i] = a[i][j];
	}
	printf("b:\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++)
			printf("%5d", b[i][j]);
		printf("\n");
	}

	return 0;
}
