/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:34:43 by jquintin          #+#    #+#             */
/*   Updated: 2022/10/15 13:45:45 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <malloc.h>

void		ft_isalpha_test(void);
void		ft_isdigit_test(void);
void		ft_isalnum_test(void);
void		ft_isascii_test(void);
void		ft_isprint_test(void);
void		ft_strlen_test(void);
void		ft_memset_test(void);
void		ft_bzero_test(void);
void		ft_memcpy_test(void);
void		ft_memmove_test(void);
void		ft_strlcpy_test(void);
void		ft_strlcat_test(void);
void		ft_toupper_test(void);
void		ft_tolower_test(void);
void		ft_strchr_test(void);
void		ft_strrchr_test(void);
void		ft_strncmp_test(void);
void		ft_memchr_test(void);
void		ft_memcmp_test(void);
void		ft_strnstr_test(void);
void		ft_atoi_test(void);
void		ft_calloc_test(void);
void		ft_strdup_test(void);
void		ft_substr_test(void);
void		ft_strjoin_test(void);
void		ft_strtrim_test(void);
void		ft_split_test(void);
void		ft_itoa_test(void);

void		ft_strmapi_test(void);
static char	ft_strmapi_aux_test1(unsigned int i, char c);
static char ft_strmapi_aux_test2(unsigned int i, char c);

void		ft_striteri_test(void);
static void	ft_striteri_aux_test1(unsigned int i, char *c);
static void	ft_striteri_aux_test2(unsigned int i, char *c);

void		ft_putchar_fd_test(void);
void		ft_putstr_fd_test(void);
void		ft_putendl_fd_test(void);
void		ft_putnbr_fd_test(void);

int	main(void)
{
	printf("\n\n--LIBFT_TESTS : part I --\n\n");
	printf("libc   : library function\nft_    : replica function\nauthor : jquintin\n\n");

	ft_isalpha_test();
	ft_isdigit_test();
	ft_isalnum_test();
	ft_isascii_test();
	ft_isprint_test();
	ft_strlen_test();
	ft_memset_test();
	ft_bzero_test();
	ft_memcpy_test();
	ft_memmove_test();
	ft_strlcpy_test();
	ft_strlcat_test();
	ft_toupper_test();
	ft_tolower_test();
	ft_strchr_test();
	ft_strrchr_test();
	ft_strncmp_test();
	ft_memchr_test();
	ft_memcmp_test();
	ft_strnstr_test();
	ft_atoi_test();

	ft_calloc_test();
	ft_strdup_test();


	printf("\n\n\n--ADDITIONAL_TESTS : part II --\n\n");
	printf("\nft_    : additional function\nauthor : jquintin\n\n");

	ft_substr_test();
	ft_strjoin_test();
	ft_strtrim_test();
	ft_split_test();
	ft_itoa_test();
	ft_strmapi_test();
	ft_striteri_test();
	ft_putchar_fd_test();
	ft_putstr_fd_test();
	ft_putendl_fd_test();
	ft_putnbr_fd_test();
}

void	ft_isalpha_test(void)
{
	printf("\n\n--FT_ISALPHA--\n\n");

	printf("libc - nul : %d\n", isalpha(0));
	printf("ft_  - nul : %d\n\n", ft_isalpha(0));
	printf("libc - sp : %d\n", isalpha(32));
	printf("ft_  - sp : %d\n\n", ft_isalpha(32));
	printf("libc - '!' : %d\n", isalpha('!'));
	printf("ft_  - '!' : %d\n\n", ft_isalpha('!'));
	printf("libc - '/' : %d\n", isalpha('/'));
	printf("ft_  - '/' : %d\n\n", ft_isalpha('/'));
	printf("libc - '0' : %d\n", isalpha('0'));
	printf("ft_  - '0' : %d\n\n", ft_isalpha('0'));
	printf("libc - '9' : %d\n", isalpha('9'));
	printf("ft_  - '9' : %d\n\n", ft_isalpha('9'));
	printf("libc - 'A' : %d\n", isalpha('A'));
	printf("ft_  - 'A' : %d\n\n", ft_isalpha('A'));
	printf("libc - 'Z' : %d\n", isalpha('Z'));
	printf("ft_  - 'Z' : %d\n\n", ft_isalpha('Z'));
	printf("libc - 'a' : %d\n", isalpha('a'));
	printf("ft_  - 'a' : %d\n\n", ft_isalpha('a'));
	printf("libc - 'z' : %d\n", isalpha('z'));
	printf("ft_  - 'z' : %d\n\n", ft_isalpha('z'));
	printf("libc - '{' : %d\n", isalpha('{'));
	printf("ft_  - '{' : %d\n\n", ft_isalpha('{'));
	printf("libc - del : %d\n", isalpha(128));
	printf("ft_  - del : %d\n\n", ft_isalpha(128));
}

void	ft_isdigit_test(void)
{
	printf("\n\n--FT_ISDIGIT--\n\n");

	printf("libc - nul : %d\n", isdigit(0));
	printf("ft_  - nul : %d\n\n", ft_isdigit(0));
	printf("libc - sp : %d\n", isdigit(32));
	printf("ft_  - sp : %d\n\n", ft_isdigit(32));
	printf("libc - '!' : %d\n", isdigit('!'));
	printf("ft_  - '!' : %d\n\n", ft_isdigit('!'));
	printf("libc - '/' : %d\n", isdigit('/'));
	printf("ft_  - '/' : %d\n\n", ft_isdigit('/'));
	printf("libc - '0' : %d\n", isdigit('0'));
	printf("ft_  - '0' : %d\n\n", ft_isdigit('0'));
	printf("libc - '9' : %d\n", isdigit('9'));
	printf("ft_  - '9' : %d\n\n", ft_isdigit('9'));
	printf("libc - 'A' : %d\n", isdigit('A'));
	printf("ft_  - 'A' : %d\n\n", ft_isdigit('A'));
	printf("libc - 'Z' : %d\n", isdigit('Z'));
	printf("ft_  - 'Z' : %d\n\n", ft_isdigit('Z'));
	printf("libc - 'a' : %d\n", isdigit('A'));
	printf("ft_  - 'a' : %d\n\n", ft_isdigit('A'));
	printf("libc - 'z' : %d\n", isdigit('z'));
	printf("ft_  - 'z' : %d\n\n", ft_isdigit('z'));
	printf("libc - '{' : %d\n", isdigit('{'));
	printf("ft_  - '{' : %d\n\n", ft_isdigit('{'));
	printf("libc - del : %d\n", isdigit(127));
	printf("ft_  - del : %d\n\n", ft_isdigit(127));
}

void	ft_isalnum_test(void)
{
	printf("\n\n--FT_ISALNUM--\n\n");

	printf("libc - nul : %d\n", isalnum(0));
	printf("ft_  - nul : %d\n\n", ft_isalnum(0));
	printf("libc - sp : %d\n", isalnum(32));
	printf("ft_  - sp : %d\n\n", ft_isalnum(32));
	printf("libc - '!' : %d\n", isalnum('!'));
	printf("ft_  - '!' : %d\n\n", ft_isalnum('!'));
	printf("libc - '/' : %d\n", isalnum('/'));
	printf("ft_  - '/' : %d\n\n", ft_isalnum('/'));
	printf("libc - '0' : %d\n", isalnum('0'));
	printf("ft_  - '0' : %d\n\n", ft_isalnum('0'));
	printf("libc - '9' : %d\n", isalnum('9'));
	printf("ft_  - '9' : %d\n\n", ft_isalnum('9'));
	printf("libc - 'A' : %d\n", isalnum('A'));
	printf("ft_  - 'A' : %d\n\n", ft_isalnum('A'));
	printf("libc - 'Z' : %d\n", isalnum('Z'));
	printf("ft_  - 'Z' : %d\n\n", ft_isalnum('Z'));
	printf("libc - 'a' : %d\n", isalnum('A'));
	printf("ft_  - 'a' : %d\n\n", ft_isalnum('A'));
	printf("libc - 'z' : %d\n", isalnum('z'));
	printf("ft_  - 'z' : %d\n\n", ft_isalnum('z'));
	printf("libc - '{' : %d\n", isalnum('{'));
	printf("ft_  - '{' : %d\n\n", ft_isalnum('{'));
	printf("libc - del : %d\n", isalnum(127));
	printf("ft_  - del : %d\n\n", ft_isalnum(127));
}

void	ft_isascii_test(void)
{
	printf("\n\n--FT_ISASCII--\n\n");

	printf("libc - (-1) : %d\n", isascii(-1));
	printf("ft_  - (-1) : %d\n\n", ft_isascii(-1));
	printf("libc - nul : %d\n", isascii(0));
	printf("ft_  - nul : %d\n\n", ft_isascii(0));
	printf("libc - sp : %d\n", isascii(32));
	printf("ft_  - sp : %d\n\n", ft_isascii(32));
	printf("libc - '!' : %d\n", isascii('!'));
	printf("ft_  - '!' : %d\n\n", ft_isascii('!'));
	printf("libc - '/' : %d\n", isascii('/'));
	printf("ft_  - '/' : %d\n\n", ft_isascii('/'));
	printf("libc - '0' : %d\n", isascii('0'));
	printf("ft_  - '0' : %d\n\n", ft_isascii('0'));
	printf("libc - '9' : %d\n", isascii('9'));
	printf("ft_  - '9' : %d\n\n", ft_isascii('9'));
	printf("libc - 'A' : %d\n", isascii('A'));
	printf("ft_  - 'A' : %d\n\n", ft_isascii('A'));
	printf("libc - 'Z' : %d\n", isascii('Z'));
	printf("ft_  - 'Z' : %d\n\n", ft_isascii('Z'));
	printf("libc - 'a' : %d\n", isascii('A'));
	printf("ft_  - 'a' : %d\n\n", ft_isascii('A'));
	printf("libc - 'z' : %d\n", isascii('z'));
	printf("ft_  - 'z' : %d\n\n", ft_isascii('z'));
	printf("libc - '{' : %d\n", isascii('{'));
	printf("ft_  - '{' : %d\n\n", ft_isascii('{'));
	printf("libc - del : %d\n", isascii(127));
	printf("ft_  - del : %d\n\n", ft_isascii(127));
	printf("libc - (128) : %d\n", isascii(128));
	printf("ft_  - (128) : %d\n\n", ft_isascii(128));

}

void	ft_isprint_test(void)
{
	printf("\n\n--FT_ISPRINT--\n\n");

	printf("libc - nul : %d\n", isprint(0));
	printf("ft_  - nul : %d\n\n", ft_isprint(0));
	printf("libc - sp : %d\n", isprint(32));
	printf("ft_  - sp : %d\n\n", ft_isprint(32));
	printf("libc - '!' : %d\n", isprint('!'));
	printf("ft_  - '!' : %d\n\n", ft_isprint('!'));
	printf("libc - '/' : %d\n", isprint('/'));
	printf("ft_  - '/' : %d\n\n", ft_isprint('/'));
	printf("libc - '0' : %d\n", isprint('0'));
	printf("ft_  - '0' : %d\n\n", ft_isprint('0'));
	printf("libc - '9' : %d\n", isprint('9'));
	printf("ft_  - '9' : %d\n\n", ft_isprint('9'));
	printf("libc - 'A' : %d\n", isprint('A'));
	printf("ft_  - 'A' : %d\n\n", ft_isprint('A'));
	printf("libc - 'Z' : %d\n", isprint('Z'));
	printf("ft_  - 'Z' : %d\n\n", ft_isprint('Z'));
	printf("libc - 'a' : %d\n", isprint('A'));
	printf("ft_  - 'a' : %d\n\n", ft_isprint('A'));
	printf("libc - 'z' : %d\n", isprint('z'));
	printf("ft_  - 'z' : %d\n\n", ft_isprint('z'));
	printf("libc - '{' : %d\n", isprint('{'));
	printf("ft_  - '{' : %d\n\n", ft_isprint('{'));
	printf("libc - del : %d\n", isprint(127));
	printf("ft_  - del : %d\n\n", ft_isprint(127));

}

void	ft_strlen_test(void)
{
	printf("\n\n--FT_STRLEN--\n\n");

	char s1[6] = "test1";
	printf("libc - \"test1\" : %zu\n", strlen(s1));
	printf("ft_  - \"test1\" : %zu\n\n", ft_strlen(s1));
	char s2[] = "";
	printf("libc - \"\" : %zu\n", strlen(s2));
	printf("ft_  - \"\" : %zu\n\n", ft_strlen(s2));
}

void	ft_memset_test(void)
{
	printf("\n\n--FT_MEMSET--\n\n");

	char s1[6] = "test1";
	memset(s1, 90, sizeof(char) * strlen(s1));
	printf("libc - \"test1\" to 'Z' buffer (5) : %s\n", s1);
	char s2[6] = "test1";
	ft_memset(s2, 90, sizeof(char) * ft_strlen(s2));
	printf("ft_  - \"test1\" to 'Z' buffer (5) : %s\n\n", s2);
}

void	ft_bzero_test(void)
{
	printf("\n\n--FT_BZERO--\n\n");

	char s1[] = "test1";
	bzero(s1 + 2, strlen(s1) - 1);
	printf("libc - str + 2 \"te->st1\" to (0) buffer (4) : %s\n", s1);
	char s2[] = "test1";
	ft_bzero(s2 + 2, ft_strlen(s2) - 1);
	printf("ft_  - str + 2 \"te->st1\" to (0) buffer (4) : %s\n\n", s2);
	char s3[] = "test2";
	bzero(s3, strlen(s3) + 1);
	printf("libc - \"test2\" to (0) buffer (6) : %s\n", s3);
	char s4[] = "test2";
	ft_bzero(s4, ft_strlen(s4) + 1);
	printf("ft_  - \"test2\" to (0) buffer (6) : %s\n\n", s4);
}

void	ft_memcpy_test(void)
{
	printf("\n\n--FT_MEMCPY--\n");


	printf("\n\n--default case--\n\n");

	//ints
	int	int_src1[] = {3, 5, 7, 1};
	int	int_dst1[5] = {7, 3, 5};
	memcpy(int_dst1 + 2, int_src1 + 1, sizeof(int) * 3);
	printf("libc - dst + 2 {73->5} || src + 1 {3->571} : ");
	for (int i = 0; i < 5; i++)
		printf("%d", int_dst1[i]);
	printf("\n");
	int	int_src2[] = {3, 5, 7, 1};
	int	int_dst2[5] = {7, 3, 5};
	ft_memcpy(int_dst2 + 2, int_src2 + 1, sizeof(int) * 3);
	printf("ft_  - dst + 2 {73->5} || src + 1 {3->571} : ");
	for (int i = 0; i < 5; i++)
		printf("%d", int_dst2[i]);
	printf("\n\n");

	//strings
	char	char_src1[] = "test2";
	char	char_dst1[6] = "";
	memcpy(char_dst1, char_src1, sizeof(char) * ft_strlen(char_src1));
	printf("libc - dst '' || src \"test2\" : %s\n", char_dst1);
	char	char_src2[] = "test2";
	char	char_dst2[6] = "";
	ft_memcpy(char_dst2, char_src2, sizeof(char) * ft_strlen(char_src2));
	printf("ft_  - dst '' || src \"test2\" : %s\n", char_dst2);


	printf("\n\n--overlapping case--\n\n");

	//overlapping ints
	int	int_src3[5] = {1, 2, 3, 4, 5};
	memcpy(int_src3 + 1, int_src3, sizeof(int) * 4);
	printf("libc - src + 1 {1->2345} || src {12345} : ");
	for (int i = 0; i < 5; i++)
		printf("%d ", int_src3[i]);
	printf("\n");
	int int_src4[5] = {1, 2, 3, 4, 5};
	ft_memcpy(int_src4 + 1, int_src4, sizeof(int) * 4);
	printf("ft_  - src + 1 {1->2345} || src {12345} : ");
	for (int i = 0; i < 5; i++)
		printf("%d ", int_src4[i]);
	printf("\n\n");

	//overlapping strings
	char	char_src3[] = "test1 test2";
	memcpy(char_src3 + 4, char_src3, sizeof(char) * 6);
	printf("libc - src + 4 \"test->1 test2\" || src \"test1 test2\" : %s\n", char_src3);
	char	char_src4[] = "test1 test2";
	ft_memcpy(char_src4 + 4, char_src4, sizeof(char) * 6);
	printf("ft_  - src + 4 \"test->1 test2\" || src \"test1 test2\" : %s\n\n", char_src4);
}

void	ft_memmove_test(void)
{
	printf("\n\n--FT_MEMMOVE--\n");


	printf("\n\n--default case--\n\n");

	//ints
	int	int_src1[] = {3, 5, 7, 1};
	int	int_dst1[5] = {7, 3, 5};
	memmove(int_dst1 + 2, int_src1 + 1, sizeof(int) * 3);
	printf("libc - dst + 2 {73->5} || src + 1 {3->571} : ");
	for (int i = 0; i < 5; i++)
		printf("%d", int_dst1[i]);
	printf("\n");
	int	int_src2[] = {3, 5, 7, 1};
	int	int_dst2[5] = {7, 3, 5};
	ft_memmove(int_dst2 + 2, int_src2 + 1, sizeof(int) * 3);
	printf("ft_  - dst + 2 {73->5} || src + 1 {3->571} : ");
	for (int i = 0; i < 5; i++)
		printf("%d", int_dst2[i]);
	printf("\n\n");

	//strings
	char	char_src1[] = "test2";
	char	char_dst1[6] = "";
	memmove(char_dst1, char_src1, sizeof(char) * ft_strlen(char_src1));
	printf("libc - dst \"\" || src \"test2\" : %s\n", char_dst1);
	char	char_src2[] = "test2";
	char	char_dst2[6] = "";
	ft_memmove(char_dst2, char_src2, sizeof(char) * ft_strlen(char_src2));
	printf("ft_  - dst \"\" || src \"test2\" : %s\n", char_dst2);


	printf("\n\n--overlapping case--\n\n");

	//overlapping ints
	int	int_src3[5] = {1, 2, 3, 4, 5};
	memmove(int_src3 + 1, int_src3, sizeof(int) * 4);
	printf("libc - src + 1 {1->2345} || src {12345} : ");
	for (int i = 0; i < 5; i++)
		printf("%d ", int_src3[i]);
	printf("\n");
	int int_src4[5] = {1, 2, 3, 4, 5};
	ft_memmove(int_src4 + 1, int_src4, sizeof(int) * 4);
	printf("ft_  - src + 1 {1->2345} || src {12345} : ");
	for (int i = 0; i < 5; i++)
		printf("%d ", int_src4[i]);
	printf("\n\n");

	//overlapping strings
	char	char_src3[] = "test1 test2";
	memmove(char_src3 + 4, char_src3, sizeof(char) * 6);
	printf("libc - src + 4 \"test->1 test2\" || src \"test1 test2\" : %s\n", char_src3);
	char	char_src4[] = "test1 test2";
	ft_memmove(char_src4 + 4, char_src4, sizeof(char) * 6);
	printf("ft_  - src + 4 \"test->1 test2\" || src \"test1 test2\" : %s\n\n", char_src4);
}

void	ft_strlcpy_test(void)
{
	printf("\n\n--FT_STRLCPY--\n");

	char src1[10] = "test1";
	char dst1[10] = "";
	printf("\nlibc - return value - dst \"\" || src \"test1\" || buffer (6) : %lu\n",
	strlcpy(dst1, src1, sizeof(char) * 6));
	printf("libc - cpy          - dst \"\" || src \"test1\" || buffer (6) : %s\n\n", dst1);
	char src2[10] = "test1";
	char dst2[10] = "";
	printf("ft_  - return value - dst \"\" || src \"test1\" || buffer (6) : %lu\n", ft_strlcpy(dst2, src2, sizeof(char) * 6));
	printf("ft_  - cpy          - dst \"\" || src \"test1\" || buffer (6) : %s\n\n", dst2);
}

void	ft_strlcat_test(void)
{
	printf("\n\n--FT_STRLCAT--\n");

	char src1[10] = "test1";
	char dst1[10] = "cat:";
	printf("\nlibc - return value - dst \"cat:\" || src \"test1\" || buffer (10) : %lu\n", strlcat(dst1, src1, sizeof(char) * 10));
	printf("libc - cpy & cat    - dst \"cat:\" || src \"test1\" || buffer (10) : %s\n\n", dst1);
	char src2[10] = "test1";
	char dst2[10] = "cat:";
	printf("ft_  - return value - dst \"cat:\" || src \"test1\" || buffer (10) : %lu\n", ft_strlcat(dst2, src2, sizeof(char) * 10));
	printf("ft_  - cpy & cat    - dst \"cat:\" || src \"test1\" || buffer (10) : %s\n\n", dst2);
}

void	ft_toupper_test(void)
{
	printf("\n\n--FT_TOUPPER--\n\n");

	printf("libc - nul : %c\n", toupper(0));
	printf("ft_  - nul : %c\n\n", ft_toupper(0));
	printf("libc - sp : %c\n", toupper(32));
	printf("ft_  - sp : %c\n\n", ft_toupper(32));
	printf("libc - '!' : %c\n", toupper('!'));
	printf("ft_  - '!' : %c\n\n", ft_toupper('!'));
	printf("libc - '/' : %c\n", toupper('/'));
	printf("ft_  - '/' : %c\n\n", ft_toupper('/'));
	printf("libc - '0' : %c\n", toupper('0'));
	printf("ft_  - '0' : %c\n\n", ft_toupper('0'));
	printf("libc - '9' : %c\n", toupper('9'));
	printf("ft_  - '9' : %c\n\n", ft_toupper('9'));
	printf("libc - 'A' : %c\n", toupper('A'));
	printf("ft_  - 'A' : %c\n\n", ft_toupper('A'));
	printf("libc - 'Z' : %c\n", toupper('Z'));
	printf("ft_  - 'Z' : %c\n\n", ft_toupper('Z'));
	printf("libc - 'a' : %c\n", toupper('A'));
	printf("ft_  - 'a' : %c\n\n", ft_toupper('A'));
	printf("libc - 'z' : %c\n", toupper('z'));
	printf("ft_  - 'z' : %c\n\n", ft_toupper('z'));
	printf("libc - '{' : %c\n", toupper('{'));
	printf("ft_  - '{' : %c\n\n", ft_toupper('{'));
	printf("libc - del : %c\n", toupper(127));
	printf("ft_  - del : %c\n\n", ft_toupper(127));

}

void	ft_tolower_test(void)
{
	printf("\n\n--FT_TOLOWER--\n\n");

	printf("libc - nul : %c\n", tolower(0));
	printf("ft_  - nul : %c\n\n", ft_tolower(0));
	printf("libc - sp : %c\n", tolower(32));
	printf("ft_  - sp : %c\n\n", ft_tolower(32));
	printf("libc - '!' : %c\n", tolower('!'));
	printf("ft_  - '!' : %c\n\n", ft_tolower('!'));
	printf("libc - '/' : %c\n", tolower('/'));
	printf("ft_  - '/' : %c\n\n", ft_tolower('/'));
	printf("libc - '0' : %c\n", tolower('0'));
	printf("ft_  - '0' : %c\n\n", ft_tolower('0'));
	printf("libc - '9' : %c\n", tolower('9'));
	printf("ft_  - '9' : %c\n\n", ft_tolower('9'));
	printf("libc - 'A' : %c\n", tolower('A'));
	printf("ft_  - 'A' : %c\n\n", ft_tolower('A'));
	printf("libc - 'Z' : %c\n", tolower('Z'));
	printf("ft_  - 'Z' : %c\n\n", ft_tolower('Z'));
	printf("libc - 'a' : %c\n", tolower('A'));
	printf("ft_  - 'a' : %c\n\n", ft_tolower('A'));
	printf("libc - 'z' : %c\n", tolower('z'));
	printf("ft_  - 'z' : %c\n\n", ft_tolower('z'));
	printf("libc - '{' : %c\n", tolower('{'));
	printf("ft_  - '{' : %c\n\n", ft_tolower('{'));
	printf("libc - del : %c\n", tolower(127));
	printf("ft_  - del : %c\n\n", ft_tolower(127));
}

void	ft_strchr_test(void)
{
	printf("\n\n--FT_STRCHR--\n\n");

	char s1[] = "test1";
	char s2[] = "test1";
	printf("libc - \"test1\" starting at 't' : %s\n", strchr(s1, 't'));
	printf("ft_  - \"test1\" starting at 't' : %s\n\n", ft_strchr(s2, 't'));
	char s3[] = "test2";
	char s4[] = "test2";
	printf("libc - \"test2\" starting at '\\0' : %s\n", strchr(s3, '\0'));
	printf("ft_  - \"test2\" starting at '\\0' : %s\n\n", ft_strchr(s4, '\0'));
	char s5[] = "test3";
	char s6[] = "test3";
	printf("libc - \"test3\" starting at 'z' : %s\n", strchr(s5, 'z'));
	printf("ft_  - \"test3\" starting at 'z' : %s\n\n", ft_strchr(s6, 'z'));
}

void	ft_strrchr_test(void)
{
	printf("\n\n--FT_STRRCHR--\n\n");

	char s1[] = "test1";
	char s2[] = "test1";
	printf("libc - \"test1\" starting at last 't' : %s\n", strrchr(s1, 't'));
	printf("ft_  - \"test1\" starting at last 't' : %s\n\n", ft_strrchr(s2, 't'));
	char s3[] = "test2";
	char s4[] = "test2";
	printf("libc - \"test2\" starting at last '\\0' : %s\n", strrchr(s3, '\0'));
	printf("ft_  - \"test2\" starting at last '\\0' : %s\n\n", ft_strrchr(s4, '\0'));
	char s5[] = "test3";
	char s6[] = "test3";
	printf("libc - \"test3\" starting at last 'z' : %s\n", strrchr(s5, 'z'));
	printf("ft_  - \"test3\" starting at last 'z' : %s\n\n", ft_strrchr(s6, 'z'));
	char s7[] = "best4";
	char s8[] = "best4";
	printf("libc - \"best4\" starting at last 'b' : %s\n", strrchr(s7, 'b'));
	printf("ft_  - \"best4\" starting at last 'b' : %s\n\n", ft_strrchr(s8, 'b'));
}

void	ft_strncmp_test(void)
{
	printf("\n\n--FT_STRNCMP--\n\n");

	char s1[] = "test1";
	char s2[] = "test1";
	printf("libc - s1 \"test1\" || s2 \"test1\" || buffer (6) : %d\n", strncmp(s1, s2, strlen(s1) + 1));
	printf("ft_  - s1 \"test1\" || s2 \"test1\" || buffer (6) : %d\n\n", ft_strncmp(s1, s2, ft_strlen(s1) + 1));

	char s3[] = "test2";
	char s4[] = "test9";
	printf("libc - s1 \"test2\" || s2 \"test9\" || buffer (6) : %d\n", strncmp(s3, s4, strlen(s3) + 1));
	printf("ft_  - s1 \"test2\" || s2 \"test9\" || buffer (6) : %d\n\n", ft_strncmp(s3, s4, ft_strlen(s4) + 1));

	char s5[] = "test3";
	char s6[] = "test3z";
	printf("libc - s1 \"test3\" || s2 \"test3z\" || buffer (7) : %d\n", strncmp(s5, s6, strlen(s6) + 1));
	printf("ft_  - s1 \"test3\" || s2 \"test3z\" || buffer (7) : %d\n\n", ft_strncmp(s5, s6, ft_strlen(s6) + 1));

	char s7[] = "test4";
	char s8[] = "test4";
	printf("libc - s1 \"test4\" || s2 \"test4\" || buffer (0) : %d\n", strncmp(s7, s8, 0));
	printf("ft_  - s1 \"test4\" || s2 \"test4\" || buffer (0) : %d\n\n", ft_strncmp(s7, s8, 0));
}

void	ft_memchr_test(void)
{
	printf("\n\n--FT_MEMCHR--\n\n");

	char s0[] = "test0";
	char s01[] = "test0";
	printf("libc - \"test0\" starting at 't' || buffer (5) : %s\n", (char *)memchr(s0, 't', strlen(s0)));
	printf("ft_  - \"test0\" starting at 't' || buffer (5) : %s\n\n", (char *)ft_memchr(s01, 't', ft_strlen(s01)));
	char s1[] = "test1";
	char s2[] = "test1";
	printf("libc - \"test1\" starting at '1' || buffer (5) : %s\n", (char *)memchr(s1, '1', strlen(s1)));
	printf("ft_  - \"test1\" starting at '1' || buffer (5) : %s\n\n", (char *)ft_memchr(s2, '1', ft_strlen(s1)));
	char s3[] = "test2";
	char s4[] = "test2";
	printf("libc - \"test2\" starting at '\\0' || buffer (6) : %s\n", (char *)memchr(s3, '\0', strlen(s1) + 1));
	printf("ft_  - \"test2\" starting at '\\0' || buffer (6) : %s\n\n", (char *)ft_memchr(s4, '\0', ft_strlen(s1) + 1));
	char s5[] = "test3";
	char s6[] = "test3";
	printf("libc - \"test3\" starting at 'z' || buffer (6) : %s\n", (char *)memchr(s5, 'z', strlen(s1) + 1));
	printf("ft_  - \"test3\" starting at 'z' || buffer (6) : %s\n\n", (char *)ft_memchr(s6, 'z', ft_strlen(s1) + 1));
	char s7[] = "test4";
	char s8[] = "test4";
	printf("libc - \"test4\" starting at 's' || buffer (2) : %s\n", (char *)memchr(s7, 's', 2));
	printf("ft_  - \"test4\" starting at 's' || buffer (2) : %s\n\n", (char *)ft_memchr(s8, 's', 2));
	char s9[] = "";
	char s10[] = "";
	printf("libc - \"\" starting at '0' || buffer (0) : %s\n", (char *)memchr(s9, 0, strlen(s9)));
	printf("ft_  - \"\" starting at '0' || buffer (0) : %s\n\n", (char *)ft_memchr(s10, 0, ft_strlen(s10)));
/* 	char *s11;
	char *s12;
	printf("libc - unintialized (char*) starting at '0' || buffer (5) : %s\n", memchr(s11, 0, 5));
	printf("ft_  - unintialized (char*) starting at '0' || buffer (5) : %s\n\n", ft_memchr(s12, 0, 5)); */
}

