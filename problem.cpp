#include<iostream>
using namespace std;
#include<cmath>
#include<stdio.h>
#include<climits>
#include<random>
#include<cctype>
#include<string>
#include<algorithm>

void program_9()
{
    string name;
    cout<<"Enter a string:";
    getline(cin,name);
    int length = name.length();
    int number=0;
    int letter=0;
    int symbol=0;
    for(char ch:name)
    {
        if(isdigit(ch))
        {
            number++;
        }
        if(isalpha(ch))
        {
            letter++;
        }
        if(ispunct(ch))
        {
            symbol++;
        }
    }
    if(length>=6 && length<=16 && number>=1 && letter>=1 && symbol>=1)
    {
        cout<<"Valid password!"<<endl;
    }
    else
    {
        cout<<"Not a Valid Password!"<<endl;
    }
}

void program_8()
{
    string name;
    cout<<"Enter a string:";
    getline(cin,name);
    int number=0;
    int letter=0;
    for(char ch:name)
    {
        if(isdigit(ch))
        {
            number++;
        }
        if(isalpha(ch))
        {
            letter++;
        }
    }
    cout<<"Letters "<<letter<<"\nDigits "<<number;
}

void program_7()
{
    int rows,columns;
    cout<<"Enter no of rows and columns: ";
    cin>>rows>>columns;
    int arr[rows][columns];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"[";
      for(int i=0;i<rows;i++)
    {
        cout<<"[";
        for(int j=0;j<columns;j++)
        {
            if(j==columns-1)
            {
                cout<<arr[i][j];
            }
            else
            {
                cout<<arr[i][j]<<",";
            }
        }
        if(i==rows-1)
        {
            cout<<"]";
        }
        else
        {
            cout<<"],"; 
        }
    }
    cout<<"]";
}

string program_3() 
{
    // Write C++ code here
    string sentence;
    cout<<"Enter a character to reverse: ";
    getline(cin,sentence);
    reverse(sentence.begin(), sentence.end());

    return sentence;
}

string program_6()
{
    string name;
    string rev_name;
    cout<<"Give the sentence: ";
    getline(cin,name);
    int n=name.length();
    rev_name.resize(n);
    for(int i=0;i<n;i++)
    {
        
        rev_name[i]=name[n-1-i];
    }
    return rev_name;
}

void program_5()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int q=4;q>=1;q--)
    {
        for(int w=1;w<=q;w++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

void program_11()
{
    string month;int days;
    cout<<"Month name<all in caps>: ";
    cin>>month;
    int temp;
    if (month == "JANUARY")
    {
        temp=1;
    }
    if (month == "FEBRUARY") 
    {
        temp=2;
    }
    if (month == "MARCH")
    {
        temp=3;
    }
    if (month == "APRIL")
    {
        temp=4;
    }
    if (month == "MAY") 
    {
        temp=5;
    }
    if (month == "JUNE")
    {
        temp=6;
    }
    if (month == "JULY")
    {
        temp=7;
    }
    if (month == "AUGUST")
    {
        temp=8;
    }
    if (month == "SEPTEMBER")
    {
        temp=9;
    }
    if (month == "OCTOBER")
    {
        temp=10;
    }
    if (month == "NOVEMBER")
    {
        temp=11;
    }
    if (month == "DECEMBER")
    {
        temp=12;
    }

    switch(temp)
    {
        case 1:
        days=31;
        cout<<"no of days: "<<days;
        break;

        case 2:
        days=28;
        cout<<"no of days: "<<days;
        break;

        case 3:
        days=31;
        cout<<"no of days: "<<days;
        break;

        case 4:
        days=31;
        cout<<"no of days: "<<days;
        break;

        case 5:
        days=31;
        cout<<"no of days: "<<days;
        break;

        case 6:
        days=30;
        cout<<"no of days: "<<days;
        break;

        case 7:
        days=31;
        cout<<"no of days: "<<days;
        break;

        case 8:
        days=31;
        cout<<"no of days: "<<days;
        break;

        case 9:
        days=30;
        cout<<"no of days: "<<days;
        break;

        case 10:
        days=31;
        cout<<"no of days: "<<days;
        break;

        case 11:
        days=30;
        cout<<"no of days: "<<days;
        break;

        case 12:
        days=31;
        cout<<"no of days: "<<days;
        break;


    }
}

void program_13()
{
    for(int i=9;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<i;
        }
        cout<<" \n";
    }
}

void program_12()
{
    int sum;
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    sum=a+b;
    if(sum>=105 && sum<=200)
    {
        sum=200;
    }
    else
    {
        sum=a+b;
    }
    cout<<"Result= "<<sum;
}

void program_1() 
{
    int n;float result_D;
    cout<<"MENU:\n1)Add\n2)Subtract\n3)Multiply\n4)Divide\n5)Modulus"<<endl;
    cout<<"Enter your choice: ";
    cin>>n;
    switch(n)
    {
        int a,b,result;
        case 1:
        cout<<"Enter your two numbers: ";
        cin>>a>>b;
        result=a+b;
        cout<<"Result: "<<result<<endl;
        break;

        case 2:
        cout<<"Enter your two numbers: ";
        cin>>a>>b;
        result=a-b;
        cout<<"Result: "<<result<<endl;
        break;

        case 3:
        cout<<"Enter your two numbers: ";
        cin>>a>>b;
        result=a*b;
        cout<<"Result: "<<result<<endl;
        break;

        case 4:
        cout<<"Enter your two numbers: ";
        cin>>a>>b;
        result_D=static_cast<float>(a)/static_cast<float>(b);
        cout<<"Result: "<<result_D<<endl;
        break;

        case 5:
        cout<<"Enter your two numbers: ";
        cin>>a>>b;
        result=a/b;
        cout<<"Result: "<<result<<endl;
        break;
    }
}

void program_2()
{
    for(int i=1000;i<=2000;i++)
    {
        if(i%8==0 && i%5==0)
        { 
            cout<<i<<endl;
        }
    }
}

void program_4()
{
    random_device rd;
    uniform_int_distribution<int>dist(1,9);
    int Guessed_number=dist(rd);
    int number;
    bool flag=false;
    while(flag!=true)
    {
        cout<<"Enter a number: ";
        cin>>number;
        if(Guessed_number==number)
        {
            cout<<"Well guessed!"<<endl;
            flag=true;
        }
        else if(Guessed_number<number)
        {
            cout<<"Its too high!"<<endl;
        }
        else
        {
            cout<<"Its too low!"<<endl;
        }

    }
}

void missingpositiveelement(int a[],int n)//I have to improve my time complexity
{
    int smallest_no=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            a[i]=INT_MAX;
        }
        smallest_no=min(smallest_no,a[i]);
    }
    int biggest_no = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]==INT_MAX)
        {
            a[i]=INT_MIN;
        }
        biggest_no=max(biggest_no,a[i]);
    }
    int help=smallest_no;
    int god=0;
    while(help<biggest_no)
    {
        for(int i=0;i<n;i++)
        {
            if(help==a[i])
            {
                god=1;
                break;
            }
            else{
                god=0;
            }
        }

        if(god==0)
        {
            cout<<"the missing numer is "<<help<<endl;
            return;

        }
        else{
            help++;
        }
    }
   
}

