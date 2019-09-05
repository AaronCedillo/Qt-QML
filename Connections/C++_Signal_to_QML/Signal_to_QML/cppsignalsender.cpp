#include "cppsignalsender.h"

CppSignalSender::CppSignalSender(QObject *parent) : QObject(parent)
{

}

void CppSignalSender::cppSlot()
{
    emit callQml("Information from C++");
}
