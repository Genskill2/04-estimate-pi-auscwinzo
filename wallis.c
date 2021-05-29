#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include<cs50.h>

//float wallis_pi(int);
float Wallis_pi(int n){
    float k=1;

   while(n>=1){
         k=((float)(4*n*n)/(4*n*n-1))*k;
         n--;
         
         

        

    }

    

}

int main(){
  int j=get_int("enter the value of n:");
  float i= Wallis_pi(j);
  printf("%f",i*2);

}