//BÀI 11: HÀM

#include <stdio.h>
//1. Ham ko tra ve, ko tham so truyen vao
void bai1(){
	printf("----------BAI 1-------\n");
	int a, b;
	int tong = 0;
	printf("Moi nhap so nguyen duong a= ");
	scanf("%d", &a);
	printf("Moi nhap so nguyen duong b= ");
	scanf("%d", &b);
	if(a < b){
		for (int i = a; i <= b; i++){ //duyet cac gia tri tu a->b
			if (i % 2 == 0){
				tong += i;
			}
		}
		printf("Tong cac so chan tu %d den %d la %d\n", a,b,tong);
	}else{
		printf("Nhap khong hop le!");
	}
}
//2. Hàm ko tra ve, co tham so truyen vao
void bai2(int n){
	int giaiThua = 1;
	if ( n >= 1){
		for (int i =1; i<=n ; i++){
			giaiThua *= i;
		}
		printf("Giai thua= %d\n", giaiThua);
	}else if(n == 0){
		giaiThua = 1;
		printf("Giai thua= %d\n", giaiThua);
	}else{
		printf("Khong co gia thua!");
	}
}
//3. Ham tra ve, khong tham so truyen vào
float bai3(){
	float luong, gio, bac;
	printf("Moi nhap so gio = ");
	scanf("%f", &gio);
	printf("Moi nhap so bac luong = ");
	scanf("%f", &bac);
	luong = gio * bac;	
	return luong;//tra ve ket qua cua luong 
}
//4. Ham tra ve, co tham so truyen vào
int bai4( int x ){
	int tong =0;
	for (int i = 1; i <= x; i++ ){
		if(i % 3 == 0 || i % 5 == 0){
			tong += i;
		}
	}
	return tong; //tra ve ket qua tong
}

int main(){
	//goi ham bai 1 -> goi thong qua ten ham
	bai1();
	//bai 2
	printf("----------BAI 2-------\n");
	int n;
	printf("Moi nhap so nguyen duong n= ");
	scanf("%d",&n);
	bai2(n);//goi ham bai 2 -> truyen tham so la n
	printf("----------BAI 3-------\n");
	float ketQua = bai3();//hàm bài 3 có giá tri tra ve la luong
	printf("Ket qua tinh luong = %.2f\n", ketQua);
	printf("----------BAI -4------\n");
	int x;
	printf("Moi nhap so nguyen duong x= ");
	scanf("%d",&x);
	int tong = bai4(x);
	printf("Tong = %d\n", tong);
	return 0;
}
