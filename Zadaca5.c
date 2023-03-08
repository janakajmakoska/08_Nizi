#include <stdio.h>
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selekcija(int niza[],int n){
    int i,min_idx,j;
    for(i=0;i<n-1;i++)
    {
        min_idx = i;
        for(j=1;j<n;j++)
        {
            if (niza[j] < niza[min_idx])
            {
                min_idx = j;
       
            }
            
        
        }
       swap(&niza[min_idx], &niza[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",niza[i]);
    }

}
int main ()
{
    int n,i,niza[100];
    printf("Vnesi kolku elementi ke ima nizata\n");
    scanf("%d",&n);
    printf("vnesi gi elementite\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&niza[i]);
    }
    selekcija(niza,n);
    return 0;
}