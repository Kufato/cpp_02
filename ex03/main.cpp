/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:51:36 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/05 14:19:05 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void) {
	Point	A(0, 0);
	Point	B(2, 0);
	Point	C(0, 2);

	//	First test
	Point	D(0.5, 0.8);
	std::cout << std::endl;
	std::cout << _CYAN << "### TEST NUMBER 1 ###" << _END << std::endl;
	std::cout << "This triangle has the following vertices :" << std::endl;
	std::cout << _GREEN << "A: (" << A.get_x() << "; " << A.get_y() << ")" << _END << std::endl;
	std::cout << _YELLOW << "B: (" << B.get_x() << "; " << B.get_y() << ")" << _END << std::endl;
	std::cout << _RED << "C: (" << C.get_x() << "; " << C.get_y() << ")" << _END << std::endl;
	std::cout << "And we have point D: (" << D.get_x() << "; " << D.get_y() << ")" << std::endl;
	std::cout << "Is point D inside triangle ABC ?" << std::endl;
	std::cout << "The answer is " << std::flush;
	if (bsp(A, B, C, D))
		std::cout << _GREEN << "YES " << _END << ":)" << std::endl;
	else
		std::cout << _RED << "NO " << _END ":(" << std::endl;
	
	Point	E(1, 1);
	std::cout << std::endl;
	std::cout << _CYAN << "### TEST NUMBER 2 ###" << _END << std::endl;
	std::cout << "This triangle has the following vertices :" << std::endl;
	std::cout << _GREEN << "A: (" << A.get_x() << "; " << A.get_y() << ")" << _END << std::endl;
	std::cout << _YELLOW << "B: (" << B.get_x() << "; " << B.get_y() << ")" << _END << std::endl;
	std::cout << _RED << "C: (" << C.get_x() << "; " << C.get_y() << ")" << _END << std::endl;
	std::cout << "And we have point E: (" << E.get_x() << "; " << E.get_y() << ")" << std::endl;
	std::cout << "Is point E inside triangle ABC ?" << std::endl;
	std::cout << "The answer is " << std::flush;
	if (bsp(A, B, C, E))
		std::cout << _GREEN << "YES " << _END << ":)" << std::endl;
	else
		std::cout << _RED << "NO " << _END ":(" << std::endl;

	Point	F(34, 346);
	std::cout << std::endl;
	std::cout << _CYAN << "### TEST NUMBER 3 ###" << _END << std::endl;
	std::cout << "This triangle has the following vertices :" << std::endl;
	std::cout << _GREEN << "A: (" << A.get_x() << "; " << A.get_y() << ")" << _END << std::endl;
	std::cout << _YELLOW << "B: (" << B.get_x() << "; " << B.get_y() << ")" << _END << std::endl;
	std::cout << _RED << "C: (" << C.get_x() << "; " << C.get_y() << ")" << _END << std::endl;
	std::cout << "And we have point F: (" << F.get_x() << "; " << F.get_y() << ")" << std::endl;
	std::cout << "Is point F inside triangle ABC ?" << std::endl;
	std::cout << "The answer is " << std::flush;
	if (bsp(A, B, C, E))
		std::cout << _GREEN << "YES " << _END << ":)" << std::endl;
	else
		std::cout << _RED << "NO " << _END ":(" << std::endl;

	Point	G(0, 0);
	Point	H(0, 0);
	Point	I(0, 0);
	Point	J(0, 0);
	std::cout << std::endl;
	std::cout << _CYAN << "### TEST NUMBER 4 ###" << _END << std::endl;
	std::cout << "This triangle has the following vertices :" << std::endl;
	std::cout << _GREEN << "G: (" << G.get_x() << "; " << G.get_y() << ")" << _END << std::endl;
	std::cout << _YELLOW << "H: (" << H.get_x() << "; " << H.get_y() << ")" << _END << std::endl;
	std::cout << _RED << "I: (" << I.get_x() << "; " << I.get_y() << ")" << _END << std::endl;
	std::cout << "And we have point J: (" << J.get_x() << "; " << J.get_y() << ")" << std::endl;
	std::cout << "Is point J inside triangle GHI ?" << std::endl;
	std::cout << "The answer is " << std::flush;
	if (bsp(G, H, I, J))
		std::cout << _GREEN << "YES " << _END << ":)" << std::endl;
	else
		std::cout << _RED << "NO " << _END ":(" << std::endl;
}