void subarraywithgivensum(int arr[],int n,int key)
{
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            sum+=arr[j];
            if(sum==key)
            {
                cout<<"starts at 0"<<endl;
                cout<<"ends at "<<j<<endl;
                return;
            }
        }
    }
}

int RecordBreakingday(int arr[],int n)
{
    int count=0;
    int max_day=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1] && max_day<arr[i])
        {
            count++;
            max_day=max(max_day,arr[i]);
        }
    }
    return count;
}

int longestarithmeticsubarray(int arr[],int n)
{
    int count = 2;
    int subarray=2;
    int pd = arr[1]-arr[0];
    
    for(int j=2;j<n;j++)
    {
        if(pd==arr[j]-arr[j-1])
        {
            count++;
        }
        else
        {
            count=2;
        }
        subarray = max(subarray,count);
        pd = arr[j] - arr[j - 1];
    }
    return subarray;
}

void sumsubarray(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {  
        sum+=arr[j];   
        cout<<"sum  = "<<sum<<endl;
        }
    }
}

int maximumnumberinarray(int arr[],int n)
{
    int maximum_number=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maximum_number)
        {
            maximum_number=max(maximum_number,arr[i]);
        }
    }
    return maximum_number;
}

void subarraysum(int arr[],int n,int key)//not the best , i didnt understand 
{
    int i=0;int j=0;int st=-1;int en=-1;int sum=0;
    while(j<n && sum+arr[j] <= key)
    {
        sum+=arr[j];
        j++;
    }

    if(sum == key)
    {
        cout<<i+1<<" "<<j<<endl;
        cout<<st<<" "<<en<<endl;
        return;
    }
    while(j<n)
    {
        sum+=arr[j];
        while(sum>key)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==key)
        {
            st=i+1;
            en=j+1;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
}

int repeatelementatleastindex(int arr[],int n)
{
    int count=0;
    int min_index=INT_MAX;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                if(i==j)
                {
                    continue;
                }
                else
                {
                count++;
                min_index=min(min_index,i);
                }
            }
        }
    }

return min_index;
}

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

double BinarySum(long a,long b)//i am getting wrong output, but program is correct
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
//code for repeatelementatleastindex
/*int n;
cout<<"n=";
cin>>n;
int arr[n];
cout<<"arr[n]=";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

int result = repeatelementatleastindex(arr,n);
cout<<"the result is at index(0 based indexing)"<<result<<endl;
/*int n,key;
cout<<"n and key =";
cin>>n>>key;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
subarraysum(arr,n,key);
*/
//code to find maximum number in an array

/*int n;
cout<<"n=";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int result=maximumnumberinarray(arr,n);
cout<<result;
*/
//Sum of subarray
/*
int n;
cout<<"n=";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
sumsubarray(arr,n);
*/
//code to find longest arithmetic subarrey
/*
int n;
cout<<"n=";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int result=longestarithmeticsubarray(arr,n);
cout<<result;
*/
//code for recored breaking day 

/*int n;
cout<<"n=";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int result=RecordBreakingday(arr,n);
cout<<result;
*/

/*int n;
cout<<"n=";
cin>>n;
int arr[n];
int key;
cout<<"key=";
cin>>key;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
subarraywithgivensum(arr,n,key);*/
//missing positive element in a 1d array 

/*int n;
cout<<"n=";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
missingpositiveelement(arr,n);
*/

int rows,columns,key;
cout<<"no of rows and columns and key";
cin>>rows>>columns>>key;
int arr[rows][columns];
for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        cin>>arr[i][j];
    }
}
//code to search for element in 2d arrey
/*for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        if(arr[i][j]==key)
        {
            cout<<"it is in row number="<<i+1<<endl;
            cout<<"it is in column number"<<j+1<<endl;
            return 0;
        }
    }
}
*/
}
