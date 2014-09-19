#include<stdio.h>
#include<stdlib.h>

int main(){

  int n, array[100],temp;

  printf(" Enter number of numbers\n");
  scanf("%d",&n);
  printf(" Enter %d numbers\n",n);
  
  for(int i=0; i<n; i++) scanf("%d", &array[i]);

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n-1; j++)
    {
      if(array[j] > array[j+1])
      {
        temp = array[j+1];
        array[j+1] = array[j];
        array[j] = temp;
      }
    }
  }

  for(int k=0; k<n; k++) printf("%d",array[k]);
  printf("\n");

  return 0;
}

