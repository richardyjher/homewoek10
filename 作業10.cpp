#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char x;
	
	printf("��J�^��r��:"); 
	scanf("%c",&x);
	if((x>='A')&&(x<='Z')){
		x+=32;
		printf("�ഫ�ᬰ%c\n",x);
	}
	else if((x>='a')&&(x<='z')){
		x-=32;
		printf("�ഫ�ᬰ%c\n",x);	
	}
	else{
		printf("�����O�^��r��\n");
	}
	
	system("pause");
	return 0;
}
