/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranco- <vfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:16:17 by vfranco-          #+#    #+#             */
/*   Updated: 2021/11/29 12:17:28 by vfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Testing the ft_printf function agains the printf from stdio.h
int main()
{
	printf("Testing NUMBERS\n");
	printf("%d\t%d\n", printf("Testing %d\n", -100),
					ft_printf("Testing %d\n", -100));
	printf("%d\t%d\n", printf("Testing %i\n", -100),
					ft_printf("Testing %i\n", -100));
	printf("%d\t%d\n", printf("Testing %u\n", -100),
					ft_printf("Testing %u\n", -100));
	printf("%d\t%d\n", printf("Testing %x\n", -100),
					ft_printf("Testing %x\n", -100));
	printf("%d\t%d\n\n", printf("Testing %X\n", -100),
					ft_printf("Testing %X\n", -100));

	printf("%d\t%d\n", printf("Testing %d\n", 100),
					ft_printf("Testing %d\n", 100));
	printf("%d\t%d\n", printf("Testing %i\n", 100),
					ft_printf("Testing %i\n", 100));
	printf("%d\t%d\n", printf("Testing %u\n", 100),
					ft_printf("Testing %u\n", 100));
	printf("%d\t%d\n", printf("Testing %x\n", 100),
					ft_printf("Testing %x\n", 100));
	printf("%d\t%d\n\n", printf("Testing %X\n", 100),
					ft_printf("Testing %X\n", 100));

	printf("%d\t%d\n", printf("Testing %d\n", 2147483647),
					ft_printf("Testing %d\n", 2147483647));
	printf("%d\t%d\n", printf("Testing %i\n", 2147483647),
					ft_printf("Testing %i\n", 2147483647));
	printf("%d\t%d\n", printf("Testing %u\n", 2147483647),
					ft_printf("Testing %u\n", 2147483647));
	printf("%d\t%d\n", printf("Testing %x\n", 2147483647),
					ft_printf("Testing %x\n", 2147483647));
	printf("%d\t%d\n\n", printf("Testing %X\n", 2147483647),
					ft_printf("Testing %X\n", 2147483647));

	printf("%d\t%d\n", printf("Testing %d\n", -2147483648),
					ft_printf("Testing %d\n", -2147483648));
	printf("%d\t%d\n", printf("Testing %i\n", -2147483648),
					ft_printf("Testing %i\n", -2147483648));
	printf("%d\t%d\n", printf("Testing %u\n", -2147483648),
					ft_printf("Testing %u\n", -2147483648));
	printf("%d\t%d\n", printf("Testing %x\n", -2147483648),
					ft_printf("Testing %x\n", -2147483648));
	printf("%d\t%d\n\n", printf("Testing %X\n", -2147483648),
					ft_printf("Testing %X\n", -2147483648));

	printf("%d\t%d\n", printf("Testing %d\n", 0),
					ft_printf("Testing %d\n", 0));
	printf("%d\t%d\n", printf("Testing %i\n", 0),
					ft_printf("Testing %i\n", 0));
	printf("%d\t%d\n", printf("Testing %u\n", 0),
					ft_printf("Testing %u\n", 0));
	printf("%d\t%d\n", printf("Testing %x\n", 0),
					ft_printf("Testing %x\n", 0));
	printf("%d\t%d\n\n", printf("Testing %X\n", 0),
					ft_printf("Testing %X\n", 0));

	printf("\nTesting POINTERS\n");
	int n = 10;
	int *p = &n;
	printf("%d\t%d\n", printf("Testing %p\n", p),
					ft_printf("Testing %p\n", p));

	printf("%d\t%d\n", printf("Testing %p\n", NULL),
					ft_printf("Testing %p\n", NULL));

	printf("%d\t%d\n", printf("Testing %p\n", (void*)0),
					ft_printf("Testing %p\n", (void*)0));

	printf("%d\t%d\n", printf("Testing %p\n", 0),
					ft_printf("Testing %p\n", 0));

	printf("\nTesting CHAR\n");
	char c = 'h';
	printf("%d\t%d\n", printf("Testing %c\n", c),
					ft_printf("Testing %c\n", c));

	printf("%d\t%d\n", printf("Testing %c\n", 97),
					ft_printf("Testing %c\n", 97));

	printf("%d\t%d\n", printf("Testing %c\n", -100),
					ft_printf("Testing %c\n", -100));

	printf("\nTesting STRINGS\n");
	char *s = ft_strdup("One String");
	printf("%d\t%d\n", printf("Testing %s\n", s),
					ft_printf("Testing %s\n", s));

	printf("%d\t%d\n", printf("Testing %s\n", NULL),
					ft_printf("Testing %s\n", NULL));

	printf("%d\t%d\n", printf("Testing %s\n", (void*)0),
					ft_printf("Testing %s\n", (void*)0));

	printf("%d\t%d\n", printf("Testing %s\n", 0),
					ft_printf("Testing %s\n", 0));
	free(s);
}