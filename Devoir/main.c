#include <stdio.h>
#include <stdlib.h>

int main()
{
   int MaxL;
   int Maxl;
   int i=1;
   int j=1;

   printf("Saisir la Longueur\n");
        scanf("%d",&MaxL);
   printf("Saisir la largeur\n");
        scanf("%d",&Maxl);


for(i=1; i<=Maxl; i++)
{
for(j=1; j<=MaxL; j++)
{
    if(j==1 || j==MaxL || i==1 || i==Maxl){
        printf("+");
}
    else{
        printf(" ");
}
}
    printf("\n");





}
return 0;
}

