TABLE 2-1
calculation of the mean and standard deviation

#include "reg51.h"
#include "math.h"
main()
{
   int    k, n = 512;
   double mean, veriance, sd;
   char   x[511];
   while (1)
   {
      for (k = 0; k < n; k++)
      {
         mean = mean + x[k];
      }
      for (k = 0; k < n; k++)
      {
         veriance = veriance + pow((x[k] - mean), 2);//pow（）计算平方函数
      }
      veriance = veriance / (n - 1);
      sd       = sqrt(veriance);//sqrt（）计算平方根函数
   }
}

TABLE 2-2
mean and standard deviation using running statistics

#include "reg51.h"
#include "math.h"
main()
{
    int    k, n = 0, sum = 0;
    double sumsquares, mean, veriance, sd;
    char   x[511];
	while (1)
	{
		for (k = 0; k < 512; k++)
		{
			n          = n + 1;
			sum        = sum + x[k];
			sumsquares = sumsquares + pow(x[k], 2)
			mean       = sum / n;
			variance   = (sumsquares - pow(sum, 2) / n) / (n - 1);
			sd         = sqrt(veriance);//sqrt（）计算平方根函数
		}
	}
}
