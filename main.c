#include <stdio.h>
#include <stdlib.h>

#define yaz printf // define komutu belirte� yard�m� ile �renktede g�r�nd��� �zere de�istirme yapar
#undef yaz  // bu komut ise define komutunun tersidir
int main() 
{
	printf("Selman YILDIRIM");
	return 0;
}