void	ft_memcmp_test(void)
{
	printf("\n\n--FT_MEMCMP--\n\n");

	char s1[] = "test1";
	char s2[] = "test1";
	printf("libc - s1 \"test1\" || s2 \"test1\" || buffer (6) : %d\n", memcmp(s1, s2, strlen(s1) + 1));
	printf("ft_  - s1 \"test1\" || s2 \"test1\" || buffer (6) : %d\n\n", ft_memcmp(s1, s2, ft_strlen(s2) + 1));

	char s3[] = "test2";
	char s4[] = "test9";
	printf("libc - s1 \"test2\" || s2 \"test9\" || buffer (6) : %d\n", memcmp(s3, s4, strlen(s3) + 1));
	printf("ft_  - s1 \"test2\" || s2 \"test9\" || buffer (6) : %d\n\n", ft_memcmp(s3, s4, ft_strlen(s4) + 1));

	char s5[] = "test3";
	char s6[] = "test3z";
	printf("libc - s1 \"test3\" || s2 \"test3z\" || buffer (7) : %d\n", memcmp(s5, s6, strlen(s6) + 1));
	printf("ft_  - s1 \"test3\" || s2 \"test3z\" || buffer (7) : %d\n\n", ft_memcmp(s5, s6, ft_strlen(s6) + 1));

	char s7[] = "test4";
	char s8[] = "test4";
	printf("libc - s1 \"test4\" || s2 \"test4\" || buffer (0) : %d\n", memcmp(s7, s8, 0));
	printf("ft_  - s1 \"test4\" || s2 \"test4\" || buffer (0) : %d\n\n", ft_memcmp(s7, s8, 0));
}

