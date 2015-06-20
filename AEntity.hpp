/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEntity.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajulien <ajulien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 10:43:58 by aleung-c          #+#    #+#             */
/*   Updated: 2015/06/20 19:37:33 by ajulien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AENTITY_HPP
# define AENTITY_HPP

#include "ft_retro.hpp"

class AEntity
{
	public:
		AEntity(int x, int y, char c);
		virtual ~AEntity( void );
		AEntity( AEntity const &src );
		AEntity( void );
		AEntity & operator=( AEntity const &rhs );

		void			move( int x, int y ); // modifie la val du vect de deplacement;
		virtual void	shoot( void ) = 0; // spawn un sous objet projectile
		int				getPosX();
		int				getPosY();
		bool			setPosX(int x);
		bool			setPosY(int y);
		char			getDisplay( void ) const;
		int				getvecX( void ) const;
		int				getvecY( void ) const;
		std::string		getType( void ) const;
		void			setvecX( int var );
		void			setvecY( int var );
		void			die();

	protected:
		// space var //
		int posX; // position
		int posY;

		int vecX; // valeur de deplacement au refresh
		int vecY;

		t_ent_obj *_n;

		std::string		type;
		// apparence //
		char display; // char qui sera affiché.
};

#endif
