#include <stdio.h>

//C�c h�m ki?m tra k� t?. (c�c h�m n�y trong thu vi?n ctype.h) N?u d�ng th� h�m cho gi� tr? kh�c 0. N?u sai th� h�m cho gi� tr? b?ng 0.
//
//Int isalpha(int c) : ki?m tra k� t? c� l� ch? c�i kh�ng.
//Int isdigit(int c) : ki?m tra xem k� t? c� l� ch? s? kh�ng.
//Int islower(int c): ki?m tra k� t? c� l� ch? thu?ng kh�ng.
//Int isupper(int c): ki?m tra k� t? c� l� ch? hoa kh�ng.
//Int ispace(int c): ki?m tra k� t? c� l� tr?ng kh�ng (\n, d?u c�ch, \t).


int main(){
	int sum[], int m;
	for (int i = 0; i< m ; i++){
		scanf ("%d", &sum[i]);
	}
	
	    int i, j, k;
    for(i = 0; i <= 9; i++)
        for(j = 0; j <= 9; j++)
            for(k = 0; k <= 9; k++){
                if(i == 0){
                    if(j == 0){
                        printf(" %d^1 = %d\n", k, k);
                    }
                    else{
                        if((10*j + k) == (pow((float)j, 2)+pow((float)k, 2)))
                        printf(" %d^2 + %d^2 = %d\n", j, k, 10*j+k);
                    }
                }
                else{
                    if((100*i + 10*j + k) == (pow((float)i, 3) + pow((float)j, 3) + pow((float)k, 3)))
                    printf(" %d^3 + %d^3 + %d^3 = %d\n", i, j, k, 100*i + 10*j + k);
                }
            }
    return 0;
    
    
//	C�c h�m s? l� x�u k� t?. (c�c h�m n�y n?m trong thu vi?n string.h)
//
//Int strlen(char *s) tr? v? d? d�i c?a x�u s;
//Char *strupr(char *s) d?i ch? thu?ng trong x�u s sang ch? hoa.
//Char *strlwr(char *s) d?i ch? hoa sang ch? thu?ng.
//Char *strcat(char *s1, char *s2) n?i x�u s2 v�o x�u s1;
//Int strcmp(char *s1, char *s2) cho gi� tr? �m n?u x�u s1 nh? hon x�u s2. V� cho gi� t? duong n?u x�u s1 l?n hon x�u s2. Tr? v? gi� tr? b?ng 0 n?u x�u s1 b?ng x�u s2.
//Int strcmpi (char *s1, char *s2) so s�nh 2 x�u nhung kh�ng ph�n bi?t ch? thu?ng v� ch? hoa.
//Char *strcpy(char *s1, char *s2) copy x�u s2 v�o x�u s1.
//Char *strncpy(char *s1, char *s2, int n) sao ch�p n k� t? d?u c?a x�u s2 sang x�u s1
//Char *strnset(char *s ,int c, int n) d�ng d? sao ch�p n l?n k� t? c v�o x�u s.
//Char *strstr(char *s1, char *s2) t�m s? xu?t hi?n c?a x�u s2 trong x�u s1. N?u t�m th?y h�m cho d?a ch? c?a x�u con trong x�u s1. Tr�i l?i cho NULL.
//Char *strrev(char *s) d�ng d?o ngu?c x�u s.N?u th�nh c�ng h�m cho d?a ch? x�u d� d?o.
//C�ch x�a k� t? trong x�u. Trong C kh�ng c� h�m x�a nhung ta c� th? x�a b?ng c�ch copy d?a ch? c?a k� t? sau d� l�n d?a ch? c?a k� t? tru?c. VD ta c� x�u ht = �Nguyen Van A�, mu?n x�a k� t? �uy� ta l�m nhu sau: strcpy(&ht[2],&ht[4]);

	return 0;
}

