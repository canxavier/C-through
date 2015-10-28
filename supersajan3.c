#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
int anzahlcommands=1;
char *eingabearray=malloc(100);
char **command=malloc((sizeof(char**))*8);
char **c_through=malloc((sizeof(char**))*8);




command[0]="printf";
c_through[0]="\n\nprintf\n -------------------------------------------------------------\n|printf ist eine Funktion die einfach Killah ist.            |\n|Sie ist einfach hand zu haben und super cool!               |\n -------------------------------------------------------------\n";
scanf("%s",eingabearray);

for(int i = 0;i<anzahlcommands;i++){
if(strcmp(eingabearray,command[i])==0){

printf("%s",c_through[i]);}}

free(eingabearray);
free(command);

free(c_through);



 return (0);}
