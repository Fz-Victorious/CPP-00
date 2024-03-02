/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:37:33 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/14 04:21:15 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class Phonebook
{
    public:

    Phonebook(void );
    ~Phonebook(void );
    void    addContact(void);
    void    searchContact(void);

    private:

    int _index;
    int _totalContact;
    Contact _contact[8];
    void    displayContact(int index) const;
    void    contactCheck(std::string contact) const;
};

#endif