void	ft_strnstr_test(void)
{
	printf("\n\n--FT_STRNSTR--\n\n");

	char s1[] = "test1needletest1";
	char s2[] = "needle";
	printf("libc - hstck \"test1needletest1\" || ndl \"needle\" || buffer (17) : %s\n", strnstr(s1, s2, strlen(s1) + 1));
	printf("ft_  - hstck \"test1needletest1\" || ndl \"needle\" || buffer (17) : %s\n\n", ft_strnstr(s1, s2, ft_strlen(s1) + 1));
	char s3[] = "test2needletest2";
	char s4[] = "needle";
	printf("libc - hstck \"test2needletest2\" || ndl \"needle\" || buffer (11) : %s\n", strnstr(s3, s4, 11));
	printf("ft_  - hstck \"test2needletest2\" || ndl \"needle\" || buffer (11) : %s\n\n", ft_strnstr(s3, s4, 11));
	char s5[] = "test3needletest3";
	char s6[] = "needle";
	printf("libc - hstck \"test3needletest3\" || ndl \"needle\" || buffer (10) : %s\n", strnstr(s5, s6, 10));
	printf("ft_  - hstck \"test3needletest3\" || ndl \"needle\" || buffer (10) : %s\n\n", ft_strnstr(s5, s6, 10));
	char s7[] = "test4needletest4";
	char s8[] = "needle";
	printf("libc - hstck \"test4needletest4\" || ndl \"needle\" || buffer (0) : %s\n", strnstr(s7, s8, 10));
	printf("ft_  - hstck \"test4needletest4\" || ndl \"needle\" || buffer (0) : %s\n\n", ft_strnstr(s7, s8, 10));
	char s9[] = "test5needletest5";
	char s10[] = "";
	printf("libc - hstck \"test5needletest5\" || ndl \"\" || buffer (17) : %s\n", strnstr(s9, s10, strlen(s9) + 1));
	printf("ft_  - hstck \"test5needletest5\" || ndl \"\" || buffer (17) : %s\n\n", ft_strnstr(s9, s10, ft_strlen(s9) + 1));
	char s11[] = "test6needletest6";
	char s12[] = "42";
	printf("libc - hstck \"test6needletest6\" || ndl \"42\" || buffer (17) : %s\n", strnstr(s11, s12, strlen(s11) + 1));
	printf("ft_  - hstck \"test6needletest6\" || ndl \"42\" || buffer (17) : %s\n\n", ft_strnstr(s11, s12, ft_strlen(s11) + 1));
	char s13[] = "test7needletest7";
	char s14[] = "le";
	printf("libc - hstck \"test7needletest7\" || ndl \"le\" || buffer (17) : %s\n", strnstr(s13, s14, strlen(s13) + 1));
	printf("ft_  - hstck \"test7needletest7\" || ndl \"le\" || buffer (17) : %s\n\n", ft_strnstr(s13, s14, ft_strlen(s13) + 1));
	char s15[] = "test0needletest8";
	char s16[] = "8";
	printf("libc - hstck \"test0needletest8\" || ndl \"8\" || buffer (17) : %s\n", strnstr(s15, s16, strlen(s15) + 1));
	printf("ft_  - hstck \"test0needletest8\" || ndl \"8\" || buffer (17) : %s\n\n", ft_strnstr(s15, s16, ft_strlen(s15) + 1));
	char s17[] = "best9needletest9";
	char s18[] = "b";
	printf("libc - hstck \"best9needletest9\" || ndl \"b\" || buffer (17) : %s\n", strnstr(s17, s18, strlen(s17) + 1));
	printf("ft_  - hstck \"best9needletest9\" || ndl \"b\" || buffer (17) : %s\n\n", ft_strnstr(s17, s18, ft_strlen(s17) + 1));

}
//ft_atoi
void	ft_atoi_test(void)
{
	printf("\n\n--FT_ATOI--\n\n");

	char s7[] = "\t 123ab";
	printf("libc - \"\\t123ab\" : %d\n", atoi(s7));
	printf("ft_  - \"\\t123ab\" : %d\n\n", ft_atoi(s7));
	char s9[] = "\n123ab";
	printf("libc - \"\\n123ab\" : %d\n", atoi(s9));
	printf("ft_  - \"\\n123ab\" : %d\n\n", ft_atoi(s9));
	char s10[] = "\n123ab";
	printf("libc - \"\\n123ab\" : %d\n", atoi(s10));
	printf("ft_  - \"\\n123ab\" : %d\n\n", ft_atoi(s10));
	char s11[] = "\v123ab";
	printf("libc - \"\\v123ab\" : %d\n", atoi(s11));
	printf("ft_  - \"\\v123ab\" : %d\n\n", ft_atoi(s11));
	char s12[] = "\f123ab";
	printf("libc - \"\\f123ab\" : %d\n", atoi(s12));
	printf("ft_  - \"\\f123ab\" : %d\n\n", ft_atoi(s12));
	char s13[] = "\r123ab";
	printf("libc - \"\\r123ab\" : %d\n", atoi(s13));
	printf("ft_  - \"\\r123ab\" : %d\n\n", ft_atoi(s13));
	char s6[] = " 123ab";
	printf("ft_  - \" 123ab\" : %d\n", atoi(s6));
	printf("ft_  - \" 123ab\" : %d\n\n", ft_atoi(s6));
	char s1[] = "--123ab";
	printf("libc - \"--123ab\" : %d\n", atoi(s1));
	printf("ft_  - \"--123ab\" : %d\n\n", ft_atoi(s1));
	char s2[] = "-123ab";
	printf("libc - \"-123ab\" : %d\n", atoi(s2));
	printf("ft_  - \"-123ab\" : %d\n\n", ft_atoi(s2));
	char s3[] = "++123ab";
	printf("libc - \"++123ab\" : %d\n", atoi(s3));
	printf("ft_  - \"++123ab\" : %d\n\n", ft_atoi(s3));
	char s4[] = "+123ab";
	printf("libc - \"+123ab\" : %d\n", atoi(s4));
	printf("ft_  - \"+123ab\" : %d\n\n", ft_atoi(s4));
	// char s14[] = "+9223372036854775808ab";
	// printf("libc - \"+9223372036854775808ab\" : %d\n", atoi(s14));
	// printf("ft_  - \"+9223372036854775808ab\" : %d\n\n", ft_atoi(s14));
	char s15[] = "-9223372036854775808ab";
	printf("libc - \"-9223372036854775808ab\" : %d\n", atoi(s15));
	printf("ft_  - \"-9223372036854775808ab\" : %d\n\n", ft_atoi(s15));
	// char s16[] = "+9223372036854775809ab";
	// printf("libc - \"+9223372036854775809ab\" : %d\n", atoi(s16));
	// printf("ft_  - \"+9223372036854775809ab\" : %d\n\n", ft_atoi(s16));
	// char s17[] = "-9223372036854775809ab";
	// printf("libc - \"-9223372036854775809ab\" : %d\n", atoi(s17));
	// printf("ft_  - \"-9223372036854775809ab\" : %d\n\n", ft_atoi(s17));
	char s5[] = "ab123ab";
	printf("libc - \"ab123ab\" : %d\n", atoi(s5));
	printf("ft_  - \"ab123ab\" : %d\n\n", ft_atoi(s5));
	char s8[] = "1a23ab";
	printf("libc - \"1a23ab\" : %d\n", atoi(s8));
	printf("ft_  - \"1a23ab\" : %d\n\n", ft_atoi(s8));
	char s17[] = " +2147483647ab";
	printf("libc - \" +2147483647ab\" : %d\n", atoi(s17));
	printf("ft_  - \" +2147483647ab\" : %d\n\n", ft_atoi(s17));
	char s18[] = " -2147483648ab";
	printf("libc - \" -2147483648ab\" : %d\n", atoi(s18));
	printf("ft_  - \" -2147483648ab\" : %d\n\n", ft_atoi(s18));

}

