// CFantasyMovies.h

#ifndef CFANTASYMOVIES_H
#define CFANTASYMOVIES_H

#include <QObject>
#include <QStack>

class CFantasyMovies : public QObject
{
    Q_OBJECT
public:
    explicit CFantasyMovies(QObject *parent = nullptr);
    Q_INVOKABLE void selectMovie(int number);

signals:
    void displayMovie(QString movieTitle);

private:
    QStack<QString> stackOdd;
    QStack<QString> stackEven;
};

#endif
