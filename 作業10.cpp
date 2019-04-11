#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char x;
	
	printf("輸入英文字母:"); 
	scanf("%c",&x);
	if((x>='A')&&(x<='Z')){
		x+=32;
		printf("轉換後為%c\n",x);
	}
	else if((x>='a')&&(x<='z')){
		x-=32;
		printf("轉換後為%c\n",x);	
	}
	else{
		printf("此不是英文字母\n");
	}
	
	system("pause");
	return 0;
}