void	ft_calloc_test(void)
{
	printf("\n\n--FT_CALLOC--\n\n");

	char *s1 = "test1";
	s1 = calloc(1, sizeof(char));
	printf("libc - \"test1\" (1) elements set to (0) and heap allocated : %s\n", s1);
	free(s1);
	char *s2 = "test1";
	s2 = ft_calloc(1, sizeof(char));
	printf("ft_  - \"test1\" (1) elements set to (0) and heap allocated : %s\n\n", s2);
	free(s2);
	char *s3 = "test2";
	s3 = calloc(100, sizeof(char));
	printf("libc - \"test2\" (100) elements set to (0) and heap allocated : %s\n", s3);
	free(s3);
	char *s4 = "test2";
	s4 = ft_calloc(100, sizeof(char));
	printf("ft_  - \"test2\" (100) elements set to (0) and heap allocated : %s\n\n", s4);
	free (s4);

	char *s5;
	char s5t[6] = "test3";
	s5 = s5t;
	s5 = calloc(0, sizeof(char));
	printf("libc - \"test3\" (-2) elements set to (0) and heap allocated : %s\n", s5);
	free (s5);
	char *s6;
	char s6t[6] = "test3";
	s6 = s6t;
	s6 = ft_calloc(0, sizeof(char));
	printf("ft_  - \"test3\" (-2) elements set to (0) and heap allocated : %s\n\n", s6);
	free (s6);
	char *s7;
	char s7t[6] = "test4";
	s7 = s7t;
	s7 = calloc(0, sizeof(char));
	printf("libc - \"test4\" (0) elements set to (0) and heap allocated : %s\n", s7);
	free (s7);
	char *s8;
	char s8t[6] = "test4";
	s8 = s8t;
	s8 = ft_calloc(0, sizeof(char));
	printf("ft_  - \"test4\" (0) elements set to (0) and heap allocated : %s\n\n", s8);
	free (s8);
}

