#include <stdio.h>

struct Employee{
    int EmpID;
    char EmpName[30];
    float Salary;
};

int main(){

    struct Employee e1 = {4914736, "Pradumn", 4.2} ;
    printf("Employee %s with EmpID %d having salary of %f",e1.EmpName,e1.EmpID,e1.Salary);

    return 0;
}