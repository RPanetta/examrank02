/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:50:22 by rpanetta          #+#    #+#             */
/*   Updated: 2025/11/27 17:59:16 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	repeat_alpha(int argc, char **argv)
{
	int	i;
	char c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = argv[1][i];
		}
	
	}
	else
	{
		write (1, "\n", 1);
	}
	write (1, "\n", 1);
	return
}

int main(void)
{
	return (0);
}