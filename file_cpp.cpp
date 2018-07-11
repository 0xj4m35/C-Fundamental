#include<stdio.h>
#include<string.h>

int main()
{
    FILE *f;
    f= fopen("input.txt","a+");
    char s[100]; 
    if(f!=NULL)
    {
        printf("Mo tep xong \n");
        //fprintf(f,"\n%s\n","Chao cac ban!");
       while (!feof(f))
       {
            fflush(stdin);                      
            fgets(s,50,f);
            printf("%s",s);
       }

       rewind(f);
       while(fscanf(f,"%30[^\n]%*c",s)!=EOF)
        {
         printf("%s\n",s); 
            
        }
        fclose(f);
    }
    else
        printf("Loi mo tep \n");   
    return 0;
    
}
