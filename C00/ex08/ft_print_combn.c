/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EIDOLONJIMA <r.grandco@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:40:34 by EIDOLONJIMA       #+#    #+#             */
/*   Updated: 2025/04/25 18:44:03 by EIDOLONJIMA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Fonction pour vérifier si le nombre est dans la plage acceptable
int	verifier_nombre(int nombre)
{
	if (nombre < 0 || nombre > 9)
	{
		write(1, "Error: parameter not accepted\n", 30);
		return (0);
	}
	return (1);
}

void	ft_idkwid(int nb_ch, int curr_cb_first)
{
	if (curr_cb_first != 10 - nb_ch)
	{
		write(1, ", ", 2);
	}
	return ;
}

void	ecrire_combinaison(int nb_ch, int *curr_cb, int curr_i, int debut)
{
	char	caractere;
	int		indice_affichage;
	int		chiffre_courant;

	if (curr_i == nb_ch)
	{
		indice_affichage = 0;
		while (indice_affichage < nb_ch)
		{
			caractere = '0' + curr_cb[indice_affichage];
			write(1, &caractere, 1);
			indice_affichage++;
		}
		ft_idkwid(nb_ch, curr_cb[0]);
		return ;
	}
	chiffre_courant = debut;
	while (chiffre_courant <= 9)
	{
		curr_cb[curr_i] = chiffre_courant;
		ecrire_combinaison(nb_ch, curr_cb, curr_i + 1, chiffre_courant + 1);
		chiffre_courant++;
	}
}

void	ft_print_combn(int nb_ch)
	{
	int	curr_cb[10];

	if (!verifier_nombre(nb_ch))
	{
		return ;
	}
	ecrire_combinaison(nb_ch, curr_cb, 0, 0);
}
