#include <stdio.h>
#define ROW 20
#define COL 20
void read_matrix(int, int, int[][COL]);
void print_matrix(int, int, int[][COL]);
void triasum1(int,int,int[][COL]);
void triasum2(int,int,int[][COL]);
void prod1(int,int,int[][COL]);
void search2(int,int,int[][COL]);

int main() {
	printf("Enter rowsize and columnsize for first matrix: ");
	int m, n, p, q;
	scanf("%d%d", &m, &n);
	printf("\nEnter rowsize and columnsize for second matrix: ");
	scanf("%d%d", &p, &q);
	int mat1[m][COL];
	int mat2[p][COL];
	read_matrix(m, n, mat1);
	read_matrix(p, q, mat2);
	printf("\n First matrix: \n");
	print_matrix(m, n, mat1);
	printf("\n Second matrix: \n");
	print_matrix(p, q, mat2);
	triasum1(m,n,mat1);
	triasum2(p,q,mat2);
	prod1(m,n,mat1);
	search2(m,n,mat2);
	return 0;
}

void read_matrix(int r, int c, int mat[][COL]) {
	printf("Enter matrix elements:\n");
	for (int i = 0; i < r; i++) {
    	for (int j = 0; j < c; j++) {
        	scanf("%d", &mat[i][j]);
    	}
	}
}

void print_matrix(int r, int c, int mat[][COL]) {
	for (int i = 0; i < r; i++) {
    	for (int j = 0; j < c; j++) {
        	printf("%d ", mat[i][j]);
    	}
    	printf("\n");
	}
}
void triasum1(int r, int c, int mat[][COL]){
	if(r==c){
    	int sum=0;
    	for(int i=0;i<r;i++){
        	for(int j=0;j<c;j++){
            	if(j>=i)
                	sum+=mat[i][j];
        	}
    	}
    	printf("\nThe sum of upper triangular elements of first matrix is: %d",sum);
	}
	else
	    printf("\nThe first matrix is not square ");
}
void triasum2(int r, int c, int mat[][COL]){
	if(r==c){
    	int sum=0;
    	for(int i=0;i<r;i++){
        	for(int j=0;j<c;j++){
            	if(j>=i)
                	sum+=mat[i][j];
        	}
    	}
    	printf("\nThe sum of upper triangular elements of second matrix is: %d",sum);
	}
	else
	    printf("\nThe second matrix is not square ");
}
void prod1(int r, int c, int mat[][COL])
{
    int p=1;
    for(int i=0;i<r;i++){
        p=1;
        printf("\nThe product of %d th row of first matrix is ",i+1);
        for(int j=0;j<c;j++){
            p*=mat[i][j];
        }
        printf(" %d",p);
    }
}
void search2(int r, int c, int mat[][COL])
{
    printf("\nEnter the number to search in the second matrix ");
    int n, f = 0;
    scanf("%d",&n);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(n==mat[i][j])
                f++;
        }
    }
    if(f==0)
        printf("\nNumber %d not found ",n);
    else
        printf("\nNumber %d found %d times ",n,f);
}
