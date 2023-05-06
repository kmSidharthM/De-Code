#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
    int ch,m,n,flag=1;
    char text[100];
    int secCode[100];
    cout<<"\n\n************************************DE-CODE************************************\n\n";
    while(flag==1)
    {
    cout<<"WHAT TO DO:\n1->CODE\n2->DECODE\nENTER VALUE:";
    cin>>ch;
    if(ch==1)
    {   
        cout<<"ENTER THE TEXT:";
        cin.ignore();
        gets(text);
        cout<<"\nTHE CODE IS READY.......\n";
        for(int i=0;text[i]!='\0';i++)
            cout<<(int)toupper(text[i])-9;
    }
    else if(ch==2)
    {
        cout<<"ENTER THE CODE:";
        cin.ignore();
        gets(text);
        int a;
        cout<<"THE SECRET TEXT IS READY........\n";
        for(int i=0;text[i]!='\0';i+=2)
        {   
        m=text[i]-'0';
        n=text[i+1]-'0';
        a=m*10+n;
        cout<<(char)(tolower(a+9));
        }
    }
    else 
    {
        cout<<"INVALID INPUT";
    }
    cout<<"\nDO YOU WANT TO CONTINUE(1/0):";
    cin>>flag;
    }
    cout<<"\n\n************************************THANKYOU************************************\n\n";
    return 0;
}
