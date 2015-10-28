#include <stdio.h>
#include <stdlib.h>
int main(){
//dienstag 9-11 angela pohl sprechstunde en630
int **super=malloc(sizeof(int)*80);
printf("size of pointer:%lu\n", sizeof(char**));
printf("Adressen der Pointer:\n");
for(int i=0;i<10;i++){
super[i]=malloc(sizeof(int)*10);
printf("super[%d]: %p\n",i,&super[i]);}
for(int i=0;i<10;i++){
	for(int j=0;j<10;j++){
	super[i][j]=i;
	printf("super[%d][%d]:%d\n",i,j,super[i][j]);	}}
for(int i=0;i<10;i++){
	for(int j=0;j<10;j++){
	
	printf("super[%d][%d]:%p\n",i,j,&super[i][j]);	
}}

for(int i=0;i<10;i++){
free(super[i]);}
free(super);
return (0);}
