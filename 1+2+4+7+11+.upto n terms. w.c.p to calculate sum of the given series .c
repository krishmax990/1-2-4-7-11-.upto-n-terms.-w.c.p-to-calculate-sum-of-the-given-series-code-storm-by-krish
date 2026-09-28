// 1+2+4+7+11+.upto n terms. w.c.p to calculate sum of the given series 

#include <stdio.h>

int main() {
    int n;
    int i = 1;       
    int term = 1;    
    int increment = 1; 
    int sum = 0;      

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    while (i <= n) {
        sum += term;        
        term += increment;  
        increment++;       
        i++;               
    }
    printf("The sum of the series up to %d terms is: %d\n", n, sum);
    return 0;
}

