/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 22:20:23 by conde-an          #+#    #+#             */
/*   Updated: 2023/09/05 18:16:29 by conde-an         ###   ########.fr       */
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

int main()
{
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

 
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    const char *s1 = "hello";
    const char *s2 = "hell";
    int result1 = ft_strncmp(s1, s2, 5);
    printf("Result 1: string are different so func take the value on ASCII for each letters diff 'o' is 111 on ASCII -(substraction) the value of NULL that remain 111 mean the letter missing is 'o' %d\n", result1);
 // string are different

    const char *s3 = "hello";
    const char *s4 = "hello";
    int result2 = ft_strncmp(s3, s4, 5);
    printf("Result 2: string are same in all lenght letters compared %d\n", result2); // string are same in all lenght letters compared

    const char *s5 = "h";
    const char *s6 = "hello";
    int result3 = ft_strncmp(s5, s6, 1);
    printf("Result 3: compared only the first character that result equal%d\n", result3); // compared only the first character

    const char *s7 = "hello";
    const char *s8 = "hello";
    int result4 = ft_strncmp(s7, s8, 3);
    printf("Result 4: string are the same but test compared only the first 3 character that result equal %d\n", result4); 

    return 0;
}*/


//-------------------------------------

 
/* 
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main() 
{
    const char *string = "Hello";

    char ToFind = 'o';
    char NotFound = 'h';
    size_t n = 5; 
    
    printf("\nPrinted the whole string: %s\n", string);
    printf("Character we need to FIND: %c\n", ToFind);

    void *resultFind = ft_memchr(string, ToFind, n);

    if (resultFind != NULL)
    {
        printf("FIRST occurrence of '%c' FOUND at position: %ld\n", ToFind, (size_t)((unsigned char *)resultFind - (unsigned char *)string));        
    }
    printf("\nPrinted the whole string: %s\n", string);
    printf("Character we need to FIND: %c\n", NotFound);

    void *resultNotFound = ft_memchr(string, NotFound, n);
    {
        printf("Character '%c' NOT FOUND in the string %s\n\n", NotFound, string);
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
    size_t l;
    l = 0;
    
    const char *ex0 = "H";
    const char *ex_0 = "A";
    printf("\nString ex1: %s", ex0);
    printf("\nString ex_1: %s\n", ex_0);
    
    if (l == 0)
    {
        printf("\n If the number of bytes to check l are = 0 they are consider equal: %s  | %s\n\n", ex0, ex_0);
    }
    
    size_t n;
    n = 5; 
    
    
    const char *ex1 = "Hello";
    const char *ex_1 = "Hello";
    printf("\nString ex1: %s", ex1);
    printf("\nString ex_1: %s\n", ex_1);
    
    
    int result1 = ft_memcmp(ex1, ex_1, n); 
    
    if (result1 == 0)
    {
        printf("\nThe bytes of each letter (n=5) of this two strings are equal: %s  | %s\n\n", ex1, ex_1);
    }

    const char *ex2 = "Hello"; 
    const char *ex_2 = "Mamma";
    printf("\nString ex2: %s", ex2);
    printf("\nString ex_2: %s\n", ex_2);
    
    int result2 = ft_memcmp(ex_2, ex2, n);
    
    if(result2 > 0)
    {
        printf("\nWhen you compare these two strings, since 'Mamma' comes BEFORE 'Hello' in lexicographic order (first letter), the result is a positive value if 'Mamma' appear before as in this exemple: %s  | %s\n", ex_2, ex2);
    }

    const char *ex3 = "Amore";
    const char *ex_3 = "Zorro";
    printf("\nString ex3: %s", ex3);
    printf("\nString ex_3: %s\n", ex_3);
    
    int result3 = ft_memcmp(ex3, ex_3, n);
    
    if (result3 < 0)
    {
        printf("\nWhen you compare these two strings, since 'Amore' comes BEFORE 'Zorro' in lexicographic order (first letter), the result is a negative because 'Zorro' as in this exemple appear first: %s | %s\n\n", ex_3, ex3);
    }
    else
return 0;
}
*/

//-------------------------------------

