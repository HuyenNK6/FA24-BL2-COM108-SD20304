#include <stdio.h>
void bai1(){
	printf("1. Sinh Vien\n");
	//1. nhap so  luong
	int n;
	printf("Moi nhap so luong SV n= ");
	scanf("%d", &n);
	//2. khai bao mang
	int arrTuoi[n];
	//3. Nhap mang
	printf("-----------NHAP---------\n");
	for(int i=0; i<n; i++){
		printf("Moi nhap tuoi SV thu %d la: ", i);
		scanf("%d", &arrTuoi[i]);
	}
	//4. Xuat mang
	printf("-----------XUAT---------\n");
	for(int i=0; i<n; i++){
	//	printf("Tuoi SV thu %d la: %d ", i, arrTuoi[i]);
		printf("arrTuoi[%d] = %d\n", i, arrTuoi[i]);
	}
	//5. tinh tong phan tu tai vi tri le
	printf("------------Tinh Tong--------\n");
	int tong = 0;
	for(int i=0; i<n; i++){
		if( i % 2 != 0){//kiem tra vi tri le
			tong += arrTuoi[i];//tinh tong Tuoi tai vi tri le
		}
	}
	printf("Tong phan tu arrTuoi tai vi tri le la %d\n", tong);
}
void bai2(){
	printf("2. Nhan Vien\n");
	//1. nhap so luong
	int n;
	printf("Moi nhap so luong NV n= ");
	scanf("%d", &n);
	//2. khai bao mang
	float arrGio[n];
	//3. nhap mang
	printf("-------------NHAP---------\n");
	for(int i=0; i<n; i++){
		printf("Moi nhap so gio lam cua NV thu %d la: ", i);
		scanf("%f", &arrGio[i]);
	}
	//4. xuat mang
	printf("-------------XUAT---------\n");
	for(int i=0; i<n; i++){
		printf("So gio lam cua NV thu %d la: %.2f\n", i, arrGio[i]);
	}
	//5. tinh luong cua phan tu tai vi chan
	printf("---------Tinh luong---------\n");
	float luong=0;
	for(int i=0; i<n; i++){
		if(i % 2 == 0){
			luong = arrGio[i] * 150000;
			printf("Luong cua NV thu %d = %.2f\n",i, luong);
		}
	}
	
}
void bai3(){
	printf("3. Dien Thoai\n");
	int n;
	printf("Moi nhap so luong DT n= ");
	scanf("%d", &n);
	int arrDungLuong[n];
	printf("----------NHAP------------\n");
	for(int i= 0; i<n; i++){
		printf("Moi nhap dung luong DT thu %d la: ", i);
		scanf("%d", &arrDungLuong[i]);
	}
	printf("----------XUAT-----------\n");
	for(int i=0; i<n; i++){
		printf("Dung luong DT thu %d la %d\n", i, arrDungLuong[i]);
	}
	//kiem tra su ton tai gia tri x trong mang
	int x;
	int count = 0; //bien dem;
	printf("Moi nhap dung luong can tim: ");
	scanf("%d", &x);
	for(int i=0; i<n; i++){
		if(arrDungLuong[i] == x){
			count++;//tim thay thi tang count len 1 don vi
			printf("Tim thay gia tri %d trong mang\n", x);
			break;//tim thay va thoat luon khoi vong lap
		}
	}
	if(count == 0 ){
		printf("Khong tim thay gia tri %d\n", x);
	}
}
void bai4(){
	printf("4. Dong Vat\n");
	int n;
	printf("Moi nhap so luong DV n= ");
	scanf("%d", &n);
	float arrCanNang[n];
	printf("----------NHAP------------\n");
	for(int i= 0; i<n; i++){
		printf("Moi nhap can nang DV thu %d la: ", i);
		scanf("%f", &arrCanNang[i]);
	}
	printf("----------XUAT-----------\n");
	for(int i=0; i<n; i++){
		printf("Can nang DV thu %d la %.2f\n", i, arrCanNang[i]);
	}
	float max = arrCanNang[0]; //tuyet doi ko gan = 0 -> phan tu tai vi tri 0
	int viTri = 0;//gán vi tri mac dinh = 0 
	for(int i=0; i<n; i++){
		if(arrCanNang[i] > max){
			max= arrCanNang [i];
			viTri= i;
		}
	}
	printf("Gia tri lon nhat la %.2f tai vi tri %d\n", max, viTri);
}
void bai5(){
	printf("5. Nguoi Yeu Cu\n");
}
int main(){
	int luaChon;
	do{
		printf("-----------MENU------------\n");
		printf("1. Sinh Vien\n");
		printf("2. Nhan Vien\n");
		printf("3. Dien Thoai\n");
		printf("4. Dong Vat\n");
		printf("5. Nguoi Yeu Cu\n");
		printf("0. Thoat CT\n");
		printf("--------------------------\n");
		printf("Moi nhap lua chon: ");
		scanf("%d", &luaChon);
		switch(luaChon){
			case 1:
				bai1();
				break;
			case 2:
				bai2();
				break;
			case 3:
				bai3();
				break;
			case 4:
				bai4();
				break;
			case 5:
				bai5();
				break;
			case 0:
				printf("0. Thoat CT\n");
				return 0;
			default:
				printf("Moi nhap lai!!!\n");
		}
	}while (luaChon != 0);
	return 0;
}
