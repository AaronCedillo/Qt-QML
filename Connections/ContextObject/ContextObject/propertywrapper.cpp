#include "propertywrapper.h"

#include <stdlib.h> /* srand, rand */
#include <time.h> /* time */

PropertyWrapper::PropertyWrapper(QObject *parent) : QObject(parent),
    m_firstname("FirstName"),
    m_lastname("LastName"),
    m_timer(new QTimer(this)),
    m_random_number(0)
{
    //Initialize
    srand(time(NULL));

    QStringList listFirstName;
    listFirstName << "Daniel" << "Alberto" << "Isaac" << "David" << "Roberto" << "Rogelio" << "Tomas";
    QStringList listLastName;
    listLastName << "Medina" << "Tirado" << "Huerta" << "Cervantes" << "Morelos" << "Cedillo" << "Suarez";

    connect(m_timer, &QTimer::timeout, [=]() {
        m_random_number= rand() % (listFirstName.size());
        setFirstname(listFirstName[m_random_number]);
    });

    connect(m_timer, &QTimer::timeout, [=]() {
        m_random_number = rand() % (listLastName.size());
        setLastname(listLastName[m_random_number]);
    });
    m_timer -> start(3000);
}

QString PropertyWrapper::firstname() const
{
    return m_firstname;
}

QString PropertyWrapper::lastname() const
{
    return m_lastname;
}

void PropertyWrapper::setFirstname(QString firstname)
{
    if (m_firstname == firstname)
        return;

    m_firstname = firstname;
    emit firstnameChanged(m_firstname);
}

void PropertyWrapper::setLastname(QString lastname)
{
    if (m_lastname == lastname)
        return;

    m_lastname = lastname;
    emit lastnameChanged(m_lastname);
}