/* 

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main() 
{
    const char *stringa = "Find the substringa";
    printf("\nPrint stringa = 'Find the substringa'\n");
    const char *Search_substringa1 = "Find";
    printf("Print Substringa1 to search in stringa = 'Find'\n");
    const char *Search_substringa2 = "the";
    printf("Print Substringa2 to search in stringa = 'the'\n");
    size_t n = 10; 

    char *result1 = strnstr(stringa, Search_substringa1, n);
    if (result1 != NULL) {
        printf("\nResult 1: the word Find (Search_substringa1) it is = %s\n", result1);
    } else {
        printf("Substringa don't find\n");
    }

    char *result2 = strnstr(stringa, Search_substringa2, n);
    if (result2 != NULL) {
        printf("Result 2: the word the (Search_substringa2) it is = %s\n", result2);
    } else {
        printf("Substringa don't find\n");
    }

    const char *empty_string = "";
    const char *Search_substringa3 = "Find";
    
    char *result3 = strnstr(empty_string, Search_substringa3, n);
    if (result3 != NULL) {
        printf("Result 3: stringa is EMPTY ('') the substringa 'FIND' is not found %s\n\n", result3);
    } else {
        printf("Substringa don't find\n");
    }

    return 0;
}
*/

//-------------------------------------
/* 
#include <stdio.h>

int ft_atoi(const char *str);

int main(void)
{
    const char s1[] = "12345";
    const char s2[] = "-67890";
    const char s3[] = "   42";
    const char s4[] = "  +100";
    const char s5[] = "  -200";
    const char s6[] = "    abc";
    const char s7[] = "2147483647";
    const char s8[] = "-2147483648";
    const char s9[] = "2147483648";
    const char s10[] = "-2147483649";
    const char s11[] = "0";

    printf("\nStringa: \"%s\" -> Resultato: %d\n", s1, ft_atoi(s1));
    printf("Stringa: \"%s\" -> Resultato: %d\n", s2, ft_atoi(s2));
    printf("Stringa: \"%s\" -> Resultato: %d\n", s3, ft_atoi(s3));
    printf("Stringa: \"%s\" -> Resultato: %d\n", s4, ft_atoi(s4));
    printf("Stringa: \"%s\" -> Resultato: %d\n", s5, ft_atoi(s5));
    printf("Stringa: \"%s\" -> Resultato: %d\n", s6, ft_atoi(s6));
    printf("Stringa: \"%s\" -> Resultato: %d\n", s7, ft_atoi(s7));
    printf("Stringa: \"%s\" -> Resultato: %d\n", s8, ft_atoi(s8));
    printf("Stringa: \"%s\" -> Resultato: %d\n", s9, ft_atoi(s9));
    printf("Stringa: \"%s\" -> Resultato: %d\n", s10, ft_atoi(s10));
    printf("Stringa: \"%s\" -> Resultato: %d\n\n", s11, ft_atoi(s11));

    return 0;
}*/

//-------------------------------------

/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

void *ft_calloc(size_t count, size_t size);

int main(void)
{
    // Esempi di utilizzo di ft_calloc
    int *intArray;
    char *strArray;
    int i;

    // Esempio 1: Allocazione di un array di int di dimensione 5
    intArray = (int *)ft_calloc(5, sizeof(int));
    if (intArray != NULL)
    {
        printf("\nEsempio 1: Array di int allocato con successo.\n");

        // Inizializzazione degli elementi a 42
        for (i = 0; i < 5; i++)
        {
            intArray[i] = 42;
        }

        // Stampa degli elementi
        printf("Elementi dell'array di int: ");
        for (i = 0; i < 5; i++)
        {
            printf("%d ", intArray[i]);
        }
        printf("\n");

        // Liberazione della memoria allocata
        free(intArray);
    }
    else
    {
        printf("Esempio 1: Allocazione di memoria fallita.\n");
    }

    // Esempio 2: Allocazione di una stringa vuota di dimensione 10
    strArray = (char *)ft_calloc(10, sizeof(char));
    if (strArray != NULL)
    {
        printf("Esempio 2: Stringa allocata con successo.\n");

        // Copia di una stringa nella memoria allocata
        strcpy(strArray, "Hello\n");

        // Stampa della stringa
        printf("Stringa allocata: %s\n", strArray);

        // Liberazione della memoria allocata
        free(strArray);
    }
    else
    {
        printf("Esempio 2: Allocazione di memoria fallita.\n");
    }

    return 0;
}
*/

