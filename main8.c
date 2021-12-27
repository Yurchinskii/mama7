#include <stdio.h>
#define array_size 5
int main(){
FILE *fOut,*fIn;
int temp[array_size]={1,2,3,4,5};
int temp2[array_size];
int i,a;

 printf("First array :");
 fOut= fopen("output.txt","w");
 for (i=0;i<array_size;i++){
   fprintf(fOut,"%3d",temp[i]);
   printf("%3d",temp[i]);}
 fclose(fOut);
 printf("\n");
 
 printf("Second array before reading: ");
 for (i=0;i<array_size;i++){
   printf("3%d",temp2[i]);}
 printf("\n");

 printf("Second array after reading: " );
 fIn=fopen("output.txt","r");
 for (i=0;i<array_size;i++){
   a=temp2[i];
   fscanf(fIn,"%d",&a);
   printf("%d ",a);}
 fclose(fIn);}




