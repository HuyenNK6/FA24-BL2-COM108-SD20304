#include <stdio.h>
void bai1(){
	printf("1. Tinh tong\n");
	//code bài 1
}
void bai2(){
	printf("2. Tinh hoc phi\n");
	//code bài 2
}
void bai3(){
	printf("3. Tinh thue\n");
	//code bài 3
}
int main(){
	int luaChon;
	do{
		printf("-----------MENU-------\n");
		printf("1. Tinh tong\n");
		printf("2. Tinh hoc phi\n");
		printf("3. Tinh thue\n");
		printf("0. Thoat CT\n");
		printf("-----------------------\n");
		printf("Moi nhap lua chon: ");
		scanf("%d",&luaChon);
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
			case 0:
				printf("0. Thoat CT\n");
				return 0;
			default: 
				printf("Moi nhap lai (1-3)!!\n");
		}
	}while(luaChon != 0);
	
	
	return 0;
}
