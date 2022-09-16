 #include <iostream>

 double power_n (double d, unsigned n)
 {
   double x = 1.0;

   for (int j = 1; j <= n; j++)
   {
       x *= d;
   }

   return x;
 }

 int main ()
 {
   double sum = 0.0;

   for (int i = 1; i <= 100000000; i++)
     {
       sum += power_n (i, i % 5);
     }

   std::cout << "sum=" << sum << std::endl;
   return 0;
 }