//http://codeforces.com/problemset/problem/275/A
#include<stdio.h>

int main()
{
    int i,j,arr[5][5];
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            arr[i][j] = 0;
        }
    }
    for(i=1; i<=3;i++)
        for(j=1;j<=3;j++)
            scanf("%d",&arr[i][j]);
    int tmp;
    for(i=1; i<=3; i++){
        for(j=1; j<=3; j++){
            tmp = arr[i][j]+arr[i][j-1]+arr[i][j+1]+arr[i+1][j]+arr[i-1][j];
            if(tmp%2==0)printf("%d",1);
            else printf("%d", 0);
        }
        printf("\n");
    }
    //scanf("%c");
    return 0;
}
