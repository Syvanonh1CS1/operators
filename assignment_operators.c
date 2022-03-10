//
//  assignment_operators.c
//  
//
//  Created by Syvanonh Boualaphanh on 10/3/22.
//

#include <stdio.h>

int main(){
    int A,B,C,D;
    
    printf("\nEnter A: ");
    scanf("%d",&A);
    
    printf("\nEnter B: ");
    scanf("%d",&B);
    
    C=A;
    A+=B;
    printf("\nA += B = %d\n",A);
    A=C;
    
    A-=B;
    printf("\nA -= B = %d\n",A);
    A=C;
    
    A*=B;
    printf("\nA *= B = %d\n",A);
    A=C;
    
    A/=B;
    printf("\nA /= B = %d\n",A);
    A=C;
    
    A%=B;
    printf("\nA %%= B = %d\n",A);
    A=C;
    
    D=B;
    B<<=2;
    printf("\nB <<= 2 = %d\n",B);
    B=D;
    
    B>>=2;
    printf("\nB >>= 2 = %d\n",B);
    B=D;
    
    B&=10;
    printf("\nB &= 10 = %d\n",B);
    B=D;
    
    B^=10;
    printf("\nB ^= 10 = %d\n",B);
    B=D;
    
    B|=10;
    printf("\nB |= 10 = %d\n",B);
    
    return 0;
}
