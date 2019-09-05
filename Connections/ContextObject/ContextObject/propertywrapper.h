#ifndef PROPERTYWRAPPER_H
#define PROPERTYWRAPPER_H

#include <QObject>
#include <QTimer>

class PropertyWrapper : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString firstname READ firstname WRITE setFirstname NOTIFY firstnameChanged)
    Q_PROPERTY(QString lastname READ lastname WRITE setLastname NOTIFY lastnameChanged)

public:
    explicit PropertyWrapper(QObject *parent = nullptr);
    QString firstname() const;
    QString lastname() const;

    void setFirstname(QString firstname);
    void setLastname(QString lastname);

signals:

    void firstnameChanged(QString firstname);
    void lastnameChanged(QString lastname);

private:

    QString m_firstname;
    QString m_lastname;

    QTimer * m_timer;
    int m_random_number;
};

#endif // PROPERTYWRAPPER_H
