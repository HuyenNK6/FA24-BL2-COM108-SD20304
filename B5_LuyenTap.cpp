#include <stdio.h>

int main(){
	printf("-------MENU BAI TAP-------\n");
	printf("1. Bai 1: kiem tra tien\n");
	printf("2. Bai 2: so sanh 3 so\n");
	printf("3. Bai 3: kiem tra tuoi\n");
	printf("4. Bai 4: tinh tien dien\n");
	printf("5. Thoat CT\n");
	printf("--------------------------\n");
	int luaChon;
	printf("Moi ban nhap lua chon: ");
	scanf("%d",&luaChon);
	switch(luaChon){
		case 1:
			printf("1. Bai 1: kiem tra tien\n");
			//code bài 1
			float soTien;
			printf("moi ban nhap so tien: \n");
			scanf("%f", &soTien);
			if (soTien>30){
				printf("mua iphone 16\n");	
			}else{
				printf("het tien\n");
			} 
			
			break;
		case 2:
			printf("2. Bai 2: so sanh 3 so\n");
			//code bài 2
			int a,b,c;
			printf("moi ban nhap so thu nhat:\n");
			scanf("%d",&a);
			printf("moi ban nhap so thu hai: \n");
			scanf("%d",&b);
			printf("moi ban nhap so thu ba \n");
			scanf("%d",&c);
			if(a>b && a>c){
				printf("so lon nhat la %d",a);
			}else if(b>a && b>c){
				printf("so lon nhat la %d",b);
			}else{
				printf("so lon nhat la %d",c);
			}
			break;
		case 3:
			printf("3. Bai 3: kiem tra tuoi\n");
			//code bài 3
			//tu lam ko chua
			break;
		case 4:
			printf("4. Bai 4: tinh tien dien\n");
			//code bài 4
			int soDien;
			printf("Nhap so dien(kwh): ");
			scanf("%d", &soDien);
			
			if(soDien<50){
				printf("Tien dien cua ban la: %d", soDien*1500);
			}else if(soDien>=50 && soDien<=100){
				printf("Tien dien cua ban la: %d", soDien*2000);
			}else{
				printf("Tien dien cua ban la: %d", soDien*3000);
			}
			break;
		case 5:
			printf("Thoat CT\n");
			return 0;
		default:
			printf("Ban chon sai chuc nang\n");
			break;	
	}
	
	return 0;
}
