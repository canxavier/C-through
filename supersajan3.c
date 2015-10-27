#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
   int c;
   FILE *datei;
	char *eingabearray=malloc(1);
	char **command=malloc(100);
for (int j=0;j<10;j++){
command[j]=malloc(100);

}
	char **c_through=malloc(100);
for (int j=0;j<10;j++){
c_through[j]=malloc(100);

}
command[3]="printf";
c_through[3]="\n\nprintf\n-------------------------------------------------------------\n|printf ist eine Funktion die einfach Killah ist.\n|Sie ist einfach hand zu haben und super cool!\n----------------------------------------------------------";
scanf("%s",eingabearray);

for(int i = 0;i<4;i++){
if(strcmp(eingabearray,command[i])==0){

printf("%s",c_through[i]);

}
}
  /* datei=fopen("test.txt","r");
	char *array;
 if(datei != NULL)
      {
         while((c=fgetc(datei))!= EOF)
           printf("%c",c);
	
      }*/

 return 0;
}
