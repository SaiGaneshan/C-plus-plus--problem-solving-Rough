#include<iostream>
using namespace std;

bool checkprimenumber(int number)
{
    if(number==1)
    {
        cout<<"Its not a prime number!"<<endl;
    }
    else
    {
        for(int i=2;i<number;i++)
       {
           if(number%i==0)
           {
                return false;
           }  
        }
    return true;
    }
}

int rangeprimenumber(int start,int end)
{
    for(int i=start;i<=end;i++)
    {
        if(i==1)
        {
            cout<<"its not a prime number =1"<<endl;
        }
        else
        {
            int result = checkprimenumber(i);
            if(result)
            {
                cout<<"its a prime number="<<i<<endl;
            }
            else
            {
                cout<<"its not a prime number = "<<i<<endl;
            } 
        }
    }

}

int main()
{
    int start;int end;
    cout<<"start and end = ";
    cin>>start>>end;
    rangeprimenumber(start,end);
}