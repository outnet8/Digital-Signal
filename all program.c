TABLE 2-1
100 CALCULATION OF THE MEAN AND STANDARD DEVIATION

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
