#include "mainwindow.h"
#include <QToolBar>
MainWindow::MainWindow(QWidget *parent) :
QMainWindow(parent){
setMinimumSize(640,480);

QToolBar * tbar = new QToolBar;
//tbar = new QToolBar(this);
tbar->addAction(tr("Новая"),this,SLOT(on_btnOk_clicked()));
tbar->addSeparator();
tbar->addAction(tr("Редактировать"),this,SLOT(on_btnOk_clicked()));
tbar->addSeparator();
tbar->addAction(tr("Удалить"),this,SLOT(on_btnOk_clicked()));
tbar->show();

//QToolBar * tbar = new QToolBar;
//tbar->setGeometry(30,30,30,30);
//tbar->setParent(mainwindow);
//tbar->addAction("Open",this,SLOT(triggered))


}
