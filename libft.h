/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 22:20:42 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/18 10:27:57 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h> // Include for size_t
// function to insert
int ft_isalpha(char c);
int ft_isdigit(int c);
int ft_isalnum (char c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *str);
void    *ft_memset (void *ptr, int c, size_t len);
void    ft_bzero(void *ptr, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dest, const char *src, size_t n);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *s, char c);
#endif