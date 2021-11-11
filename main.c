#include <stdio.h>
#include <stdlib.h>
void reverse()
{
    char s[100],r[100];
    int end,len;
    printf(" Enter a string to reverse\n");
    gets(s);//gets function is used to scan or read a line of text.
            //or using scanf("%[^\n]%*c", s); to scan or read a line of text.
            //or using  fgets(s, 100, stdin); to scan or read a line of text.
    printf("\n Before Reverse String in Upper Case : %s\n",strupr(s));
    printf("\n Before Reverse String in Lower Case : %s\n",strlwr(s));
    len=strlen(s);
    end=len-1;
    for(int i=0;i<len;i++)
    {
        r[end]=s[i]; /* store on array r[end](end mean the last index) the first index of input string then
                        decrement the end index by 1 */
        end--;
    }
    printf("\n Reverse of the string:  '' %s '' \n", r);
    printf("\n After Reverse String in Upper Case : %s\n",strupr(r));
    printf("\n After Reverse String in Lower Case : %s\n",strlwr(r));
    printf ( "\n string length  = %d \n" , len ) ;
    /*strlwr()function is a built-in function in C and is defined in string.h header file.Converts string to lowercase
strupr()function is a built-in function in C and is defined in string.h header file.Converts string to uppercase
strlen()function is a built-in function in C and is defined in string.h header file.Gives the length of string
*/
}
int main()
{
    reverse();
    return 0;
}
