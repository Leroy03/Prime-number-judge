//
//  main.cpp
//  etutor
//
//  Created by Leroy on 02/04/2019.
//  Copyright © 2019 Leroy. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int prime[10000];
void create()               //create prime number table
{
    prime[0] = 2;
    int z = 1;

    for(int i = 3;i < 1000; i+=2)           //find out 1 to 1000 's prime number
    {
        bool flag = true;                   //flag to has factor
        for(int j = 2;j <= sqrt(i);j++)         //only need to check to square root
        {
            if(i % j == 0)
            {
                flag = false;              //Having factor
                break;
            }
        }
        if(flag)
            prime[z++] = i;
        
    }
}
/*
void print()
{
    for(int i = 0;i < 100;i++)
    {
        cout<<prime[i]<<" ";
        if(i % 10 ==0)
            cout<<endl;
    }
}
*/
void judge(int x)               //check entering number is in prime table or not
{
    bool flag = true;
    for(int i = 0;x >= prime[i];i++)
    {
        if(x == prime[i])
        {
            cout<<"YES"<<endl;
            flag = false;
            break;
        }
        
    }
    if(flag)
        cout<<"NO"<<endl;
}
int main() {
    
    create();
    int num;
    while(cin>>num)
        judge(num);
    

}
