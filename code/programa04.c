#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>  



int main(){
     int n, i, v[n], qtd=0, soma=0;  
      printf("numero de elementos dos vetores: ");
     scanf("%d", &n);
       
     for(i=0; i<n; i++)  
     {  
         printf("Informe o %d numero\n",i+1);  
         scanf("%d",&v[i]);   
           
          if(v[i] % 2 == 0)  
            {  
                 soma += v[i];  
                 qtd++;  
                    
            }                    
     }   
     printf("A soma dos numeros pares eh %d\n",soma);  
     
        return 0; 
} 
