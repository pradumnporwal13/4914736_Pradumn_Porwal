#include <stdio.h>

struct Student
{
    int id;
    char name[40];
    float score;
};

int main()
{
    struct Student s1;
    s1.id = 21244;
    sprintf(s1.name, "Pradumn");
    s1.score = 7.82;

    printf("ID of Student %s is %d who scored %f", s1.name, s1.id, s1.score);
    return 0;
}