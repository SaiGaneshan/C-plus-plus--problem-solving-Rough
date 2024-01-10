#include<iostream>
using namespace std;
struct Q_4
{
    int no_of_days;
    int remaining_amount;
};
Q_4 question_4(int amount,int spent_per_day)
{
    Q_4 result;
    int days=0;
    for(days;days<32 && amount>=spent_per_day;days++)
    {
        amount-=spent_per_day;
    }
    int remaining_amount;int no_of_days;
    result.remaining_amount=amount;
    result.no_of_days = days;
    return result;
}
void checkevenorodd(int number)
{
    if(number>0)
    {
        if(number%2==0)
        {
           cout<<number<<" is a even number!"<<endl;
           return;
        }
        cout<<number<<" is a odd number!"<<endl;
        return;
    }
    else
    {
        cout<<"Enter a valid number!"<<endl;
    }

}

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

void rangeprimenumber(int start,int end)
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
    //use this to check if a number is even or odd
    /*int number;
    cout<<"Enter the number=";
    cin>>number;
    checkevenorodd(number);*/

    int amount,spent_per_day;
    cout<<"The amount that was given and how much was spend in a day are";
    cin>>amount>>spent_per_day;
    Q_4 result = question_4(amount,spent_per_day); 
    cout<<"Remaining amount: "<<result.remaining_amount<<endl;
    cout<<"Number of days that amount can be spent in a month: "<<result.no_of_days<<endl;

    return 0;

}