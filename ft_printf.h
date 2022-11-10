/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:53:13 by rel-fila          #+#    #+#             */
/*   Updated: 2022/11/08 16:53:49 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>
# include <limits.h>

void	ft_print(va_list args, const char *format, int *count, int *i);
int		ft_printf(const char *format, ...);
void	ft_putchar(int c, int *count);
void	ft_puthex(unsigned long n, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putstr(const char *str, int *count);
void	ft_putuphex(unsigned int n, int *count);
void	ft_putpointer(void *p, int *count);
void	ft_putunbr(unsigned int n, int *count);
size_t	ft_strlen(const char *s);

#endif
