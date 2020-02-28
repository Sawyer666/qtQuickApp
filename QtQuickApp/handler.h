#ifndef HANDLER_H
#define HANDLER_H

#include <QObject>

class Handler
{
public:
    Handler();
public slots:
    void buttonHandler(QString str);
};

#endif // HANDLER_H
