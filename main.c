/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 22:20:23 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/27 15:16:11 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"
#include <stdio.h>   --- input-output
#include <ctype.h>

int main ()
{
    char c;
    c = 'A';
    
    if (ft_isalpha(c))
    {
        printf("%c is an alphabetic character\n", c);
    }
    else
    {
        printf("%c is not an alphabetic character\n", c);
    }

    return 0;
}*/





// Test function for ft_isalpha int main ()

/*
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main ()
{
    char low_one = 's';
    char capt_one = 'S';
    char num = '3';
    char simbols = '!';
    char spaces = ' ';
    int numeff = 3;


    if (ft_isalpha(low_one))
    {
        printf("%c is an alphabetic character.\n", low_one);
    }
    else
    {
        printf("%c is not an alphabetic character.\n", low_one);
    }

    if (ft_isalpha(capt_one))
    {
        printf("%c is an alphabetic character.\n", capt_one);
    }
    else
    {
        printf("%c is not an alphabetic character.\n", capt_one);
    }

    if (ft_isalpha(num))
    {
        printf("%c is an alphabetic character\n", num);
    }
    else
    {
        printf("%c is not an alphabetic character\n", num);
    }

    if (ft_isalpha(simbols))
    {
        printf("%c is an alphabetic character\n", simbols);
    }
    else
    {
        printf("%c is not an alphabetic character\n", simbols);
    }

    if (ft_isalpha(spaces))
    {
        printf("%c is an alphabetic character\n", spaces);
    }
    else
    {
        printf("%c is not an alphabetic character\n", spaces);
    }

    if (ft_isalpha(numeff))
    {
        printf("%d is an alphabetic character.\n", numeff);
    }
    else
    {
        printf("%d is not an alphabetic character.\n", numeff);
    }

    return 0;
}*/



//-------------------------------------
/*
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    c = '9';

   if (ft_isdigit(c))
   { 
        printf("%c is a digit and NOT alphabetic character\n", c);
   }
   else
   {
        printf("%c is NOT a digit\n", c);
   }
    return (0);
}*/




//-------------------------------------
/*
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()

{
    char check1;
    char check2;
    char check3;
    char check4;
    char check5;
    
   
    check1 = '8';
    check2 = 'f';
    check3 = 'R';
    check4 = '+';
    check5 = '$';
    
    printf("check1: %c\n", check1);
    printf("check2: %c\n", check2);
    printf("check3: %c\n", check3);
    printf("check4: %c\n", check4);
    printf("check5: %c\n", check5);

    if (ft_isalnum(check1))
    {
        printf("%c, digit found\n", check1);
    }
    if (ft_isalnum(check2))
    {
        printf("%c, character found\n", check2);
    }
    if (ft_isalnum(check3))
    {
        printf("%c, character found\n", check3);
    }
    if (ft_isalnum(check4))
    {
        printf("%c, digit found\n", check4);
    }
    if (!ft_isalnum(check5))
    { 
        printf("%c, The character is not alphanumeric, it is a simbol\n", check5);
        return (1); // Return 1 for non-alphanumeric character
    }
return (0); // Return 0 to indicate successful completion
}*/


//-------------------------------------
/*
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{ 
    int c;
    int noAscii;  // Character outside the ASCII range;
    int result;
    
    c = 'A';
    noAscii = 129;
    result = ft_isascii(c);
    
    if (ft_isascii(c))
    { 
        printf ("RETURN (%d) ASCII found\n", result);
        printf ("The capital letter 'A' is in a range of ASCII number table between 0 to 127, value ASCII %d\n", c);    }
    if (!ft_isascii(noAscii))
    {
        printf ("The number %d is not within the ASCII range\n", noAscii);
        return (1);
    }
    else
    { 
        printf ("RETURN (%d) ASCII NOT found\n", result);
        printf ("The capital letter 'A' is NOT in a range of ASCII number table between 0 to 127, value ASCII %d\n", c);
    }  
    return (0);
}*/

