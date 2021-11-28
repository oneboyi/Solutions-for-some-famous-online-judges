/*
 * @Author: oneboyi
 * @Date: 2021-11-25 21:58:50
 * @LastEditTime: 2021-11-28 21:56:22
 * @LastEditors: oneboyi
 */
#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main(void)
{
    int n,j,i,num,a,ans,tmax,start,end,t;
    cin >> n;
    for (i = 1; i <=n;i++)
    {
        cin >> num;
        tmax = 0;
        start = end = 1;
        ans = -0x3f3f3f3f;
        t = 0;
        for (j = 1; j <= num;j++)
        {
            cin >> a;
            tmax += a;
            if(ans<tmax)
            {
                ans=tmax;
                end = j;
                start = t + 1;
            }
            if(tmax<0)
            {
                tmax = 0;
                t = j;
            }
        }
        printf("Case %d:\n%d %d %d\n", i, ans, start, end);
        if(i!=n)
            cout << endl;
    }
    return 0;
}