//-------------------------------------
/* 
#include "libft.h"
#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int main()
{
    const char *original = "Hello, world!";
    char *duplicate = ft_strdup(original);

    // Verifica se la malloc ha avuto successo prima di utilizzare la stringa duplicata.
    if (duplicate == NULL)
    {
        printf("Errore nell'allocazione della memoria per la stringa duplicata.\n");
        return 1;
    }

    printf("\nStringa originale: %s\n", original);
    printf("Stringa duplicata: %s\n\n", duplicate);

    // Ricorda di liberare la memoria allocata dinamicamente quando hai finito con la stringa duplicata.
    free(duplicate);

    return 0;
}
*/


//-------------------------------------
/* 
#include "libft.h"
#include <stdio.h>
#include <stdlib.h> 

int main()
{
    const char *str = "This is a test string";
    unsigned int start = 5;
    size_t length = 7;

    char *substring = ft_substr(str, start, length);

    if (substring)
    {
        printf("\nOriginal string: %s\n", str);
        printf("Substring: %s\n\n", substring);

        // Remember to free the memory allocated by ft_substr.
        free(substring);
    }
    else
    {
        printf("Substring allocation failed.\n");
    }

    return 0;
}
*/


//-------------------------------------

/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h> 

int main()
{
    // Test case 1: Join two non-empty strings.
    const char *s1 = "Hello, ";
    const char *s2 = "world!";
    char *result1 = ft_strjoin(s1, s2);
    if (result1)
    {
        printf("Test Case 1: %s\n", result1);
        free(result1);
    }
    else
    {
        printf("Test Case 1 failed: Memory allocation error.\n");
    }

    // Test case 2: Join an empty string with a non-empty string.
    const char *emptyString = "";
    char *result2 = ft_strjoin(emptyString, s2);
    if (result2)
    {
        printf("Test Case 2: %s\n", result2);
        free(result2);
    }
    else
    {
        printf("Test Case 2 failed: Memory allocation error.\n");
    }

    // Test case 3: Join two empty strings.
    char *result3 = ft_strjoin(emptyString, emptyString);
    if (result3)
    {
        printf("Test Case 3: %s\n", result3);
        free(result3);
    }
    else
    {
        printf("Test Case 3 failed: Memory allocation error.\n");
    }

    // Test case 4: Join a NULL string with a non-empty string.
    char *result4 = ft_strjoin(NULL, s2);
    if (result4)
    {
        printf("Test Case 4: %s\n", result4);
        free(result4);
    }
    else
    {
        printf("Test Case 4 failed: Memory allocation error.\n");
    }

    return 0;
}
*/


//-------------------------------------

/* 

#include "libft.h"
#include <stdio.h>

int main()
{
    // Test case 1: Trim leading and trailing spaces
    const char *s1 = "   Hello, world!   ";
    const char *set = " ";
    char *result1 = ft_strtrim(s1, set);
    if (result1)
    {
        printf("Test Case 1: [%s]\n", result1);
        free(result1);
    }
    else
    {
        printf("Test Case 1 failed: Memory allocation error.\n");
    }

    // Test case 2: Trim specified characters from the beginning and end
    const char *s2 = "---1234---";
    const char *set2 = "-";
    char *result2 = ft_strtrim(s2, set2);
    if (result2)
    {
        printf("Test Case 2: [%s]\n", result2);
        free(result2);
    }
    else
    {
        printf("Test Case 2 failed: Memory allocation error.\n");
    }

    // Test case 3: Trim nothing (no leading or trailing characters to remove)
    const char *s3 = "Hello, world!";
    const char *set3 = "";
    char *result3 = ft_strtrim(s3, set3);
    if (result3)
    {
        printf("Test Case 3: [%s]\n", result3);
        free(result3);
    }
    else
    {
        printf("Test Case 3 failed: Memory allocation error.\n");
    }

    // Test case 4: Trim leading and trailing newline characters
    const char *s4 = "\n\nHello, world!\n\n";
    const char *set4 = "\n";
    char *result4 = ft_strtrim(s4, set4);
    if (result4)
    {
        printf("Test Case 4: [%s]\n", result4);
        free(result4);
    }
    else
    {
        printf("Test Case 4 failed: Memory allocation error.\n");
    }

    return 0;
}
*/


