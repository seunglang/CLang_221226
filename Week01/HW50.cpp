#include <string.h>
#include <stdio.h>
int main(void)
{
    char* s[] = "This is a string";
    char* ptr1, * ptr2;
    char c1 = 'r', c2 = 's';
    ptr1 = strchr(s, c1);
    ptr2 = strrchr(s, c2);
    printf("s : %s\n", s);
    printf("strchr의 결과 \n");
    if (ptr1)
        printf("문자 %c와 일치하는 첫 번째 위치 %d\n", c1, ptr1 - s);
    printf("strrchr의 결과 \n");
    if (ptr2)
        printf("문자 %c와 일치하는 마지막 위치 %d\n", c2, ptr2 - s);
    return 0;
}