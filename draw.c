#include <stdio.h>
#include <windows.h>

void gotoxy(int a, int b)    
{
    COORD c;

    c.X=a;        
    c.Y=b;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);    
}

void draw_xy_line01(int a, int b) {
	int x, y;
	for (x=1; x<=10; x++) {
		y = a*x+b;
		gotoxy(x, y);
		printf("*");
	}
}


int main() {
	int a, b;
	printf("y=ax+b�� ���� ���� ��ǥ�� ���\n");
	printf("���� a�Է�>");
	scanf("%d", &a);
	printf("���� b�Է�>");
	scanf("%d", &b);
	system("cls");
	draw_xy_line01(a, b);
	printf("\n");
	
	return 0;
}
