#include<stdio.h>
#include<string.h>
#define Yes "Yes"
#define No "No"

int main() {
    char XuanZe[4];

    printf("你喜欢敲代码吗？\n");
    printf("请输入Yes or No\n");
    scanf("%s",XuanZe);

    if (strcmp(XuanZe,No)== 0)
        printf("请出门左拐\n");
    if (strcmp(XuanZe,Yes)== 0)
    {   printf("那么请问你喜欢穿女装吗？\n");
        printf("请输入Yes or No\n");
        scanf("%s",XuanZe);
        if (strcmp(XuanZe,No)== 0)
        {
            printf("Warning:程序员不穿女装会写出大量BUG\n");
            printf("我们不欢迎你，寨见\n");
        }
        else if (strcmp(XuanZe,Yes)== 0)
            printf("欢迎加入阿尔法ACM协会\n");
    }

    return 0;
}
