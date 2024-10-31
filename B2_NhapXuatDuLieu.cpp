#include <stdio.h>

int main(){
	#define PI 3.14
	const float e=2.7;
	//PI = 5.8; -> error -> vi hang so ko thay doi gia tri
	//e= 10; -> error
	printf("PI= %.2f \n", PI);
	printf("e= %.1f \n",e);
	////////////////////////
	//nhap so luong và biet danh (1 ky tu) nguoi yeu cu cua ban tu ban phim
	//sau do in ra man hinh
	//B1: KHAI BAO BIEN
	int soLuongNYC;
	char bietDanh;
	//B2: NHAP GIA TRI TU BAN PHIM
	printf("Moi ban nhap so luong NYC: ");
	scanf("%d", &soLuongNYC); 
	getchar(); //tình trang bi troi lenh -> xóa ký tu thua con lai
	printf("Moi ban nhap biet danh NYC: ");
	scanf("%c", &bietDanh); 
	//B3: IN RA MÀN HÌNH
	printf("Ban co %d NYC \n", soLuongNYC);
	printf("Biet danh NYC la %c \n", bietDanh);
	return 0;
}
