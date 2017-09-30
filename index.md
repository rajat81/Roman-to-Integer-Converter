#roman_to_integer_conversion

Converts Roman numeral into Integer Thats the problemstatement for code: Write a program that, given a Roman numeral as a string R, prints via standard output the integer value of that numeral.

Recall the following mapping of characters to values:

I --> 1 V --> 5 X --> 10 L --> 50 C --> 100 D --> 500 M --> 1000

If symbols progress from largest to smallest left to right, their values are simply summed. However, if a smaller value symbol is found to the left of a larger value symbol, then the value of the smaller symbol is subtracted from that of the larger symbol.

For example, if a user inputs:

IX, your program should print 9
MDCXXXVI, your program should print 1636
XCIX, your program should print 99

You may include additional header files as needed, and you may call any functions you'd like.

Odds are you'll find get_string and printf of interest!

##Input Format

A single string R representing a valid Roman numeral.

##Constraints

Each character of R will be either I, V, X, L, C, D, or M.

R will represent a valid Roman numeral.

##Output Format

An integer representing the corresponding number in base 10.

##Sample Input

IX

##Sample Output

9
Having trouble with Pages? Check out our [documentation](https://help.github.com/categories/github-pages-basics/) or [contact support](https://github.com/contact) and we’ll help you sort it out.
