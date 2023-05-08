#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	for(int i=1;i<=n;i++){
          if(i%2==0){
            for (int j=1;j<=5;j++)
            {
                printf("*");
            }
            printf("\n");
          }
          else{
            printf(" ");
            for (int j=1;j<=5;j++)
            {
                printf("#");
            }
            printf("\n");
          }
      }
    return 0;
}