#include <stdio.h>

int main(){
	//BÀI 1: nhap 1 so n -> in ra so tu 1 den n
	int n;
	printf("Moi nhap so nguyen duong n = ");
	scanf("%d", &n);
	printf("Ket qua n= %d\n",n);
	for(int i=1; i <= n; i++){
		printf("i = %d\n", i);
	}
	//Bài 2: in nguoc lai
	int x;
	printf("Moi nhap so nguyen duong x= ");
	scanf("%d", &x);
	printf("Ket qua x= %d\n", x);
	for(int i = x; i >= 0; i--){
		printf ("i= %d\n", i);
	}
	//Bài 3: nhap so 1-10 -> in bang cuu chuong
	int a;
	printf("Moi nhap so (1-10) a= ");
	scanf("%d",&a);
	//kiem tra if-else 1-10 
	if(a >= 1 && a <= 10){
		//in bang cuu chuong
		for(int i = 1; i <= 10; i++){
			printf("%d * %d = %d\n", a,i,a*i);
		}
	}else{
		printf("Khong co bang cuu chuong\n");
	}
	//Bài 4: nhap so number -> tinh tong 1-> number
	int number;
	printf("Moi nhap so nguyen duong number= ");
	scanf("%d", &number);
	printf("Ket qua number= %d\n", number);
	int i=1;
	int tong =0;
	while(i <= number){
		printf("i= %d\n", i);
		tong += i; //tong = tong+i;
		printf("tong = %d\n", tong);
		i++;
	}
	printf("Tong cuoi cung = %d\n", tong);
	//BÀI 5: 
	int so;
	do{
		printf("Moi nhap so nguyen duong = ");
		scanf("%d", &so);
		printf("Ket qua so= %d\n", so);
		if(so <0 || so >10){
			printf("Moi ban nhap lai!!!\n");
		}
	}while(so <0 || so >10);
	
	return 0;
}