//-------------------------------------

/*
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    int NoPrintable;
    
    c = 32;
    NoPrintable = 0;
    
    printf (" \n All character of ASCII table that are PRINTABLE:\n");
    
    while (c <= 126)
    {
        if (ft_isprint(c))
        { 
            printf ("%c\n", c);
        }
         c++;
    }
    
    printf (" \n No printable character:\n");
    
    while (NoPrintable <= 127)
    {
        if (!ft_isprint(NoPrintable))
        {
            if (NoPrintable == 127)
            {
                printf("Control Character 127 (Delete)\n");
            }
            else
            {
                printf("%d\n", NoPrintable);
            }
        }
        NoPrintable++;
    }
    return (0);
}*/


//-------------------------------------

/* 
#include "libft.h"
#include <stdio.h>
#include <string.h>


int main()
{
    char str[] = "Hello World !";
    int i;
    int count;
    
    count = 0;
    i = 0;
    
    printf("\n STRINGA: %s\n", str); // AllString
    printf(" TOTAL LENGHT: %d\n", ft_strlen(str)); // TotalCount
    
    while (i < ft_strlen(str))    
    {
        printf("\n %c (pointer that POINT to the letters throught of string) = %d(INDEX -lenght count)", str[i], count);
        i++;
        count++; // Increment the count for each character (lenght)
        printf("\n");
    }
    return (0);
}*/


//-------------------------------------

/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    ft_memset(str, '*', 5); // Fill the first 5 characters with '*'

    printf("Modified string: %s\n", str);

    return 0;
} */

//-------------------------------------

/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    ft_memset(str, '*', 5); // Fill the first 5 characters with '*'

    printf("Modified string: %s\n", str);
    ft_bzero(str, sizeof(str)); // Zero out the entire string

    printf("Modified string: %s\n", str);

    return 0;
}*/

/*OUTPUT:
Original string: Hello, World!
Modified string: *****, World!
Modified string:
MAKE SURE TO gcc main.c ft_bzero.c ft_memset.c -o INCLUDE FT_MEMESET.C TOO
*/

//-------------------------------------

/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello, World!";
    printf("START string src: %s\n", src);
    char dest[20]; // Destination buffer
    printf("END string dest: %s\n", dest);
    ft_memcpy(dest, src, strlen(src) + 1); // Copy the entire source string including the null terminator

    printf("Copied string from START(src) to the empty END(dest): %s\n", dest);

    return 0;
}*/

//-------------------------------------

/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello, World!";
    printf("src string: %s\n", src);

    char dest[20]; // Destination buffer
    printf("dest string: %s\n", dest);

    ft_memmove(dest, src, strlen(src) + 1); // Copy the entire source string including the null terminator

    size_t i = 0;
    size_t len = strlen(src) + 1;
    while (i < len)
    {
        printf("Loop Iteration: %zu, len = %zu\n", i, len); // Print the loop iteration and %zu identifier for print the type size_t
        // I printed the iteration to check if there are any overlaps
        i++;
    }

    printf("Copied string from src to dest: %s\n", dest);

    return 0;
}*/


//-------------------------------------

/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Hello, world!";
    char destination[12]; //destination buffer needs to enough space 

    size_t copied_length = ft_strlcpy(destination, source, sizeof(destination));

    printf("Source: %s\n", source);
    printf("Copied to destination: %s\n", destination);
    printf("Length of copied string: %zu\n", copied_length);

    return 0;
}*/


//-------------------------------------

