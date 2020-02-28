#include "handler.h"
#include <QDebug>
Handler::Handler()
{

}

void Handler::buttonHandler(QString str)
{
    qDebug() << str;
}
