# include <stdio.h>
# include <time.h>
void main()
{
int n,a[10000],i,j,temp,min;
clock_t st, et;
double ts;
printf("\n Enter the number of array elements: ");
scanf("%d", &n);
printf("\nThe Random Numbers are:\n");
for(i=0; i<n; i++)
{
a[i]=rand()%100+1;
printf("%d\t",a[i]);
}
st=clock();
for(i=0; i<=n-2; i++)
 {
 min = i;
 for(j=i+1; j<=n-1; j++)
 {
 if(a[j]<a[min])
 {
 min =j;
 }
 }
 temp =a[i];
 a[i]=a[min];
 a[min]=temp;
 }
et=clock();
ts=(double)(et-st)/CLOCKS_PER_SEC;
printf("\nSorted Numbers are: \n ");
for(i=0; i<n; i++)
{
printf("%d\t", a[i]);
}
printf("\nThe time taken is %lf",ts);
}
