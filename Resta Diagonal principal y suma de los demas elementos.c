#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	srand(time(0));
	int r1, c1, r2, c2;
	printf("Dame el numero de renglones de la primera matriz: ");
	scanf("%i",&r1);
	printf("Dame el numero de columnas de la primera matriz: ");
	scanf("%i",&c1);
	printf("Dame el numero de renglones de la segunda matriz: ");
	scanf("%i",&r2);
	printf("Dame el numero de columnas de la segunda matriz: ");
	scanf("%i",&c2);
	int A[r1][c1], B[r2][c2], C[r1][c1];
	printf("\n");
	printf("------------Matriz A------------\n");
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			A[i][j]=1+rand()%(99-1+1);
		}
	}
	for(int i=0;i<c1;i++){
		for(int j=0;j<c1;j++){
			printf("%i \t", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("------------Matriz B------------\n");
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			B[i][j]=1+rand()%(99-1+1);
		}
	}
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			printf("%i \t", B[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("-----Resta Diagonal principal y suma de los demas elementos-----\n");
	if(r1==r2 && c1==c2){
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				if(i==j){
					C[i][j]=A[i][j]-B[i][j];
				}
				else{
					C[i][j]=A[i][j]+B[i][j];
				}
			}
		}
	}
	else{
		printf("No se puede hacer ya que el numero de renglones y columnas es diferente");
	}
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			printf("%i \t", C[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
