/*
 * @Author: oneboyi
 * @Date: 2021-11-30 21:16:14
 * @LastEditors: oneboyi
 * @LastEditTime: 2021-11-30 22:11:19
 * @Description: 1004,balloon
 */
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
string a[1005];
bool flag[1005];
int num[1005];
int main(void)
{
    int n,i,j;
    int max=-0x3f3f3f3f;
    int maxi = 0;
    while(scanf("%d",&n)!=EOF)
    {
        memset(num, 0, sizeof(num));
        for (i = 1; i <= n;i++)
            cin >> a[i];
        for (i = 1; i <= n; i++)
        {
            if(!flag[i])
            {
                for (j = i + 1; j <= n;j++)
                {
                    if(a[i]==a[j])
                    {
                        num[i]++;
                        flag[j] = true;
                    }
                }
            }
        }
        for (i = 1; i <= n;i++)
        {
            if(num[i]>max)
            {
                maxi=i;
                max = num[i];
            }
        }
        cout << a[maxi] << endl;
    }
    return 0;
}
