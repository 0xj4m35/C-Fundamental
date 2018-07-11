#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] ="- This, - abc... --    xyz a sample string.";
  char * pch;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok (str," ,.-");
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, " ,.-");
  }
  return 0;
}

//#include <string.h>
//#include <stdio.h>
//
//int main()
//{
//   char str[80] = "Hoc C - co ban va nang cao - tai VietJack";
//   const char s[3] = "- ";
//   char *token;
//   
//   /* lay token dau tien */
//   token = strtok(str, s);
//   
//   /* duyet qua cac token con lai */
//   while( token != NULL ) 
//   {
//      printf( "%s\n", token );
//    
//      token = strtok(NULL, s);
//   }
//   
//   return(0);
//}