void	ft_strdup_test(void)
{
	printf("\n\n--FT_STRDUP--\n\n");

	char *s1 = "test1";
	char *s1p;
	s1p = strdup(s1);
	printf("libc - original: \"test1\" || duplicate : \"test1\" : %s\n", s1p);
	free (s1p);
	char *s2 = "test1";
	char *s2p;
	s2p = ft_strdup(s2);
	printf("ft_  - original: \"test1\" || duplicate : \"test1\" : %s\n\n", s2p);
	free (s2p);
}

void	ft_substr_test(void)
{
	printf("\n\n--FT_SUBSTR--\n\n");

	char *s1 = "test1";
	char *s1p;
	s1p = ft_substr(s1, 1, ft_strlen("est"));
	printf("ft_  - str: \"test1\" || substr: \"est\"  : %s\n\n", s1p);
	free (s1p);
/* 	char *s2;
	s2 = ft_substr(0, 2, ft_strlen("st2"));
	printf("ft_  - str: null    || substr: \"est\"  : %s\n\n", s2);
	free (s2); */
	char *s3 = "test3";
	s3 = ft_substr(s3, 0, ft_strlen("t"));
	printf("ft_  - str: \"test3\" || substr: \"t\"    : %s\n\n", s3);
	free (s3);
}

