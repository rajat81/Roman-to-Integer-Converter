# Roman to Integer converter using C

The following is the problem statement for the code that you will find at the end of this page.

Converts Roman numeral into Integer Thats the problemstatement for code: Write a program that, given a Roman numeral as a string R, prints via standard output the integer value of that numeral.

Recall the following mapping of characters to values:

`I –> 1 V –> 5 X –> 10 L –> 50 C –> 100 D –> 500 M –> 1000`

If symbols progress from largest to smallest left to right, their values are simply summed. However, if a smaller value symbol is found to the left of a larger value symbol, then the value of the smaller symbol is subtracted from that of the larger symbol.

For example, if a user inputs:

IX, your program should print 9
MDCXXXVI, your program should print 1636
XCIX, your program should print 99  

You may include additional header files as needed, and you may call any functions you’d like.

Odds are you’ll find get_string and printf of interest!

# Input Format

A single string R representing a valid Roman numeral.

# Constraints

Each character of R will be either I, V, X, L, C, D, or M.

R will represent a valid Roman numeral.

# Output Format

An integer representing the corresponding number in base 10.

# Sample Input

`IX`

# Sample Output

`9`
## Code:
````````
#include <cs50.h>
#include <string.h>
#include <stdio.h>
int digit(char);
int main(void)
{
   
    int i,numb=0,p=0;
   string s=get_string();     
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
