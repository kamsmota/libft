/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:57:38 by kams              #+#    #+#             */
/*   Updated: 2026/10/19 20:54:22 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <strings.h>
# include <stdlib.h>
# include <stddef.h>

void *ft_memset(void *ptr, int value, size_t num);
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dsize);
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dsize);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strdup(const char *s);
void ft_bzero(void *s, size_t n);
int ft_atoi(const char *nptr);
void *ft_calloc(size_t n, size_t size);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);

#endif