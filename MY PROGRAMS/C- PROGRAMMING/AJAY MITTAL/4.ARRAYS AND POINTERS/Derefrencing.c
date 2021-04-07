/* A prgram to illustarte the derefrencing operatot. */


int main()
{
	int ino=12;
	int *ip=&ino;
	int **pp=&ip;

	printf("The value of ino is %d\n",ino);
	printf("The value of derefrencing ip is %d\n",*ip);
	printf("The value of derefrencing pp is %d\n",**pp);
	printf("The value of ip is %d\n",ip);
	printf("The value of pp is %d\n",pp);

	return(0);
}
