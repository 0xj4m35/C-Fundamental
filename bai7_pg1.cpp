#include <stdio.h>

int main(){
	int a, b, c, d, e;
	bool ng = false;
	scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
	for ( int x =1; x<e; x++)
		for ( int y =1; y<e; y++)
			for ( int z=1; z<e; z++)
				if (x+y+z==e)
					if (a*x + b*y + c*z == d){								
						printf("\t%d\t%d\t%d\n", x, y, z);
						ng = true;
					}
	if (!ng)
		printf("Khong co nghiem duong.");
	return 0;				
}