void	ft_strjoin_test(void)
{
	printf("\n\n--FT_STRJOIN--\n\n");

	char *s1 = "test1 ";
	char *s2 = "- ok!";
	char *s1p;
	s1p = ft_strjoin(s1, s2);
	printf("ft_  - s1: \"test1 \" || s2: \"- ok!\" : %s\n\n", s1p);
	free (s1p);
	char *s3 = "";
	char *s4 = "";
	char *s2p;
	s2p = ft_strjoin(s3, s4);
	printf("ft_  - s3: \"\"       || s4: \"\"      : %s\n\n", s2p);
	free (s2p);
}

void	ft_strtrim_test(void)
{
	printf("\n\n--FT_STRTRIM--\n\n");
	char *s1 = "abtest1ba";
	char *s2 = "ab";
	char *s1p;
	s1p = ft_strtrim(s1, s2);
	printf("ft_  - s1: \"abtest1ba\" || set: \"ab\"    : %s\n\n", s1p);
	free (s1p);
	char *s3 = "abtest1ba";
	char *s4 = "";
	char *s3p;
	s3p = ft_strtrim(s3, s4);
	printf("ft_  - s2: \"abtest1ba\" || set: \"\"      : %s\n\n", s3p);
	free (s3p);
	char *s5 = "";
	char *s6 = "";
	char *s5p;
	s5p = ft_strtrim(s5, s6);
	printf("ft_  - s3: \"\"          || set: \"\"      : %s\n\n", s5p);
	free (s5p);
	char *s7 = "abtest1ba";
	char *s8 = "test1";
	char *s7p;
	s7p = ft_strtrim(s7, s8);
	printf("ft_  - s4: \"abtest1ba\" || set: \"test1\" : %s\n\n", s7p);
	free (s7p);
}

