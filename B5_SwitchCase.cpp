#include <stdio.h>

int main(){
	printf("-------MENU---------\n");
	printf("1. Bun cha\n");
	printf("2. Bun bo\n");
	printf("3. Bun rieu\n");
	printf("4. Bun ca\n");
	printf("0. Thoat CT\n");
	printf("--------------------\n");
	int luaChon;
	printf("Moi ban chon mon an so: ");
	scanf("%d",&luaChon);
	switch(luaChon){
		case 1:
			printf("An bun cha\n");
			break; //=> thoat khoi switch case
		case 2:
			printf("An bun bo\n");
			break;
		case 3:
			printf("An bun rieu\n");
			break;
		case 4:
			printf("An bun ca\n");
			break;
		case 0:
			printf("Thoat CT\n");
			return 0;
		default:
			printf("Ban nhap sai lua chon\n");
			break;
	}
	return 0;
}
