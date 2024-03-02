/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:36:37 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/14 02:55:26 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
    public:

    Contact(void );
    ~Contact(void );
    std::string		getFirstName(void) const;
    std::string		getLastName(void) const;
    std::string		getNickName(void) const;
    std::string		getPhoneNumber(void) const;
    std::string		getDarkestSecret(void) const;
    void			setFirstName(std::string firstName);
    void			setLastName(std::string lastName);
    void			setNickName(std::string nickName);
    void			setPhoneNumber(std::string phoneNumber);
    void			setDarkestSecret(std::string darkSecret);

    private:

    std::string     _firstName;
    std::string     _lastName;
    std::string     _nickName;
    std::string     _phoneNumber;
    std::string     _darkestSecret;
};

#endif

