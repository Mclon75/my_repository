/*  cosn = 2 * cox(pi/ 2^(n+1)) 
	fn= (fn-1 + 2)^0.5,	f1 = 2^0.5 
	计算前二十个 
*/	
#include <stdio.h>
#include <math.h>
# define PI 3.14159
int main()
{
	double cosn, fn;
	int i;
	fn = pow(2, 0.5);
	for (i = 1; i <= 20; i++)
	{
		printf("n = %d:	", i);
		printf("fn = %lf  ", fn);
		cosn = 2 * cos( PI / pow(2, i+1) );
		printf("cosn = %lf\n", cosn);
		fn += 2;
		fn = pow(fn, 0.5);
		
	}
	
	return 0;
}

