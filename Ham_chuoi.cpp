#include <stdio.h>

//Các hàm ki?m tra ký t?. (các hàm này trong thu vi?n ctype.h) N?u dúng thì hàm cho giá tr? khác 0. N?u sai thì hàm cho giá tr? b?ng 0.
//
//Int isalpha(int c) : ki?m tra ký t? có là ch? cái không.
//Int isdigit(int c) : ki?m tra xem ký t? có là ch? s? không.
//Int islower(int c): ki?m tra ký t? có là ch? thu?ng không.
//Int isupper(int c): ki?m tra ký t? có là ch? hoa không.
//Int ispace(int c): ki?m tra ký t? có là tr?ng không (\n, d?u cách, \t).


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
    
    
//	Các hàm s? lý xâu ký t?. (các hàm này n?m trong thu vi?n string.h)
//
//Int strlen(char *s) tr? v? d? dài c?a xâu s;
//Char *strupr(char *s) d?i ch? thu?ng trong xâu s sang ch? hoa.
//Char *strlwr(char *s) d?i ch? hoa sang ch? thu?ng.
//Char *strcat(char *s1, char *s2) n?i xâu s2 vào xâu s1;
//Int strcmp(char *s1, char *s2) cho giá tr? âm n?u xâu s1 nh? hon xâu s2. Và cho giá t? duong n?u xâu s1 l?n hon xâu s2. Tr? v? giá tr? b?ng 0 n?u xâu s1 b?ng xâu s2.
//Int strcmpi (char *s1, char *s2) so sánh 2 xâu nhung không phân bi?t ch? thu?ng và ch? hoa.
//Char *strcpy(char *s1, char *s2) copy xâu s2 vào xâu s1.
//Char *strncpy(char *s1, char *s2, int n) sao chép n ký t? d?u c?a xâu s2 sang xâu s1
//Char *strnset(char *s ,int c, int n) dùng d? sao chép n l?n ký t? c vào xâu s.
//Char *strstr(char *s1, char *s2) tìm s? xu?t hi?n c?a xâu s2 trong xâu s1. N?u tìm th?y hàm cho d?a ch? c?a xâu con trong xâu s1. Trái l?i cho NULL.
//Char *strrev(char *s) dùng d?o ngu?c xâu s.N?u thành công hàm cho d?a ch? xâu dã d?o.
//Cách xóa ký t? trong xâu. Trong C không có hàm xóa nhung ta có th? xóa b?ng cách copy d?a ch? c?a ký t? sau dè lên d?a ch? c?a ký t? tru?c. VD ta có xâu ht = “Nguyen Van A”, mu?n xóa ký t? “uy” ta làm nhu sau: strcpy(&ht[2],&ht[4]);

	return 0;
}