void	ft_split_test(void)
{
	printf("\n\n--FT_SPLIT--\n\n");

	int j = 0;
	char **ss1;
	char *s1 = " test1  test2   test3 ";
	char c1 = ' ';
	ss1 = ft_split(s1, c1);
	while (ss1[j++])
		printf("ft_  - s1: \" test1  test2   test3 \" || delimiter: ' ' || substr(%d) : %s\n", j, ss1[j - 1]);
	printf("\n");
	j = 0;
	free (ss1);

	char **ss2;
	char *s2 = "test4 test5 test6";
	char c2 = 't';
	ss2 = ft_split(s2, c2);
	while (ss2[j++])
		printf("ft_  - s2: \"test4 test5 test6\" || delimiter: 't' || substr(%d) : %s\n", j, ss2[j - 1]);
	printf("\n");
	j = 0;
	free (ss2);

	char **ss3;
	char *s3 = "test7 test8";
	char c3 = 'z';
	ss3 = ft_split(s3, c3);
	while (ss3[j++])
		printf("ft_  - s3: \"test7 test8\" || delimiter: 'z' || substr(%d) : %s\n", j, ss3[j - 1]);
	printf("\n");
	j = 0;
	free (ss3);
}

void	ft_itoa_test(void)
{
	printf("\n\n--FT_ITOA--\n\n");

	char *s1;
	int n1 = -69420;
	s1 = ft_itoa(n1);
	printf("ft_  - n = -69420      || malloc(%zu bytes) : %s\n\n", malloc_usable_size(s1), s1);
	free (s1);
	char *s2;
	int n2 = 69420;
	s2 = ft_itoa(n2);
	printf("ft_  - n =  69420      || malloc(%zu bytes) :  %s\n\n", malloc_usable_size(s2), s2);
	free (s2);
	char *s3;
	int n3 = 0;
	s3 = ft_itoa(n3);
	printf("ft_  - n =  0          || malloc(%zu bytes) :  %s\n\n", malloc_usable_size(s3), s3);
	free (s3);
	char *s4;
	int n4 = 2147483647;
	s4 = ft_itoa(n4);
	printf("ft_  - n =  2147483647 || malloc(%zu bytes) :  %s\n\n", malloc_usable_size(s4), s4);
	free (s4);
	char *s5;
	int n5 = -2147483647;
	s5 = ft_itoa(n5);
	printf("ft_  - n = -2147483647 || malloc(%zu bytes) : %s\n\n", malloc_usable_size(s5), s5);
	free (s5);
	char *s10;
	int n10 = -2147483648;
	s10 = ft_itoa(n10);
	printf("ft_  - n = -2147483648 || malloc(%zu bytes) : %s\n\n", malloc_usable_size(s10), s10);
	free (s10);
	char *s6;
	int n6 = 1;
	s6 = ft_itoa(n6);
	printf("ft_  - n =  1          || malloc(%zu bytes) :  %s\n\n", malloc_usable_size(s6), s6);
	free (s6);
	char *s7;
	int n7 = -1;
	s7 = ft_itoa(n7);
	printf("ft_  - n = -1          || malloc(%zu bytes) : %s\n\n", malloc_usable_size(s7), s7);
	free (s7);
	char *s8;
	int n8 = 9;
	s8 = ft_itoa(n8);
	printf("ft_  - n =  9          || malloc(%zu bytes) :  %s\n\n", malloc_usable_size(s8), s8);
	free (s8);
	char *s9;
	int n9 = -9;
	s9 = ft_itoa(n9);
	printf("ft_  - n = -9          || malloc(%zu bytes) : %s\n\n", malloc_usable_size(s9), s9);
	free (s9);
}

void	ft_strmapi_test(void)
{
	printf("\n\n--FT_STRMAPI--\n\n");

	char *s1 = "test1";
	char *s1p;
	s1p = ft_strmapi(s1, &ft_strmapi_aux_test1);
	printf("ft_  - s1 \"test1\" || ft_toupper || new_s1 : %s\n\n", s1p);
	free (s1p);
	char *s2 = "TEST2";
	char *s2p;
	s2p = ft_strmapi(s2, &ft_strmapi_aux_test2);
	printf("ft_  - s2 \"TEST2\" || ft_tolower || new_s2 : %s\n\n", s2p);
	free (s2p);
}
static char	ft_strmapi_aux_test1(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}
static char	ft_strmapi_aux_test2(unsigned int i, char c)
{
	(void)i;
	return (ft_tolower(c));
}

void	ft_striteri_test(void)
{
	printf("\n\n--FT_STRITERI--\n\n");

	char s1[] = "test1";
	char *s1p;
	s1p = s1;
	ft_striteri(s1p, &ft_striteri_aux_test1);
	printf("ft_  - s1 \"test1\" || ft_toupper || s1 : %s\n\n", s1p);
	char s2[] = "TEST2";
	char *s2p;
	s2p = s2;
	ft_striteri(s2p, &ft_striteri_aux_test2);
	printf("ft_  - s2 \"TEST2\" || ft_tolower || s2 : %s\n\n", s2p);
}
static void	ft_striteri_aux_test1(unsigned int i, char *c)
{
	i = -1;
	while (c[++i])
		*(c + i) = ft_toupper(*(c + i));
}
static void	ft_striteri_aux_test2(unsigned int i, char *c)
{
	i = -1;
	while (c[++i])
		*(c + i) = ft_tolower(*(c + i));
}

