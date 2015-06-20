/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajulien <ajulien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 18:40:38 by ajulien           #+#    #+#             */
/*   Updated: 2015/06/20 19:31:30 by ajulien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Projectile.hpp"

Projectile::Projectile( void ) : AEntity()
{
	return;
}

Projectile::Projectile( int x, int y, char c ) : AEntity(x, y, c){
	setvecX(1);
	return;
}

Projectile::Projectile( Projectile const &src ) : AEntity(src) {
	return ;
}

Projectile::~Projectile( void ) {
	return ;
}

Projectile & Projectile::operator=( Projectile const &rhs ) {
	posX = rhs.posX;
	posY = rhs.posY;
	display = rhs.display;
	return (*this);
}

// functions //
void	Projectile::shoot( void ) {
}
