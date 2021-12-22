/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:51:43 by fmonbeig          #+#    #+#             */
/*   Updated: 2021/12/22 17:25:40 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include <iostream>

// using namespace std;

// int main ()
// {
// 	cout << "Hello world!" << endl;
// 	return 0;
// }


#include <stdio.h>

int var = 32;

namespace Foo
{
	int var = 27;
}

int main ()
{
	printf("valeur de Foo var = %d\n", var);
	Foo::var++;
	printf("valeur de Foo var = %d\n", Foo::var);
	return (0);
}
