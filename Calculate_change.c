#include <stdio.h>
int get;
int ram_get;
int bill_num1000;
int bill_num500;
int bill_num100;
int bill_num50;
int bill_num20;
int bill_num10;
int bill_num5;
int bill_num2;
int bill_num1;
int main(){

printf(">>>");
scanf("%d",&get);
for (bill_num1000 = 0; get >= 1000; bill_num1000++)
{
get = get - 1000;
}

for (bill_num500 = 0; get >= 500; bill_num500++)
{
get = get - 500;
}

for (bill_num100 = 0; get >= 100; bill_num100++)
{
get = get - 100;
}
for (bill_num50 = 0; get >= 50; bill_num50++)
{
get = get - 50;
}
for (bill_num20 = 0; get >= 20; bill_num20++)
{
get = get - 20;
}
for (bill_num10 = 0; get >= 10; bill_num10++)
{
get = get - 10;
}
for (bill_num5 = 0; get >= 5; bill_num5++)
{
get = get - 5;
}
for (bill_num2 = 0; get >= 2; bill_num2++)
{
get = get - 2;
}
for (bill_num1 = 0; get >= 1; bill_num1++)
{
get = get - 1;
}

printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",bill_num1000,bill_num500,bill_num100,bill_num50,bill_num20,bill_num10,bill_num5,bill_num2,bill_num1);
printf("\n\n%d",get);


    return 0;
}