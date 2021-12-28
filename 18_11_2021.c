#include <stdio.h>
float calc_avg(int *p);//fn declaration
float calc_avg(int *p)//fn definition
{
int i,s=0;float a;
for (i=1; i<=5;i++)
{ s=s+ *p;
p++;
}
a=s/5;
return a;
}
int main()
{ //passing array to a function
int x[]={10, 20, 30, 40, 50};
float averg;
// averg=calc_avg(x);//fn call
averg=calc_avg(&x[0]);//fn call
printf("Average of numbers is %f", averg);

return 0;
}