//
//  arithmetic_operators.c
//  
//
//  Created by Syvanonh Boualaphanh on 4/3/22.
//

#include <stdio.h>

int main(){
    int A,B,C;
    
    printf("\nEnter A: ");
    scanf("%d",&A);
    
    printf("\nEnter B: ");
    scanf("%d",&B);
    
    C=A+B;
    printf("\nC = A + B = %d\n",C);
    
    C=A-B;
    printf("\nC = A - B = %d\n",C);
    
    C=A*B;
    printf("\nC = A * B = %d\n",C);
    
    C=A/B;
    printf("\nC = A / B = %d\n",C);
    
    C=A%B;
    printf("\nC = A % B = %d\n\n",C);
    
    return 0;
}
