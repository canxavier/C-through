#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
int anzahlcommands=2; //Anzahl der Erklärungen
char *eingabearray=malloc(100);//hier wird die Nutzereingabe gespeichert
char ***command=malloc((sizeof(char**))*anzahlcommands); //Hier werden die Keywords mit Index abgelegt.
char **c_through=malloc((sizeof(char**))*anzahlcommands);//Hier werden die Erklärungen mit Index gespeichert.
char *nullstring="0";
command[0]=malloc((4+1)*8);
command[0][0]="printf";
command[0][1]="Printf";
command[0][2]="printf()";
command[0][3]="Printf()";
command[0][4]="0";

c_through[0]="\n\n\
******************************************************************************\n\
*printf                                                                      *\n\
*                                                                            *\n\
*Beispiel: printf(\"Hallo Welt\");                                             *\n\
*                                                                            *\n\
*                                                                            *\n\
* Erklärung:                                                                 *\n\
* printf gibt die Zeichenkette, die zwischen den Anführungszeichen steht     *\n\
* aus.                                                                       *\n\
*                                                                            *\n\
*                                                                            *\n\
*                                                                            *\n\
*                                                                            *\n\
******************************************************************************\n";
command[1]=malloc((2+1)*8);
command[1][0]="scanf";
command[1][1]="Scanf";
command[1][2]="0";
c_through[1]="\n\n\
******************************************************************************\n\
*scanf                                                                       *\n\
*                                                                            *\n\
*Beispiel:                                                                   *\n\
*int Ziel;                                                                   *\n\
*    scanf(\"%d\",Ziel);                                                       *\n\
*                                                                            *\n\
*Erklärung:                                                                  *\n\
*scanf fordert den Benutzer des Programms dazu auf eine Eingabe zu machen.   *\n\
*In diesem Fall eine Ganzzahl(Int). Diese wird dann in Ziel gespeichert      *\n\
*                                                                            *\n\
*                                                                            *\n\
*                                                                            *\n\
******************************************************************************\n";
scanf("%s",eingabearray);
int n;
for(int i = 0;i<anzahlcommands;i++){
	for(int j=0;(strcmp(command[i][j],nullstring))!=0;j++){
if(strcmp(eingabearray,command[i][j])==0){

printf("%s",c_through[i]);}}}
printf("%lu",sizeof(command[1]));
free(eingabearray);
free(command[0]);
free(command[1]);
free(command);
free(c_through);
return (0);}
