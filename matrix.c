#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	const int TAM = 250;
	int n,i,j,k,z;
	double ti, tp;
	double tiempo[TAM];
	for (n = 10; n < TAM ; n++){
		int m1[n][n], m2[n][n], mr[n][n];
		
		for (z = 0; z < 10; ++z){
			ti = clock();
			for (i = 0; i < n; ++i){
				for (j = 0; j < n; ++j){
					for (k = 0; k < n; ++k){
						mr[i][j] += (m1[i][k]*m2[k][j]);
					}
				}
			}
			tp += (double)(clock()-ti)/CLOCKS_PER_SEC;
		}

		tiempo[n-10] = (double)(tp/10);

		


	}
	for (i = 0; i < TAM-10; ++i)
	{
		printf("%f, ", tiempo[i]);
	}
return 0;
}