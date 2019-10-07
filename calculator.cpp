#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
float a,b;
int opt;
while(1)
{
cout<<"\nSelect option number: ";
cout<<"\n1.Add\n2.Subtract\n3.Divide\n4.Multiply\n5.Modulo\n6.XOR\n7.Exit\n";
cin>>opt;
switch(opt)
{
case 1: cout<<"Enter first and second value: ";
        cin>>a>>b;
        cout<<a+b;
        break;
case 2: cout<<"Enter first and second value: ";
        cin>>a>>b;
        cout<<a-b;
        break;
case 3: cout<<"Enter first and second value: ";
        cin>>a>>b;
        cout<<a/b;
        break;
case 4: cout<<"Enter first and second value: ";
        cin>>a>>b;
        cout<<a*b;
        break;
case 5: cout<<"Enter first and second value: ";
        cin>>a>>b;
        cout<<a%b;
        break;
case 6: cout<<"Enter first and second value: ";
        cin>>a>>b;
        cout<<a^b;
        break;
case 7: return 0;
}}}
