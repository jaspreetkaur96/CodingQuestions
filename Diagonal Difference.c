#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,s1=0,s2=0,s; 
    scanf("%d",&n);
    int a[n][n];
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
          
          scanf("%d",&a[i][j]);
       }
    }
    
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
          if(i==j)
              s1 = s1 + a[i][j];
       
         if(i+j == n-1)
            s2 = s2 + a[i][j];
       }     
    }
    s = abs(s1-s2);
    printf("%d",s);
    
    return 0;
        
}
