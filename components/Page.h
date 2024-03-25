#ifndef PAGE_H
#define PAGE_H
#include <qgridlayout.h>
#include <qwidget.h>


class Page : public QWidget
{
    Q_OBJECT

public:
    Page(QWidget *parent = nullptr);

    void AddPageContent(QWidget *content);

private slots:

private:
};


#endif //PAGE_H
