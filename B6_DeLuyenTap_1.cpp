#include <stdio.h>

int main(){
	printf("-------------MENU------------\n");
	printf("1. Bài 1: Kiem tra nam nhuan\n");
	printf("2. Bài 2: Tinh tien luong\n");
	printf("3. Bài 3: Chi so BMI\n");
	printf("4. Bài 4: Kiem tra canh tam giac\n");
	printf("0. Thoat CT\n");
	printf("-----------------------------\n");
	int luaChon;
	printf("Moi nhap lua chon: ");
	scanf("%d",&luaChon);
	switch(luaChon){
		case 1:
			printf("1. Bài 1: Kiem tra nam nhuan\n");
			int soNam;
			printf("Moi ban chon so nam:");
			scanf("%d", &soNam);
			if((soNam %4 ==0 && soNam %100 !=0) || soNam % 400==0){
				printf("%d la nam nhuan", soNam);
			}else {
				printf("%d khong phai la nam nhuan", soNam);
			}
			break;
		case 2:
			printf("2. Bài 2: Tinh tien luong\n");
			float gioLamViec, luong;
			printf("Nhap gio lam viec: ");
			scanf("%f", &gioLamViec);
			if(gioLamViec <= 40){
				luong= gioLamViec * 50;
			}else{
				luong= 40 * 50 + (gioLamViec - 40) * 50 * 1.5;
			}
			printf("Tien luong cua ban la:%.2f ", luong);
			
			break;
		case 3:
			printf("3. Bài 3: Chi so BMI\n");
			float chieuCao,canNang,BMI;
			printf("Moi ban nhap chieu cao: ");
			scanf("%f", &chieuCao);
			printf("Moi ban nhap can nang: ");
			scanf("%f", &canNang);
			BMI=canNang / (chieuCao*chieuCao);
			printf("Chi so BMI la: %.2f\n", BMI);
			if (BMI< 18.5){
				printf("Thieu can \n");
			}else if(BMI >= 18.5 && BMI < 24.9){
				printf("Binh thuong \n");
			}else if(BMI >= 25 && BMI < 29.9){
				printf("Thua can \n");	
			}else{
				printf("Beo phi \n");
			}
			
			
			break;
		case 4:
			printf("4. Bài 4: Kiem tra canh tam giac\n");
			//ve nha hoan thien
			break;
		case 0:
			printf("0. Thoat CT\n");
			return 0;
		default:
			printf("Ban chon sai chuc nang\n");
			break;
	}
	
	return 0;
}
