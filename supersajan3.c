#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
int anzahlcommands=2;
char *eingabearray=malloc(100);
char **command=malloc((sizeof(char**))*anzahlcommands);
char **c_through=malloc((sizeof(char**))*anzahlcommands);




command[0]="printf";
c_through[0]="\n\n\
******************************************************************************\n\
*printf                                                                      *\n\
*                                                                            *\n\
*Beispiel: printf(\"Hallo Welt\");                                             *\n\
*                                                                            *\n\
*                                                                            *\n\
*                                                                            *\n\
*                                                                            *\n\
*                                                                            *\n\
*                                                                            *\n\
*                                                                            *\n\
*                                                                            *\n\
*                                                                            *\n\
******************************************************************************\n";
command[1]="scanf";
c_through[1]="\n\n\
******************************************************************************\n\
*scanf                                                                       *\n\
*                                                                            *\n\
*Beispiel:                                                                   *\n\
*int Ziel;                                                                   *\n\
*    scanf(\"%d\",Ziel);                                                       *\n\
*                                                                            *\n\
*                                                                            *\n\
*                                                                            *\n\
*                                                                            *\n\
*                                                                            *\n\
*                                                                            *\n\
*                                                                            *\n\
******************************************************************************\n";
scanf("%s",eingabearray);

for(int i = 0;i<anzahlcommands;i++){
if(strcmp(eingabearray,command[i])==0){

printf("%s",c_through[i]);}}

free(eingabearray);
free(command);

free(c_through);



 return (0);}
