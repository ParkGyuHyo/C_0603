#include <stdio.h>
#include<windows.h>

void gotoxy(int a, int b)    
{
    COORD c;

    c.X=a;        
    c.Y=b;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);    
}

int main() {
	gotoxy(2, 4);
	printf("Hello");
	gotoxy(40, 20);
	printf("Hello\n");
	
	return 0;
}
