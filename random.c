// 
// prints the first N values of the generator
// usage: random N


#include <stdio.h>
#include <math.h>
#include <stdlib.h>




int main(int nbOfPars, char **pars)
{

  long N;
    long i;
    double sum=0;
    double value;
    

    N = atol(pars[1]);

	   for (i=1;i<=N;i++)
	     {
             value = drand48();
             printf("%ld-th generated value is = %lf\n",i , value);
	      sum += value;
	     }

	   printf("\n\n The average value for N=%ld is: %.4e\n\n",N, sum/N);
}
