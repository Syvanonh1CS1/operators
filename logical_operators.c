//
//  logical_operators.c
//  
//
//  Created by Syvanonh Boualaphanh on 9/3/22.
//

#include <stdio.h>

int main(){
    int A,B;
    
    printf("\nEnter '1' for true, '0' for false,\nA: ");
    scanf("%d",&A);
    
    printf("\nEnter B: ");
    scanf("%d",&B);
    
    if (A&&B){
        printf("\nA && B is true.\n");
    }else{
        printf("\nA && B is false.\n");
    }
    
    if (A||B){
        printf("\nA || B is true.\n");
    }else{
        printf("\nA || B is false.\n");
    }
    
    if (!(A&&B)){
        printf("\n!(A&&B) is true.\n");
    }else{
        printf("\n!(A&&B) is false.\n\n");
    }
    
    return 0;
}
