//roman_to_integer_conversion

//By Rajat sawant

#include <cs50.h>
#include <string.h>
#include <stdio.h>
int digit(char);
int main(void)
{
   
    int i,numb=0,p=0;
   string s=get_string();     //taking input
    int n=strlen(s);
    int number[n];
    number[n]=0;
    for(i=0;i<n;i++)
        {number[i]=digit(s[i]);
         
        
    }
   for(i=0;i<n;i++)
       {if(number[i]>=number[i+1])
       p=p+number[i];
       else if(number[i]<number[i+1])
       p=p-number[i];
      }
    printf("%d",p);
    return 0;
}


//function
int digit(char c)
{
    int value = 0;
    switch (c)
    {
    case 'I':
        value = 1;
        break;
    case 'V':
        value = 5;
        break;
    case 'X':
        value = 10;
        break;
    case 'L':
        value = 50;
        break;
    case 'C':
        value = 100;
        break;
    case 'D':
        value = 500;
        break;
    case 'M':
        value = 1000;
        break;
       
    }
     return value;
}



