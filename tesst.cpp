#include <stdio.h>


int partition(int *a,int start,int end)

{

int pivot=a[start],p1=start+1,i,temp;

for(i=start+1;i<=end;i++)
{

if(a[i]<pivot)
    {
        if(i!=p1)
      {  
            temp=a[p1];
            a[p1]=a[i];
            a[i]=temp;
      }    p1++;
    }
}

        a[start]=a[p1-1];
        a[p1-1]=pivot;
	
	for (int x=0 ; x<11; x++)
			printf("%4d", a[x]);
			printf("\n\n");
return p1-1;
}

  void quicksort(int *a,int start,int end)
{
 int p1;
 if(start<end)
{
    p1=partition(a,start,end);
    quicksort(a,start,p1-1);
    quicksort(a,p1+1,end);
}
}

int main(){

		int a[11] = {30,19,24,28,41,34,15,43,20,12,36};
	quicksort(a, 0, 10);
	for (int x=0 ; x<11; x++)
			printf("%4d", a[x]);
	return 0;
}

