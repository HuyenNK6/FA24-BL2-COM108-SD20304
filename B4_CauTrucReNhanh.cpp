#include <stdio.h>

int main(){
	//Bai 1: kiem tra so nguyen
	printf("--------BAI 1---------\n");
	int n;
	printf("Moi nhap so nguyen n= ");
	scanf("%d", &n);
	printf("Ket qua n= %d\n", n);
	if (n > 0){
		printf("%d la so nguyen duong\n", n);
	}else{
		printf("%d la so nguyen am\n",n);
	}
	//Bai 2: kiem tra so chan le
	printf("--------BAI 2---------\n");
	int x;
	printf("Moi nhap so nguyen x= ");
	scanf("%d",&x);
	printf("Ket qua x= %d\n",x);
	//so chan -> chia 2 du 0 => (x % 2 == 0)
	//so le -> chia 2 khac 0 => (x % 2 != 0) -> BTVN lam cach 2
	if(x % 2 == 0){
		printf("%d la so chan\n",x);
	}else{
		printf("%d la so le\n",x);
	}
	//Bai 3: danh gia hoc luc
	printf("--------BAI 3---------\n");
	float toan, van, anh;
	printf("Moi nhap diem toan = ");
	scanf("%f", &toan);
	printf("Moi nhap diem van = ");
	scanf("%f", &van);
	printf("Moi nhap diem anh = ");
	scanf("%f", &anh);
	printf("Diem Toan = %.1f, Van = %.1f, Anh = %.1f\n", toan, van, anh);
	float diemTB = (toan + van + anh)/3;
	printf("Diem trung binh = %.2f\n", diemTB);
	if (diemTB >= 9){
		printf("Hoc luc: Xuat sac\n");
	}else if(diemTB >= 8){
		printf("Hoc luc: Gioi\n");
	}else if(diemTB >= 7){
		printf("Hoc luc: Kha\n");
	}else if(diemTB >= 5){
		printf("Hoc luc: Trung Binh\n");
	}else if(diemTB >= 3){
		printf("Hoc luc: Yeu\n");
	}else {
		printf("Hoc luc: Kem\n");
	}
	
	return 0;
}
