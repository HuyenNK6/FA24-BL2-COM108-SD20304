#include <stdio.h>

int main(){
	int n;
	int tongChuSo = 0;
	do{
		printf("Moi nhap so nguyen duong n= ");
		scanf("%d", &n);
		if(n > 0){
			int i = n;
			do{
				tongChuSo += n % 10;
				n = n / 10;
			}while(n>0);
			printf("Tong cac chu so cua so %d la %d\n", i, tongChuSo);
			return 0;
		}
	}while(n<=0);
	return 0;
}