void	ft_putchar_fd_test(void)
{
	printf("\n\n--FT_PUTCHAR_FD--\n\n");

	FILE	*fptr;
	char	fd_putchar_test[10];
	char	c;
	int	fd_write = open("fd_putchar_test1.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (!fd_write)
		printf("ERROR: File not created");
	ft_putchar_fd('t', fd_write);
	close(fd_write);
	fptr = fopen("fd_putchar_test1.txt", "r");
	printf("ft_  - file \"fd_putchar_test1.txt\" || content 't' : %c\n\n", getc(fptr));
	fclose(fptr);
}

void	ft_putstr_fd_test(void)
{
	printf("\n\n--FT_PUTSTR_FD--\n\n");

	FILE	*fptr;
	char	c;
	char	fd_putstr_test[] = "test1";
	char	*s = fd_putstr_test;
	int	fd_write = open("fd_putstr_test1.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (!fd_write)
		printf("ERROR: file not created");
	ft_putstr_fd(s, fd_write);
	close(fd_write);
	fptr = fopen("fd_putstr_test1.txt", "r");
	printf("ft_  - file \"fd_putstr_test1.txt\" || content \"test1\" : ");
	c = fgetc(fptr);
	while (c != EOF)
	{
		printf("%c", c);
		c = fgetc(fptr);
	}
	fclose(fptr);
	printf("\n\n");
}

void	ft_putendl_fd_test(void)
{
	printf("\n\n--FT_PUTENDL_FD--\n\n");

	FILE	*fptr;
	char	c;
	char	fd_putendl_test[] = "test1";
	char	*s = fd_putendl_test;
	int	fd_write = open("fd_putendl_test1.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (!fd_write)
		printf("ERROR: file not created");
	ft_putendl_fd(s, fd_write);
	close(fd_write);
	fptr = fopen("fd_putendl_test1.txt", "r");
	printf("ft_  - file \"fd_putendl_test1.txt\" || content \"test1\\n\" : ");
	c = fgetc(fptr);
	while (c != EOF)
	{
		printf("%c", c);
		c = fgetc(fptr);
	}
	fclose(fptr);
	printf("(endl)\n\n");
}

void	ft_putnbr_fd_test(void)
{
	printf("\n\n--FT_PUTNBR_FD--\n\n");

	FILE	*fptr1;
	char	c1;
	int		fd_putnbr_test1 = 2147483647;
	int		fd_write1 = open("fd_putnbr_test1.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (!fd_write1)
		printf("ERROR: file not created");
	ft_putnbr_fd(fd_putnbr_test1, fd_write1);
	close(fd_write1);
	fptr1 = fopen("fd_putnbr_test1.txt", "r");
	printf("ft_  - file \"fd_putnbr_test1.txt\" || content \" 2147483647\" :  ");
	c1 = fgetc(fptr1);
	while (c1 != EOF)
	{
		printf("%c", c1);
		c1 = fgetc(fptr1);
	}
	fclose(fptr1);
	printf("\n\n");

	FILE	*fptr2;
	char	c2;
	int		fd_putnbr_test2 = -2147483647;
	int		fd_write2 = open("fd_putnbr_test2.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (!fd_write2)
		printf("ERROR: file not created");
	ft_putnbr_fd(fd_putnbr_test2, fd_write2);
	close(fd_write2);
	fptr2 = fopen("fd_putnbr_test2.txt", "r");
	printf("ft_  - file \"fd_putnbr_test2.txt\" || content \"-2147483647\" : ");
	c2 = fgetc(fptr2);
	while (c2 != EOF)
	{
		printf("%c", c2);
		c2 = fgetc(fptr2);
	}
	fclose(fptr2);
	printf("\n\n");

	FILE	*fptr3;
	char	c3;
	int		fd_putnbr_test3 = -2147483648;
	int		fd_write3 = open("fd_putnbr_test3.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (!fd_write3)
		printf("ERROR: file not created");
	ft_putnbr_fd(fd_putnbr_test3, fd_write3);
	close(fd_write3);
	fptr3 = fopen("fd_putnbr_test3.txt", "r");
	printf("ft_  - file \"fd_putnbr_test3.txt\" || content \"-2147483648\" : ");
	c3 = fgetc(fptr3);
	while (c3 != EOF)
	{
		printf("%c", c3);
		c3 = fgetc(fptr3);
	}
	fclose(fptr3);
	printf("\n\n");

	FILE	*fptr4;
	char	c4;
	int		fd_putnbr_test4 = -9;
	int		fd_write4 = open("fd_putnbr_test4.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (!fd_write4)
		printf("ERROR: file not created");
	ft_putnbr_fd(fd_putnbr_test4, fd_write4);
	close(fd_write4);
	fptr4 = fopen("fd_putnbr_test4.txt", "r");
	printf("ft_  - file \"fd_putnbr_test4.txt\" || content \"-9         \" : ");
	c4 = fgetc(fptr4);
	while (c4 != EOF)
	{
		printf("%c", c4);
		c4 = fgetc(fptr4);
	}
	fclose(fptr4);
	printf("\n\n");

	FILE	*fptr5;
	char	c5;
	int		fd_putnbr_test5 = -1;
	int		fd_write5 = open("fd_putnbr_test5.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (!fd_write5)
		printf("ERROR: file not created");
	ft_putnbr_fd(fd_putnbr_test5, fd_write5);
	close(fd_write5);
	fptr5 = fopen("fd_putnbr_test5.txt", "r");
	printf("ft_  - file \"fd_putnbr_test5.txt\" || content \"-1         \" : ");
	c5 = fgetc(fptr5);
	while (c5 != EOF)
	{
		printf("%c", c5);
		c5 = fgetc(fptr5);
	}
	fclose(fptr5);
	printf("\n\n");

	FILE	*fptr6;
	char	c6;
	int		fd_putnbr_test6 = 0;
	int		fd_write6 = open("fd_putnbr_test6.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (!fd_write6)
		printf("ERROR: file not created");
	ft_putnbr_fd(fd_putnbr_test6, fd_write6);
	close(fd_write6);
	fptr6 = fopen("fd_putnbr_test6.txt", "r");
	printf("ft_  - file \"fd_putnbr_test6.txt\" || content \" 0         \" : ");
	c6 = fgetc(fptr6);
	while (c6 != EOF)
	{
		printf("%2c", c6);
		c6 = fgetc(fptr6);
	}
	fclose(fptr6);
	printf("\n\n");

	FILE	*fptr7;
	char	c7;
	int		fd_putnbr_test7 = 1;
	int		fd_write7 = open("fd_putnbr_test7.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (!fd_write7)
		printf("ERROR: file not created");
	ft_putnbr_fd(fd_putnbr_test7, fd_write7);
	close(fd_write7);
	fptr7 = fopen("fd_putnbr_test7.txt", "r");
	printf("ft_  - file \"fd_putnbr_test7.txt\" || content \" 1         \" : ");
	c7 = fgetc(fptr7);
	while (c7 != EOF)
	{
		printf("%2c", c7);
		c7 = fgetc(fptr7);
	}
	fclose(fptr7);
	printf("\n\n");

	FILE	*fptr8;
	char	c8;
	int		fd_putnbr_test8 = 9;
	int		fd_write8 = open("fd_putnbr_test8.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (!fd_write8)
		printf("ERROR: file not created");
	ft_putnbr_fd(fd_putnbr_test8, fd_write8);
	close(fd_write8);
	fptr8 = fopen("fd_putnbr_test8.txt", "r");
	printf("ft_  - file \"fd_putnbr_test8.txt\" || content \" 9         \" : ");
	c8 = fgetc(fptr8);
	while (c8 != EOF)
	{
		printf("%2c", c8);
		c8 = fgetc(fptr8);
	}
	fclose(fptr8);
	printf("\n\n\n\n(libft test completed)\n\n");
}
