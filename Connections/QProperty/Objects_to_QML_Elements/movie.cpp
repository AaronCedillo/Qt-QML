#include "movie.h"

#include "QDebug"

Movie::Movie(QObject *parent) : QObject(parent),
    m_title("Movie Title"),
    m_mainCharacter("Main Character")
{

}

QString Movie::mainCharacter() const
{
    qDebug() << "Getting the main character here";
    return m_mainCharacter;
}

void Movie::setMainCharacter(QString mainCharacter)
{
    qDebug() << "Setting the main character";
    if (m_mainCharacter == mainCharacter)
        return;

    m_mainCharacter = mainCharacter;
    emit mainCharacterChanged(m_mainCharacter);
}

QString Movie::title() const
{
    qDebug() << "Getting the title here";
    return m_title;
}

void Movie::setTitle(QString title)
{
    qDebug() << "Setting the title here";
    if (m_title == title)
        return;

    m_title = title;
    emit titleChanged(m_title);
}
