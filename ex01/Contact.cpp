/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:31:25 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/13 22:37:04 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    //std::cout << "contact constructor called" << std::endl;
}

Contact::~Contact()
{
    //std::cout << "contact destructor called" << std::endl;
}

//getters

std::string     Contact::getFirstName(void) const
{
    return (this->_firstName);
}
std::string     Contact::getLastName(void) const
{
    return (this->_lastName);
}
std::string     Contact::getNickName(void) const
{
    return (this->_nickName);
}
std::string     Contact::getPhoneNumber(void) const
{
    return (this->_phoneNumber);
}
std::string     Contact::getDarkestSecret(void) const
{
    return (this->_darkestSecret);
}

//setters

void    Contact::setFirstName(std::string   firstName)
{
    this->_firstName = firstName;
}
void    Contact::setLastName(std::string    lastName)
{
    this->_lastName = lastName;
}
void    Contact::setNickName(std::string nickName)
{
    this->_nickName = nickName;
}
void    Contact::setPhoneNumber(std::string phoneNumber)
{
    this->_phoneNumber = phoneNumber;
}
void    Contact::setDarkestSecret(std::string darkestSecret)
{
    this->_darkestSecret = darkestSecret;
}
