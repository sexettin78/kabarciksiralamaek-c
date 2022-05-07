#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){

srand((int) time(0));
int dizi[100], s, x, y, t, i, v;

for(i=0;i<13;i++){
	v = 1+rand()%100;
	dizi[i] = v;
}

printf("dizinin sirasiz hali: \n");
for(i=0;i<13;i++){
	printf("%d ",dizi[i]);
}

  for (x = 0 ; x < 12; x++)
  {
    for (y = (x+1) ; y < 13; y++)
    {
      if (dizi[x] > dizi[y])
      {
        t = dizi[x];
        dizi[x]   = dizi[y];
        dizi[y] = t;
      }
    }
  }
printf("\ndizinin sirali hali: \n");
for(i=0;i<13;i++){
	printf("%d ",dizi[i]);
}
printf("\nDizinin en kucuk elemani=%d \nDizinin en buyuk elemani=%d",dizi[0],dizi[12]);
	
	
}
