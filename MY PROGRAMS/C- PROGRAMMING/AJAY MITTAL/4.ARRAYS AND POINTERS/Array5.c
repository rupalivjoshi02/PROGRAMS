/* A program to illustarte that ptr to any type implicitely gets converted to void *. */


int main()
{
	int a=10;
	int *ip=&a;
	void *vp=ip;

	printf("int* is implicitely converted to void.");

	return(0);
} 
