#include <stdio.h>
#include <stdlib.h>

#define yaz printf // define komutu belirteç yardımı ile örenktede göründüğü üzere değistirme yapar
#undef yaz  // bu komut ise define komutunun tersidir
int main() 
{    	
	
	// yaz("Selman YILDIRIM");
	printf("Selman YILDIRIM");
	return 0;
}
