/* Write a program which accept matrix and check whether the matrix is identity matrix or not.

Identity matrix is a square matrix with 1’s along the diagonal from upper left to lower right and 0’s in all other positions. If it satisfies the structure as explained before then the matrix is called as identity matrix.

Input:	irow:4	icol:4

	1 0 0 0
	0 1 0 0 
	0 0 1 0
	0 0 0 1

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
