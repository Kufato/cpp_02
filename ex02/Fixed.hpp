/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:30:00 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/02 13:49:39 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>
#include <iostream>

class	Fixed {

	private:
		int					_rawBits;
		static const int	_fractBits = 8;

	public:
		Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed &toCopy);
		Fixed &operator = (const Fixed &rhs);
		~Fixed(void);

		int		getRawBits(void) const;
		int		toInt(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;

		bool					operator>(const Fixed &fixed) const;
		bool					operator<(const Fixed &fixed) const;
		bool					operator>=(const Fixed &fixed) const;
		bool					operator<=(const Fixed &fixed) const;
		bool					operator==(const Fixed &fixed) const;
		bool					operator!=(const Fixed &fixed) const;
		Fixed					operator+(const Fixed &fixed) const;
		Fixed					operator-(const Fixed &fixed) const;
		Fixed					operator*(const Fixed &fixed) const;
		Fixed					operator/(const Fixed &fixed) const;
		Fixed					operator++(int);
		Fixed					&operator++(void);
		Fixed					operator--(int);
		Fixed					&operator--(void);
		static const Fixed		&min(const Fixed &nb1, const Fixed &nb2);
		static const Fixed		&max(const Fixed &nb1, const Fixed &nb2);
		static Fixed			&min(Fixed &nb1, Fixed &nb2);
		static Fixed			&max(Fixed &nb1, Fixed &nb2);
};

std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed);

#endif