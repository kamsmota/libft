#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

void *ft_memset(void *ptr, int value, size_t num);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dsize);
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dsize);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void ft_bzero(void *s, size_t n);
int ft_atoi(const char *nptr);

int	main(void)
{
	printf("---------ft_memset----------\n");
	char str1[] = "Hello";
	char str2[] = "Hello";
	printf("ft_memset = %s | memset = %s\n", str1, str2);
	ft_memset(str1, 'a', 2);
	memset(str2, 'a', 2);
	printf("ft_memset('Hello', 'a', 2) = %s | memset('Hello', 'a', 2) = %s\n", str1, str2);
	char str5[] = "Hello";
	char str6[] = "Hello";
	ft_memset(str5, 0, 3);
	memset(str6, 0, 3);
	printf("ft_memset('Hello', 0, 3) = %s | memset('Hello', 0, 3) = %s\n", str5, str6);
	char str7[6] = "Hello";
	char str8[6] = "Hello";
	ft_memset(str7, 'b', 5);
	memset(str8, 'b', 5);
	printf("ft_memset('Hello', 'b', 5) = %s | memset('Hello', 'b', 5) = %s\n", str7, str8);

	printf("---------ft_isalpha----------\n");
	printf("ft_isalpha('a') = %d | isalpha ('a') = %d\n", ft_isalpha('a'), isalpha('a'));
	printf("ft_isalpha('Z') = %d | isalpha ('Z') = %d\n", ft_isalpha('Z'), isalpha('Z'));
	printf("ft_isalpha('1') = %d | isalpha ('1') = %d\n", ft_isalpha('1'), isalpha('1'));
	printf("ft_isalpha(' ') = %d | isalpha (' ') = %d\n", ft_isalpha(' '), isalpha(' '));
	printf("ft_isalpha('@') = %d | isalpha ('@') = %d\n", ft_isalpha('@'), isalpha('@'));
	printf("ft_isalpha('EOF') = %d | isalpha ('EOF') = %d\n", ft_isalpha(EOF), isalpha(EOF));

	printf("---------ft_isdigit-----------\n");
	printf("ft_isdigit('a') = %d | isdigit ('a') = %d\n", ft_isdigit('a'), isdigit('a'));
	printf("ft_isdigit('Z') = %d | isdigit ('Z') = %d\n", ft_isdigit('Z'), isdigit('Z'));
	printf("ft_isdigit('1') = %d | isdigit ('1') = %d\n", ft_isdigit('1'), isdigit('1'));
	printf("ft_isdigit(' ') = %d | isdigit (' ') = %d\n", ft_isdigit(' '), isdigit(' '));
	printf("ft_isdigit('@') = %d | isdigit ('@') = %d\n", ft_isdigit('@'), isdigit('@'));
	printf("ft_isdigit('EOF') = %d | isdigit ('EOF') = %d\n", ft_isdigit(EOF), isdigit(EOF));
	

	printf("---------ft_isalnum-----------\n");
	printf("ft_isalnum('a') = %d | isalnum ('a') = %d\n", ft_isalnum('a'), isalnum('a'));
	printf("ft_isalnum('Z') = %d | isalnum ('Z') = %d\n", ft_isalnum('Z'), isalnum('Z'));
	printf("ft_isalnum('1') = %d | isalnum ('1') = %d\n", ft_isalnum('1'), isalnum('1'));
	printf("ft_isalnum(' ') = %d | isalnum (' ') = %d\n", ft_isalnum(' '), isalnum(' '));
	printf("ft_isalnum('@') = %d | isalnum ('@') = %d\n", ft_isalnum('@'), isalnum('@'));
	printf("ft_isalnum('EOF') = %d | isalnum ('EOF') = %d\n", ft_isalnum(EOF), isalnum(EOF));

	printf("---------ft_isascii-----------\n");
	printf("ft_isascii('a') = %d | isascii ('a') = %d\n", ft_isascii('a'), isascii('a'));
	printf("ft_isascii('Z') = %d | isascii ('Z') = %d\n", ft_isascii('Z'), isascii('Z'));
	printf("ft_isascii('1') = %d | isascii ('1') = %d\n", ft_isascii('1'), isascii('1'));
	printf("ft_isascii(' ') = %d | isascii (' ') = %d\n", ft_isascii(' '), isascii(' '));
	printf("ft_isascii('EOF') = %d | isascii ('EOF') = %d\n", ft_isascii(EOF), isascii(EOF));
	
	printf("---------ft_isprint-----------\n");
	printf("ft_isprint('a') = %d | isprint ('a') = %d\n", ft_isprint('a'), isprint('a'));
	printf("ft_isprint('Z') = %d | isprint ('Z') = %d\n", ft_isprint('Z'), isprint('Z'));
	printf("ft_isprint('1') = %d | isprint ('1') = %d\n", ft_isprint('1'), isprint('1'));
	printf("ft_isprint(' ') = %d | isprint (' ') = %d\n", ft_isprint(' '), isprint(' '));
	printf("ft_isprint('EOF') = %d | isprint ('EOF') = %d\n", ft_isprint(EOF), isprint(EOF));
	
	printf("---------ft_toupper-----------\n");
	printf("ft_toupper('a') = %d | toupper ('a') = %d\n", ft_toupper('a'), toupper('a'));
	printf("ft_toupper('Z') = %d | toupper ('Z') = %d\n", ft_toupper('Z'), toupper('Z'));
	printf("ft_toupper('1') = %d | toupper ('1') = %d\n", ft_toupper('1'), toupper('1'));
	printf("ft_toupper(' ') = %d | toupper (' ') = %d\n", ft_toupper(' '), toupper(' '));
	printf("ft_toupper('EOF') = %d | toupper ('EOF') = %d\n", ft_toupper(EOF), toupper(EOF));
	
	printf("---------ft_tolower-----------\n");
	printf("ft_tolower('a') = %d | tolower ('a') = %d\n", ft_tolower('a'), tolower('a'));
	printf("ft_tolower('Z') = %d | tolower ('Z') = %d\n", ft_tolower('Z'), tolower('Z'));
	printf("ft_tolower('1') = %d | tolower ('1') = %d\n", ft_tolower('1'), tolower('1'));
	printf("ft_tolower(' ') = %d | tolower (' ') = %d\n", ft_tolower(' '), tolower(' '));
	printf("ft_tolower('EOF') = %d | tolower ('EOF') = %d\n", ft_tolower(EOF), tolower(EOF));
	
	printf("---------ft_strlen------------\n");
	printf("ft_strlen('teste') = %ld | strlen ('teste') = %ld\n", ft_strlen("teste"), strlen("teste"));
	printf("ft_strlen('control') = %ld | strlen ('control') = %ld\n", ft_strlen("control"), strlen("control"));
	printf("ft_strlen('a') = %ld | strlen ('a') = %ld\n", ft_strlen("a"), strlen("a"));
	printf("ft_strlen('') = %ld | strlen ('') = %ld\n", ft_strlen(""), strlen(""));
	printf("ft_strlen(' ') = %ld | strlen (' ') = %ld\n", ft_strlen(" "), strlen(" "));
	
	printf("---------ft_strlcpy------------\n");
	printf("ft_strlcpy(dst[5], \"tes\", 5) = %ld | strlcpy(dst[5], \"tes\", 5) = %ld\n", ft_strlcpy((char[5]){}, "tes", 5), strlcpy((char[5]){}, "tes", 5));
	printf("ft_strlcpy(dst[4], \"testing\", 4) = %ld | strlcpy(dst[4], \"testing\", 4) = %ld\n", ft_strlcpy((char[4]){}, "testing", 4), strlcpy((char[4]){}, "testing", 4)); 
	printf("ft_strlcpy(dst[5], \"\", 5) = %ld | strlcpy(dst[5], \"\", 5) = %ld\n", ft_strlcpy((char[5]){}, "", 5), strlcpy((char[5]){}, "", 5));

	printf("---------ft_strlcat------------\n");
	printf("ft_strlcat(\"hel\", \"lo\", 6) = %ld | strlcat(\"hel\", \"lo\", 6) = %ld\n", ft_strlcat((char[6]){"hel"}, "lo", 6), strlcat((char[6]){"hel"}, "lo", 6));
	printf("ft_strlcat(\"hel\", \"world\", 6) = %ld | strlcat(\"hel\", \"world\", 6) = %ld\n", ft_strlcat((char[6]){"hel"}, "world", 6), strlcat((char[6]){"hel"}, "world", 6)); 
	printf("ft_strlcat(\"hello\", \"world\", 4) = %ld | strlcat(\"hello\", \"world\", 4) = %ld\n", ft_strlcat((char[6]){"hello"}, "world", 4), strlcat((char[6]){"hello"}, "world", 4));
	
	printf("---------ft_strchr------------\n");
	printf("ft_strchr('hello', 'e') = %s | strchr ('hello','e') = %s\n", ft_strchr("hello", 'e'), strchr("hello", 'e'));
	printf("ft_strchr('hello', 'l') = %s | strchr ('hello', 'l') = %s\n", ft_strchr("hello", 'l'), strchr("hello", 'l'));
	printf("ft_strchr('hello', 'null') = %s | strchr ('hello', 'null') = %s\n", ft_strchr("hello", '\0'), strchr("hello", '\0'));
	
	printf("---------ft_strrchr------------\n");
	printf("ft_strrchr('hello', 'e') = %s | strrchr ('hello','e') = %s\n", ft_strrchr("hello", 'e'), strrchr("hello", 'e'));
	printf("ft_strrchr('hello', 'l') = %s | strrchr ('hello', 'l') = %s\n", ft_strrchr("hello", 'l'), strrchr("hello", 'l'));
	printf("ft_strrchr('hello', 'null') = %s | strrchr ('hello', 'null') = %s\n", ft_strrchr("hello", '\0'), strrchr("hello", '\0'));

	printf("---------ft_strnstr------------\n");
	printf("ft_strnstr('hello world', 'world', 11) = %s\n" , ft_strnstr("hello world", "world", 11));
	printf("ft_strnstr('testing this', 'this', 7) = %s\n", ft_strnstr("testing this", "this", 7));
	printf("ft_strnstr('testing world', 'testing', 12) = %s\n" , ft_strnstr("testing world", "testing", 7));
	printf("ft_strnstr('hello', 'world', 11) = %s\n", ft_strnstr("hello", "world", 11));
	
	printf("---------ft_strncmp------------\n");
	printf("ft_strncmp('Hello', 'Hello', 3) = %d | strncmp ('Hello', 'Hello', 3) = %d\n", ft_strncmp("Hello", "Hello", 3), strncmp("Hello", "Hello", 3));
	printf("ft_strncmp('Hello', 'Hemo', 3) = %d | strncmp ('Hello', 'Hemo', 3) = %d\n", ft_strncmp("Hello", "Hemo", 3), strncmp("Hello", "Hemo", 3));
	printf("ft_strncmp('Hemo', 'Hello', 3) = %d | strncmp ('Hemo', 'Hello', 3) = %d\n", ft_strncmp("Hemo", "Hello", 3), strncmp("Hemo", "Hello", 3));
	
	printf("--------ft_bzero--------------\n");
	char str[] = "Hello";
    printf("antes: %s\n", str);
    ft_bzero(str, 2);
    printf("depois: %s\n", str);
    printf("str[0] = %d\n", str[0]);
    printf("str[1] = %d\n", str[1]);
    printf("str[2] = %c\n", str[2]);
	printf("str[2] = %c\n", str[3]);
	printf("str[2] = %c\n", str[4]);

	printf("--------ft_atoi--------------\n");
	printf("ft_atoi('  --1234') = %d | atoi ('  --1234') = %d\n", ft_atoi("  --1234"), atoi("  --1234"));
	printf("ft_atoi('  +1234') = %d | atoi ('  +1234') = %d\n", ft_atoi("  +1234"), atoi("  +1234"));
	return (0);

}