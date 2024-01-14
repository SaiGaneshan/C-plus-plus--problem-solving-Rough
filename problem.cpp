#include<iostream>
using namespace std;
#include<cmath>
#include<stdio.h>

double Binerytodecimal(int number)
{
    long original_number=number;
    long digits=0;
    while(number>0)
    {
        long last_digit = number%10;
        digits++;
        number=number/10;
    }
    double sum=0;
    number = original_number;
    for(int j=0;j<digits;j++)
    {
        int last_digit_1 = number%10;
        sum+=pow(2,j)*last_digit_1;
        number=number/10;
    }
    return sum;
}

long decimaltobinary(int number_1)
{
    long binary = 0;
    while(number_1>0)
    {
        int last_digit_2 = number_1%2;
        binary=binary*10+last_digit_2;
        number_1=number_1/2;
    }
    return binary;
}

double BinarySum(long a,long b)
{
    long c=Binerytodecimal(a);
    long d=Binerytodecimal(b);
    long sum=c+d;
    double result=decimaltobinary(sum);
    return result;
}

void bobblesortbig_small(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }

    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}

void bobblesortsmall_big(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }

    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}

int chocolateproblem(int amount)
{
    int chocolate=0;
    int wrappers=0;
    while(amount>0)
    {
        chocolate++;
        amount--;
        wrappers++;
        if(wrappers==3)
        {
            amount++;
            wrappers-=3;
        }
        else if(wrappers<3 && amount==0)
        {
            return chocolate;
        }
        else
        {
            continue; 
        } 
        
    }
}
int cube(int number)
{
    return number*number*number;
}
bool armstrong(long number)
{
    if(number>0)
    {
        long original_number = number;
        long armstrong_number=0;
        while(number>0)
        {
            long last_digit=number%10;
            armstrong_number+=pow(last_digit,3);
            number=number/10;
        }
        return armstrong_number==original_number;
      
    }
    else
    {
        cout<<"enter a valid output"<<endl;
    }
}

int reverse(int number)
{
    int r=0;//consider r is the reversed number
    int original_number = number;
    while(number>0)
    {
        int last_digit  = number%10;
        r = r*10+last_digit;
        number=number/10;
    }
    return r;
}

struct Q_4
{
    int no_of_days;
    int remaining_amount;
};
Q_4 question_4(int amount,int spent_per_day)
{
    Q_4 result;
    int days=1;
    int number_of_days=0;
    for(days;days<31 && amount>=spent_per_day;days+=2)
    {
       amount-=spent_per_day;
       number_of_days++;
    }
    int remaining_amount;int no_of_days;
    result.remaining_amount=amount;
    result.no_of_days = number_of_days;
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


    //code to check question 4
    /*int amount,spent_per_day;
    cout<<"The amount that was given and how much was spend in a day are";
    cin>>amount>>spent_per_day;
    Q_4 result = question_4(amount,spent_per_day); 
    cout<<"Remaining amount: "<<result.remaining_amount<<endl;
    cout<<"Number of days that amount can be spent in a month: "<<result.no_of_days<<endl;*/

    /*int number;
    cout<<"number=";
    cin>>number;
    int result=reverse(number);
    cout<<result;*/


    /*for(long number=1;number<2000;number++)
    {
        bool result=armstrong(number);
        if(armstrong(number))
        {
            cout<<"Its a armstrong number,number="<<number<<endl;
        }
        /*else
        {
            continue;
        }

    }*/
//code for chocolate problem
   /* int amount;
    cout<<"amount = ";
    cin>>amount;
    int result = chocolateproblem(amount);
    cout<<"the total chocolate with that amount is "<<result<<endl;
    return 0;
    */

//code for bubble sort algorithms
/*int n;
cout<<"n=";
cin>>n;
int arr[n];
cout<<"arr[n]=";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
bobblesortbig_small(arr,n);
cout<<endl;
bobblesortsmall_big(arr,n);
*/

//code for binery to decimal 
/*int number;
cout<<"number=";
cin>>number;
int result=Binerytodecimal(number);
cout<<"the number is "<<result;
*/

//code for demimal to binery
/*int number;
cout<<"number=";
cin>>number;
long result=decimaltobinary(number);
cout<<"the result = "<<result;
*/

//code for sum of two binery number
/*long number_1;
long number_2;
cout<<"number_1 and number_2 are ";
cin>>number_1>>number_2;
long result=BinarySum(number_1,number_2);
cout<<"the sum = "<<result<<endl;
long a=Binerytodecimal(number_1);
long b=Binerytodecimal(number_2);
long sumo = Binerytodecimal(result);
printf("number_1 is %ld ,number_2 is %ld and their sum is %ld",a,b,sumo);
return 0;
*/

//cout<<"the original number is "<<original<<"the sum is "<<sum<<endl;

#include <iostream>

    // Write C++ code here
long n=0;

for(int i=1;i<2000;i++)
{
    n=i;
    long sum = 0;
    long original=n;
    while(n>0)
    {
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n = n/10;
    }
    if(sum==original)
    {
        cout<<"its a armstrong number="<<sum<<endl;
    }
    else
    {
        continue;
    }
}
//cout<<"the original number is "<<original<<"the sum is "<<sum<<endl;

    return 0;
}
