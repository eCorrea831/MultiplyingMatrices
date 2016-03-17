//
//  main.c
//  14 - B
//
//  Created by Erica Correa on 2/2/16.
//  Copyright © 2016 Turn to Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int first_matrix[3][3] = {
        1, 2, 3,
        3, 2, 1,
        2, 1, 3
    };
    
    int second_matrix[3][3] = {
        4, 5, 6,
        6, 5, 4,
        4, 6, 5
    };
    
    //blank array that wil hold the multiplied matrix
    int final_matrix[3][3];
    
    //math behind the final matrix
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <=2; j++) {
            int sum = 0;
            for (int k = 0; k <= 2; k++) {
                sum = sum + first_matrix[i][k] * second_matrix[k][j];
            }
            final_matrix[i][j] = sum;
        }
    }
    
    //print the final matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %d ", final_matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