//-------------------------------------

/* 

 int main(void)
{
    const char s[] = "  gh   hg jhj h";
    char c = ' ';
    char **result = ft_split(s, c);
 	printf("'%p'\n", result);

     if (!result)
         return 1;

     int i = 0;
     while (result[i])
     {
 		printf("'%s'\n", result[i]);
         i++;
     }

     return 0;
}
*/


//-------------------------------------

/*

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Test case 1: Positive integer
    int num1 = 12345;
    char *result1 = ft_itoa(num1);
    if (result1)
    {
        printf("Test Case 1: %s\n", result1);
        free(result1);
    }
    else
    {
        printf("Test Case 1 failed: Memory allocation error.\n");
    }

    // Test case 2: Negative integer
    int num2 = -6789;
    char *result2 = ft_itoa(num2);
    if (result2)
    {
        printf("Test Case 2: %s\n", result2);
        free(result2);
    }
    else
    {
        printf("Test Case 2 failed: Memory allocation error.\n");
    }

    // Test case 3: Zero
    int num3 = 0;
    char *result3 = ft_itoa(num3);
    if (result3)
    {
        printf("Test Case 3: %s\n", result3);
        free(result3);
    }
    else
    {
        printf("Test Case 3 failed: Memory allocation error.\n");
    }

    return 0;
}

*/


//-------------------------------------

/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Test case 1: Apply myFunction to convert uppercase to lowercase.
    const char *input1 = "Hello, World!";
    char *result1 = ft_strmapi(input1, myFunction);
    if (result1)
    {
        printf("Test Case 1: %s\n", result1);
        free(result1);
    }
    else
    {
        printf("Test Case 1 failed: Memory allocation error.\n");
    }

    // Test case 2: Apply myFunction to reverse the input string.
    const char *input2 = "12345";
    char *result2 = ft_strmapi(input2, myFunction);
    if (result2)
    {
        printf("Test Case 2: %s\n", result2);
        free(result2);
    }
    else
    {
        printf("Test Case 2 failed: Memory allocation error.\n");
    }

    return 0;
}

*/


//-------------------------------------

/*

#include "libft.h"
#include <stdio.h>

int main()
{
    // Test case 1: Apply myFunction to print each character and index.
    char input1[] = "Hello, World!";
    ft_striteri(input1, myFunction);

    // Test case 2: Apply myFunction to print each character and index in an empty string.
    char input2[] = "";
    ft_striteri(input2, myFunction);

    return 0;
}

*/


//-------------------------------------

/*

#include "libft.h" 
#include <stdio.h> 

int main()
{
    char character = 'A'; // Replace 'A' with the character you want to print
    int file_descriptor = 1; // File descriptor 1 is typically stdout (standard output)

    ft_putchar_fd(character, file_descriptor);

    return 0;
}


*/


//-------------------------------------

/*

#include "libft.h" 
#include <stdio.h>  

int main()
{
    char *message = "Hello, World!"; // Replace this with the string you want to print
    int file_descriptor = 1;         // File descriptor 1 is typically stdout (standard output)

    ft_putstr_fd(message, file_descriptor);

    return 0;
}

*/

//-------------------------------------

/*

#include "libft.h" 
#include <stdio.h>  

int main()
{
    char *message = "Hello, World!"; // Replace this with the string you want to print
    int file_descriptor = 1;         // File descriptor 1 is typically stdout (standard output)

    ft_putendl_fd(message, file_descriptor);

    return 0;
}


*/



//-------------------------------------

/*

#include "libft.h" 
#include <stdio.h> 


int main()
{
    int number = 12345; // Replace this with the integer you want to print
    int file_descriptor = 1; // File descriptor 1 is typically stdout (standard output)

    ft_putnbr_fd(number, file_descriptor);

    return 0;
}


*/