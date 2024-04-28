#include<stdio.h>
#include<math.h>
int main()
{
	float l1,l2,g1,g2, D;

	printf("Enter  the values of lattitude l1,l2\n ");
	scanf("%f%f", &l1, &l2);

	printf("\nEnter the values of longitude g1,g2\n ");
	scanf("%f%f", &g1, &g2);

	D = 3963*acos(sin(l1)*sin(l2) + cos(l1)*cos(l2)*cos(g2-g1));

	printf("Distance is %f", D);


}
