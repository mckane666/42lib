/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mains_lib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 21:31:33 by jhenriqu          #+#    #+#             */
/*   Updated: 2020/12/06 21:31:33 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h> // para bsd #include <bsd/string.h>
#include "libft.h"
#include <ctype.h>

int main()
{
	char dest[] = "bom dia";
	char src[] = "hello world";

	printf("%s\n","----------strlen");
	printf("%d\n",ft_strlen(src));
	printf("\n");
	printf("%s\n","----------ft_strlcat");
	printf("%ld\n",ft_strlcat(dest,src, 3));
	printf("%s\n","----------strlcat");
	printf("%ld\n", strlcat(dest,src, 3));
	printf("\n");
	printf("%s\n","----------ft_strlcpy");
	printf("%ld\n",ft_strlcpy(dest,src, 3));
	printf("%s\n","----------strlcpy");
	printf("%ld\n", strlcpy(dest,src, 3));
	printf("\n");
	printf("%s\n","----------ft_atoi");
	printf("%d\n", ft_atoi("-+30"));
	printf("%d\n", ft_atoi("-30"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi("- 30"));
	printf("%d\n", ft_atoi("  30"));
	printf("%s\n","----------atoi");
	printf("%d\n", atoi("-+30"));
	printf("%d\n", atoi("-30"));
	printf("%d\n", atoi(""));
	printf("%d\n", atoi("- 30"));
	printf("%d\n", atoi("  30"));
	printf("\n");
	printf("%s\n","----------ft_isalpha");
	printf("%d\n",ft_isalpha('a'));
	printf("%d\n",ft_isalpha('+'));
	printf("%d\n",ft_isalpha('1'));
	printf("%d\n",ft_isalpha(' '));
	printf("%s\n","----------isalpha");
	printf("%d\n", isalpha('a'));
	printf("%d\n", isalpha('+'));
	printf("%d\n", isalpha('1'));
	printf("%d\n", isalpha(' '));
	printf("\n");
	printf("%s\n","----------ft_isdigit");
	printf("%d\n",ft_isdigit('a'));
	printf("%d\n",ft_isdigit('+'));
	printf("%d\n",ft_isdigit('1'));
	printf("%s\n","----------isdigit");
	printf("%d\n", isdigit('a'));
	printf("%d\n", isdigit('+'));
	printf("%d\n", isdigit('1'));
	printf("\n");
	printf("%s\n","----------ft_isalnum");
	printf("%d\n",ft_isalnum('a'));
	printf("%d\n",ft_isalnum('+'));
	printf("%d\n",ft_isalnum('1'));
	printf("%s\n","----------isalnum");
	printf("%d\n", isalnum('a'));
	printf("%d\n", isalnum('+'));
	printf("%d\n", isalnum('1'));
	printf("\n");
	printf("%s\n","----------ft_isprint");
	printf("%d\n",ft_isprint('a'));
	printf("%d\n",ft_isprint(0));
	printf("%d\n",ft_isprint('\a'));
	printf("%s\n","----------isprint");
	printf("%d\n", isprint('a'));
	printf("%d\n", isprint(0));
	printf("%d\n", isprint('\a'));
	printf("\n");
	printf("%s\n","----------ft_isascii");
	printf("%d\n",ft_isascii('a'));
	printf("%d\n",ft_isascii(0));
	printf("%d\n",ft_isascii(300));
	printf("%s\n","----------isascii");
	printf("%d\n", isascii('a'));
	printf("%d\n", isascii(0));
	printf("%d\n", isascii(300));
	printf("\n");
	printf("%s\n","----------ft_toupper");
	printf("%c\n",ft_toupper('a'));
	printf("%c\n",ft_toupper('B'));
	printf("%c\n",ft_toupper('+'));
	printf("%s\n","----------toupper");
	printf("%c\n", toupper('a'));
	printf("%c\n", toupper('B'));
	printf("%c\n", toupper('+'));
	printf("\n");
	printf("%s\n","----------ft_tolower");
	printf("%c\n",ft_tolower('a'));
	printf("%c\n",ft_tolower('B'));
	printf("%c\n",ft_tolower('+'));
	printf("%s\n","----------tolower");
	printf("%c\n", tolower('a'));
	printf("%c\n", tolower('B'));
	printf("%c\n", tolower('+'));
	printf("\n");
	printf("%s\n","----------ft_strncmp");
	printf("%d\n",ft_strncmp(dest, src, 3));
	printf("%d\n",ft_strncmp(dest, src, 0));
	printf("%d\n",ft_strncmp("mini", "longer", 7));
	printf("%s\n","----------strncmp");
	printf("%d\n", strncmp(dest, src, 3));
	printf("%d\n", strncmp(dest, src, 0));
	printf("%d\n", strncmp("mini", "longer", 7));
	printf("\n");
   
	char *large = "foo bar fizz";
	char *small = "bar";
	printf("%s\n","----------ft_strnstr");
	printf("\n- \"%s\"\n",ft_strnstr(large, small, ft_strlen(large)));
	printf("Expexted full dest \n- \"%s\"\n",ft_strnstr(large, "", ft_strlen(large)));
	printf("Expected NULL\n- \"%s\"\n",ft_strnstr(large, "fizz", 4));
	printf("%s\n","----------strnstr");
	printf("\n- \"%s\"\n",strnstr(large, small, strlen(large)));
	printf("Expected full dest \n- \"%s\"\n",strnstr(large, "", strlen(large)));
	printf("Expected NULL \n- \"%s\"\n",strnstr(large, "fizz", 4));
	printf("%s\n","----------ft_strchr");
	printf("\n- \"%s\"\n",ft_strchr("foo bar fizz", 'r'));
	printf("\n- \"%s\"\n",ft_strchr("foo bar fizz", 'm'));
	printf("\n- \"%s\"\n",ft_strchr("foo bar fizz", '\0'));
	printf("%s\n\n","----------strchr");
	//printf("\n- \"%s\"\n",ft_strchr("foo bar fizz", 'r'));
	//printf("\n- \"%s\"\n",ft_strchr("foo bar fizz", 'm'));
	//printf("\n- \"%s\"\n",ft_strchr("foo bar fizz", '\0'));

	printf("%s\n","----------ft_strrchr");
	printf("\n- \"%s\"\n",ft_strrchr("foo bar fizz", 'f'));
	printf("\n- \"%s\"\n",ft_strrchr("foo bar fizz", 'm'));
	printf("\n- \"%s\"\n",ft_strrchr("foo bar fizz", '\0'));
	printf("%s\n\n","----------strrchr");
	//printf("\n- \"%s\"\n",ft_strrchr("foo bar fizz", 'f'));
	//printf("\n- \"%s\"\n",ft_strrchr("foo bar fizz", 'm'));
	//printf("\n- \"%s\"\n",ft_strrchr("foo bar fizz", '\0'));
	
	printf("%s\n","----------ft_strjoin");
	printf("%s\n", ft_strjoin("foo bar fizz", "hello world"));
	printf("%s\n", ft_strjoin("foo bar ", "fizz"));
	printf("%s\n", ft_strjoin("", "world"));
	printf("%s\n","----------strjoin");
	printf("%s\n", ft_strjoin("foo bar fizz", "hello world"));
	printf("%s\n", ft_strjoin("foo bar ", "fizz"));
	printf("%s\n", ft_strjoin("", "world"));
	printf("%s\n","----------ft_memset");
	char teste[] = "foo bar fizz";
	puts(ft_memset(teste, 'e', 3));
	printf("%s\n","----------ft_bzero");
	puts(ft_bzero(teste, 3));
	char teste1[] = "foo bar fizz";
	char small1[] = "hello";
	printf("%s\n","----------ft_memcpy");
	puts(ft_memcpy(small1, teste1, ft_strlen(teste1)));
	char teste2[] = "foo bar fizz";
	char small2[] = "hello";
	printf("%s\n","----------memcpy");
	puts(memcpy(small2, teste2, strlen(teste2)));
	char teste3[] = "foo bar fizz";
	char small3[] = "hello";
	printf("%s\n","----------ft_memccpy");
	char *testess = ft_memccpy(teste3, small3, 'o',ft_strlen(small3));
	if (testess)
	puts(testess);
	else
	puts(testess);
	char teste4[] = "foo bar fizz";
	char small4[] = "hello";
	printf("%s\n","----------memccpy");
	puts(memccpy(teste4, small4, 'o', strlen(small4)));

	char teste5[] = "foo bar fizz";
	char small5[] = "hello";
	printf("%s\n","----------ft_memmove");
	puts(ft_memmove(small5, teste5, ft_strlen(teste5)));
	
	char teste6[] = "foo bar fizz";
	char small6[] = "hello";
	printf("%s\n","----------memmove");
	puts(memmove(small6, teste6, strlen(teste6)));

	printf("%s\n","----------ft_memchr");
	char *srce= "hello world";
	printf("%s",(char *)ft_memchr(srce, 'w', 5));
	printf("\n");
	printf("%s",(char *)ft_memchr(srce, 'o', 5));
	printf("\n");
	printf("%s\n","----------memchr");
	char *src0= "hello world";
	printf("%s",(char *)memchr(src0, 'w', 5));
	printf("\n");
	printf("%s",(char *)memchr(src0, 'o', 5));
	printf("\n");
	printf("%s\n","----------ft_memcmp");
	char *src1="hello world";
	char *src2="hello";
	char *src3="hell";
	printf("%d\n", ft_memcmp(src1, src2, 5));
	printf("%d\n", ft_memcmp(src1, src3, 5));
	printf("%d\n", ft_memcmp(src3, src1, 5));

	printf("%s\n","----------memcmp");
	char *src4="hello world";
	char *src5="hello";
	char *src6="hell";
	printf("%d\n", memcmp(src4, src5, 5));
	printf("%d\n", memcmp(src4, src6, 5));
	printf("%d\n", memcmp(src6, src4, 5));
}
