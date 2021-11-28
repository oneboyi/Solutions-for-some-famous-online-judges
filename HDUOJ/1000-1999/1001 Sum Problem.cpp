/*
 * @Author: oneboyi
 * @Date: 2021-11-23 17:26:20
 * @LastEditTime: 2021-11-28 20:44:55
 * @LastEditors: oneboyi
 */
#include<iostream>
 using namespace std;
 int main()
 {
     int num;
     int sum=0;
     while(cin>>num)
     {
         for(int i=1;i<=num;i++)
         sum+=i;
         cout<<sum<<"\n"<<"\n";
         sum=0;
     }
     return 0;
}
