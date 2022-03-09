//
//  bitwise_operators.c
//  
//
//  Created by Syvanonh Boualaphanh on 9/3/22.
//

#include <stdio.h>

int main(){
    int A,B;
    
    printf("\nEnter A: ");
    scanf("%d",&A);
    
    printf("\nEnter B: ");
    scanf("%d",&B);
    
    printf("\nA & B = %d\n",A&B);
    
    printf("\nA | B = %d\n",A|B);
    
    printf("\nA ^ B = %d\n",A^B);
    
    printf("\n~A = %d\n",~A);
    
    printf("\nA << 2 = %d\n",A<<2);
    
    printf("\nA >> 2 = %d\n\n",A>>2);
    
    return 0;
}
