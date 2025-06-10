#include<stdio.h>

int main(){
	int n;
	
	printf("digite 2024: ");
    scanf("%d",&n);
    
    if (n == 2024)
    {
        printf("parabens vc digitou %d",n); 
    }
    
   else
   {
    do{
        printf("digite 2024: "); 
        scanf("%d",&n);
    } while(n != 2024);{
      printf("parabens vc digitou %d",n); }    
}
   
        
    
}
