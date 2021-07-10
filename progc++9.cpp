#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>


using namespace std;
int main()
{
   system("cls");
    char ch,ch1;
    float l,b,per,area,dig;
    do
    {

        cout<<"\n"<<"retangle menu ";
        cout<<"\n"<<"1. Area";
        cout<<"\n"<<"2. perameter";
        cout<<"\n"<<"3. diagonal";
        cout<<"\n"<<"4. exit";
        cout<<"\nenter choice ";
        cin >>ch;
        if(ch=='1'||ch=='2'||ch=='3')
        {
            cout<<"\n"<<"enter length and breadth";
            cin>>l>>b;

        }
        switch(ch)
        {

            case '1' : area = l*b;
              cout<<"area :"<<area<<endl;
              break;

            case '2' : per  = 2*(l+b);
              cout<<"perameter :"<<per<<endl;
               break;

            case '3' : dig =  sqrt((l*l)+(b*b));
              cout<<"diagonal :"<<dig<<endl;
              break;
            case '4' : break;


            default : cout<<"wrong choice \n";
            break;

        }

        cout<<"pres a key to continue \n";
        ch1 = getchar();
    }
    while(ch>='1' && ch<='3');
    return 0;

    }
