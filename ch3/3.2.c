#include<Stdio.h>
int main()
{
    float basic_salary,total;
    float HRA,DA;

    printf("enter the basic salary\n");
    scanf("%f",&basic_salary);

    if(basic_salary<1500)
    {
        HRA=(10/100)*basic_salary;
        DA=(90/100)*basic_salary;
    }
    else
    {


        HRA= 500;
        DA=98/100*basic_salary;
    }

 total= basic_salary+HRA+DA;
        printf("%f",total);
}




