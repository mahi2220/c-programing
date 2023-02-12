#include<stdio.h>
#include<stdlib.h>
int main(){
   int a[100],i,j,k, count = 0, dup[100], n;
   printf("Enter number of component :\n");
   scanf("%d",&n);
   printf("Enter %d component :", n);
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      dup[i] = -1;
   }
   printf("Entered element are:\n");
   for(i=0;i<n;i++){
      printf("%d ",a[i]);
   }
   for(i=0;i<n;i++){
      for(j = i+1; j < n; j++){
         if(a[i] == a[j]){
            for(k = j; k <n; k++){
               a[k] = a[k+1];
            }
            j--;
            n--;
         }
      }
   }
  printf("\nafter deleting the duplicate array are:\n");
   for(i=0;i<n;i++){
      printf("%d ",a[i]);
   }
int max,min;


   max = a[0];
   for(i=1;i<n;i++)
   {
       if(max<a[i])
        max= a[i];
   }
   printf("\nmaximum = %d\n",max);
    min = a[0];
   for(i=1;i<n;i++)
   {
       if(min>a[i])
        min= a[i];
   }
   printf("minimum = %d\n",min);
   return 0;
}
