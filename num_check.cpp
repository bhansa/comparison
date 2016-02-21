#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;
int main()
{
  clock_t tStart = clock();
  int i,j,k;
  for(i=0;i<=20;i++){
    for(j=20;j<=800;j++){
      for(k=800;k<=1500;k++){
        cout<<i<<" "<<j<<" "<<k<<endl;
      }
    }
   }
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
  }
