/* Write a program which accept matrix and check whether the matrix is Sparse matrix or not.

Sparse matrix is a matrix with the majority of its elements equal to zero.

Input:	irow:4	icol:4

	1 0 3 0
	0 6 0 0 
	0 0 1 0
	9 0 0 9

Output:	YES

*/




// Header.h


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Bool(int **arr,int,int);
