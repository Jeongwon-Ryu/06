#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial (int n);
int combination (int n, int r)
{
	int a= factorial(n);
	int b= factorial(r);
	int c= factorial(n-r);
	return(a/(b*c));
	
}
int factorial (int n)
{
	int res=1;
	int i;
	
	for (i=1; i <= n; i ++)
	    res = res*i;
	
	return res;	
	
}
int get_integer(int n, int r)
{
	printf("�� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &n, &r);
	return ;
	
}


int main(void)
{
    int n, r, res;
    
    printf("�� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &n, &r);
    res= combination(n, r);
	
	printf("C(%d, %d)= %d",n, r, res);
	
	return 0;
}	

