//
//  assignment_operators.c
//  
//
//  Created by Syvanonh Boualaphanh on 10/3/22.
//

#include <stdio.h>

int main(){
    int A,B,C;
    
    printf("\nEnter A: ");
    scanf("%d",&A);
    
    printf("\nEnter B: ");
    scanf("%d",&B);
    
    A+=B;
    printf("\nA += B = %d\n",A);
    A-=B;
    
    A-=B;
    printf("\nA -= B = %d\n",A);
    A+=B;
    
    A*=B;
    printf("\nA *= B = %d\n",A);
    A/=B;
    
    A/=B;
    printf("\nA /= B = %d\n",A);
    A*=B;
    
    A%=B;
    printf("\nA %%= B = %d\n",A);
    
    B<<=2;
    printf("\nB <<= 2 = %d\n",B);
    B>>=2;
    
    B>>=2;
    printf("\nB >>= 2 = %d\n",B);
    B<<=2;
    
    B&=10;
    printf("\nB &= 10 = %d\n",B);
    
    B^=10;
    printf("\nB ^= 10 = %d\n",B);
    
    B|=10;
    printf("\nA |= 10 = %d\n",B);
    
    return 0;
}
