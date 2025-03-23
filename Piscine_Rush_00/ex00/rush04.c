/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 09:33:39 by rocorrei          #+#    #+#             */
/*   Updated: 2025/02/16 13:39:40 by daalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_char(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0)
		|| (i == y - 1 && j == x - 1 && y > 1 && x > 1))
		ft_putchar('A');
	else if ((i == 0 && j == x - 1)
		|| (i == y - 1 && j == 0))
		ft_putchar('C');
	else if (i == 0 || i == y - 1
		|| j == 0 || j == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			print_char(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
