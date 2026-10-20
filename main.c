#include "libft.h"

int	main(void)
{
	char buf_ft[32];
	char buf_lib[32];
	char *dup_ft;
	char *dup_lib;
	char *arr_ft;
	char *arr_lib;
	int i;

	printf("---------ft_memset----------\n");
	memcpy(buf_ft, "Hello", sizeof("Hello"));
	memcpy(buf_lib, "Hello", sizeof("Hello"));
	printf("ft_memset = %s | memset = %s\n", buf_ft, buf_lib);
	ft_memset(buf_ft, 'a', 2);
	memset(buf_lib, 'a', 2);
	printf("ft_memset('Hello', 'a', 2) = %s | memset('Hello', 'a', 2) = %s\n", buf_ft, buf_lib);
	memcpy(buf_ft, "Hello", sizeof("Hello"));
	memcpy(buf_lib, "Hello", sizeof("Hello"));
	ft_memset(buf_ft, 0, 3);
	memset(buf_lib, 0, 3);
	printf("ft_memset('Hello', 0, 3) = %s | memset('Hello', 0, 3) = %s\n", buf_ft, buf_lib);
	memcpy(buf_ft, "Hello", sizeof("Hello"));
	memcpy(buf_lib, "Hello", sizeof("Hello"));
	ft_memset(buf_ft, 'b', 5);
	memset(buf_lib, 'b', 5);
	printf("ft_memset('Hello', 'b', 5) = %s | memset('Hello', 'b', 5) = %s\n", buf_ft, buf_lib);

	printf("---------ft_memcpy----------\n");
	memcpy(buf_ft, "Hello", sizeof("Hello"));
	memcpy(buf_lib, "World", sizeof("World"));
	ft_memcpy(buf_ft, "ABCDE", 5);
	memcpy(buf_lib, "ABCDE", 5);
	printf("ft_memcpy('Hello', 'ABCDE', 5) = %s | memcpy('World', 'ABCDE', 5) = %s\n", buf_ft, buf_lib);
	memcpy(buf_ft, "Hello", sizeof("Hello"));
	memcpy(buf_lib, "Hello", sizeof("Hello"));
	ft_memcpy(buf_ft, buf_lib, 0);
	memcpy(buf_ft, buf_lib, 0);
	printf("ft_memcpy('Hello', 'Hello', 0) = %s | memcpy('Hello', 'Hello', 0) = %s\n", buf_ft, buf_lib);
	memcpy(buf_ft, "Hello", sizeof("Hello"));
	memcpy(buf_lib, "Hello", sizeof("Hello"));
	ft_memcpy(buf_ft, "XY", 2);
	memcpy(buf_lib, "XY", 2);
	printf("ft_memcpy('Hello', 'XY', 2) = %s | memcpy('Hello', 'XY', 2) = %s\n", buf_ft, buf_lib);
	memcpy(buf_ft, "Hello", sizeof("Hello"));
	memcpy(buf_lib, "Hello", sizeof("Hello"));
	ft_memcpy(buf_ft, "ABCDE", 5);
	memcpy(buf_lib, "ABCDE", 5);
	printf("ft_memcpy('Hello', 'ABCDE', 5) = %s | memcpy('Hello', 'ABCDE', 5) = %s\n", buf_ft, buf_lib);

	printf("---------ft_memccpy------------\n");
	char str19[] = "Hello";
	char str20[] = "Hello";
	ft_memccpy(str19, "abcde", 'c', 5);
	memccpy(str20, "abcde", 'c', 5);
	printf("ft_memccpy('Hello', 'abcde', 'c', 5) = %s | memccpy('Hello', 'abcde', 'c', 5) = %s\n", str19, str20);

	char str21[] = "Hello";
	char str22[] = "Hello";
	ft_memccpy(str21, "abcde", 'd', 5);
	memccpy(str22, "abcde", 'd', 5);
	printf("ft_memccpy('Hello', 'abcde', 'x', 5) = %s | memccpy('Hello', 'abcde', 'x', 5) = %s\n", str21, str22);
	
	printf("---------ft_memmove------------\n");
	memcpy(buf_ft, "ABCDE", sizeof("ABCDE"));
	memcpy(buf_lib, "ABCDE", sizeof("ABCDE"));
	ft_memmove(buf_ft + 2, buf_ft, 3);
	memmove(buf_lib + 2, buf_lib, 3);
	printf("ft_memmove(str + 2, str, 3) = %s | memmove(str + 2, str, 3) = %s\n", buf_ft, buf_lib);

	memcpy(buf_ft, "ABCDE", sizeof("ABCDE"));
	memcpy(buf_lib, "ABCDE", sizeof("ABCDE"));
	ft_memmove(buf_ft, buf_ft + 2, 3);
	memmove(buf_lib, buf_lib + 2, 3);
	printf("ft_memmove(str, str + 2, 3) = %s | memmove(str, str + 2, 3) = %s\n", buf_ft, buf_lib);

	printf("---------ft_memchr------------\n");
	printf("ft_memchr('hello', 'e', 3) = %p | memchr ('hello','e', 3) = %p\n", ft_memchr("hello", 'e', 3), memchr("hello", 'e', 3));
	printf("ft_memchr('hello', 'l') = %p | memchr ('hello', 'l') = %p\n", ft_memchr("hello", 'l', 3), memchr("hello", 'l', 3));
	printf("ft_memchr('hello', 'null') = %p | memchr ('hello', 'null') = %p\n", ft_memchr("hello", '\0', 6), memchr("hello", '\0', 6));
	

	printf("---------ft_memcmp------------\n");
	printf("ft_memcmp('Hello', 'Hello', 3) = %d | memcmp ('Hello', 'Hello', 3) = %d\n", ft_memcmp("Hello", "Hello", 3), memcmp("Hello", "Hello", 3));
	printf("ft_memcmp('Hello', 'Hemo', 3) = %d | memcmp ('Hello', 'Hemo', 3) = %d\n", ft_memcmp("Hello", "Hemo", 3), memcmp("Hello", "Hemo", 3));
	printf("ft_memcmp('Hemo', 'Hello', 3) = %d | memcmp ('Hemo', 'Hello', 3) = %d\n", ft_memcmp("Hemo", "Hello", 3), memcmp("Hemo", "Hello", 3));
	
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
	
	printf("---------ft_strdup------------\n");
	char *dup1 = ft_strdup("Hello");
	char *dup2 = strdup("Hello");
	printf("ft_strdup(\"Hello\") = %s | strdup(\"Hello\") = %s\n", dup1, dup2);
	free(dup1);
	free(dup2);

	char *dup3 = ft_strdup("");
	char *dup4 = strdup("");
	printf("ft_strdup(\"\") = \"%s\" | strdup(\"\") = \"%s\"\n", dup3, dup4);
	free(dup3);
	free(dup4);

	char *dup5 = ft_strdup("teste");
	char *dup6 = strdup("teste");
	printf("ft_strdup(\"teste\") = %s | strdup(\"teste\") = %s\n", dup5, dup6);
	free(dup5);
	free(dup6);

	printf("--------ft_bzero--------------\n");
	memcpy(buf_ft, "Hello", sizeof("Hello"));
    printf("antes: %s\n", buf_ft);
    ft_bzero(buf_ft, 2);
    printf("depois: %s\n", buf_ft);
    printf("str[0] = %d\n", buf_ft[0]);
    printf("str[1] = %d\n", buf_ft[1]);
    printf("str[2] = %c\n", buf_ft[2]);
	printf("str[2] = %c\n", buf_ft[3]);
	printf("str[2] = %c\n", buf_ft[4]);

	printf("--------ft_atoi--------------\n");
	printf("ft_atoi('  --1234') = %d | atoi ('  --1234') = %d\n", ft_atoi("  --1234"), atoi("  --1234"));
	printf("ft_atoi('  +1234') = %d | atoi ('  +1234') = %d\n", ft_atoi("  +1234"), atoi("  +1234"));

	printf("---------ft_calloc------------\n");
arr_ft = ft_calloc(3, sizeof(int));
	arr_lib = calloc(3, sizeof(int));
	printf("ft_calloc(3, sizeof(int)): ");
	for (i = 0; i < 3; i++)
	printf("%d ", arr_ft[i]);
	printf("| calloc(3, sizeof(int)): ");
	for (i = 0; i < 3; i++)
	printf("%d ", arr_lib[i]);
	printf("\n");
	free(arr_ft);
	free(arr_lib);

	dup_ft = ft_calloc(6, sizeof(char));
	dup_lib = calloc(6, sizeof(char));
	printf("ft_calloc(6, sizeof(char)): \"%s\" | calloc(6, sizeof(char)): \"%s\"\n",dup_ft, dup_lib);
	free(dup_ft);
	free(dup_lib);

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

	printf("---------ft_substr------------\n");
	dup_ft = ft_substr("Hello World", 0, 0);
	printf("ft_substr('Hello World', 6, 11): \"%s\"\n", dup_ft);
	free(dup_ft);
	
	printf("---------ft_strjoin------------\n");

	dup_ft = ft_strjoin("Hello ", "World");
	printf("ft_strjoin(\"Hello \", \"World\"): \"%s\"\n", dup_ft);
	free(dup_ft);

	dup_ft = ft_strjoin("", "World");
	printf("ft_strjoin(\"\", \"World\"): \"%s\"\n", dup_ft);
	free(dup_ft);

	dup_ft = ft_strjoin("Hello", "");
	printf("ft_strjoin(\"Hello\", \"\"): \"%s\"\n", dup_ft);
	free(dup_ft);

	dup_ft = ft_strjoin("", "");
	printf("ft_strjoin(\"\", \"\"): \"%s\"\n", dup_ft);
	free(dup_ft);
}