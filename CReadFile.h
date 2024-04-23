// CReadFile.h

#ifndef CREADFILE_H
#define CREADFILE_H

#include <QObject>
#include <QStack>

class CReadFile : public QObject
{
    Q_OBJECT
public:
    explicit CReadFile(QObject *parent = nullptr);
    Q_INVOKABLE void readAndOrganizeMovies();

signals:
    void moviesLoaded(QStack<QString> stackOdd, QStack<QString> stackEven);
};

#endif 