/* 
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    // Case 1: Enough space in the destination buffer
    char destination[20] = "Hello, ";
    const char *source = "world!";
    size_t d_buffer = sizeof(destination);
    
    printf("Original destination: %s\n", destination);
    
    size_t result = ft_strlcat(destination, source, d_buffer);
    
    if (result >= d_buffer)
    {
        printf("Concatenation failed due to insufficient space.\n");
    }
    else
    {
        printf("Concatenated string: %s\n", destination);
        printf("Total length: %zu\n", result);
    }
    
    
    //CHECK AND PRINT OF NOT ENOUGH SPACE IN THE DESTINATION BUFFER char destination2[10] = "Hello, "; SPACE IS 10 AND THERE IS NOT SPACE FOR WORLD! const char *source2 = "world!";
    // Case 2: Not enough space in the destination buffer
    
    char destination2[10] = "Hello, ";
    const char *source2 = "world!";
    size_t d_buffer2 = sizeof(destination2);
    
    printf("\nOriginal destination2: %s\n", destination2);
    
    size_t result2 = ft_strlcat(destination2, source2, d_buffer2);
    
    if (result2 >= d_buffer2)
    {
        printf("Concatenation failed due to insufficient space.\n");
    }
    else
    {
        printf("Concatenated string2: %s\n", destination2);
        printf("Total length2: %zu\n", result2);
    }
    
    return 0;
}*/

//-------------------------------------

/*
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
    char unchanged = 'A';
    char lowletter = 'f';
    { 
        printf("\nOriginal character lowletter: %c\n", lowletter);
    }
    char convertToUpper = ft_toupper(lowletter);
    {
        printf("Conversion from lowercase to uppercase: %c\n", convertToUpper);
    }
    { 
        printf("\nOriginal character unchanged (No lowletter): %c\n", unchanged);
    }
    if (unchanged != lowletter)
    {
        printf("Return unchanged if not a lowercase letter: %c\n", unchanged);
    }
    return 0;
}*/

//-------------------------------------

/* 
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
    char unchanged = 'f';
    char Upperletter = 'F';
    { 
        printf("\nOriginal character Upperletter: %c\n", Upperletter);
    }
    char convertToLowletter = ft_tolower(Upperletter);
    {
        printf("Conversion from Upperletter to lowletter: %c\n\n", convertToLowletter);
    }
    { 
        printf("Original character unchanged (lowletter): %c\n", unchanged);
    }
    if (unchanged == convertToLowletter)
    {
        printf("Return unchanged if IS a lowercase letter: %c\n", unchanged);
    }
    return 0;
}*/


//-------------------------------------

/* 
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    
    const char *str = "Hello, world!";
    printf("\nAll string: %s\n", str);
    char ToFind = 'w';
    printf("Searching the character %c in the string\n",ToFind);
    char *result = strchr(str, ToFind);

    if (result != NULL) 
    {
        printf("Character '%c' found at position: %ld\n\n", ToFind, result - str);
    } else
    //If the characther is not present in the string
    printf("\nIf the characther is not present in the string All string:\n");
    printf("All string: %s\n", str);
    char ToFind2 = 'W';
    printf("Searching the character %c in the string\n",ToFind2);
    {
        
        printf("Character '%c' not found.\n", ToFind2);
    }

    return 0;
}*/

//-------------------------------------

/* 
#include "libft.h"
#include <stdio.h>

int main() {
    const char *string = "Hello";

    char ToFind = 'o';
    char ToNOTfind = 'f';

    printf("\nPrinted the whole string: %s\n", string);
    printf("Character we need to FIND: %c\n", ToFind);

    char *result = ft_strrchr(string, ToFind);

    if (result != NULL)
    {
        printf("Last occurrence of '%c' found at position: %ld\n", ToFind, result - string);
        //By subtracting these two pointers (result - string), you're calculating the difference in memory addresses between these two pointers, which essentially gives you the index or position of the character 'o' within the string "Hello".
        
    }
    printf("\nCheck character: %c in a string: %s\n", ToNOTfind, string);
    printf("Character %c NOT FOUND in the string %s\n", ToNOTfind, string);
    return(0);    
}*/


//-------------------------------------

 
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()

{
    printf("%d\n", strncmp("Hello Dear","Hello Baby", 7));
}

