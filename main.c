#include <stdio.h>
#include <stdlib.h>

#define yaz printf // define komutu belirteç yardýmý ile örenktede göründüðü üzere deðistirme yapar
#undef yaz  // bu komut ise define komutunun tersidir
int main() 
{
	printf("Selman YILDIRIM");
	return 0;
}
