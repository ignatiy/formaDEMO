#include "mainwindow.h"
#include <QToolBar>
#include <QTextEdit>
#include <QVBoxLayout>

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
QMainWindow(parent){
setMinimumSize(640,480);

QToolBar * tbar = new QToolBar;
tbar = new QToolBar(this);
tbar->addAction(tr("Новая"),this,SLOT(okClicked()));
tbar->addSeparator();
tbar->addAction(tr("Редактировать"),this,SLOT(on_btnOk_clicked()));
tbar->addSeparator();
tbar->addAction(tr("Удалить"),this,SLOT(on_btnOk_clicked()));

    this->addToolBar(tbar); // vot zdes nado skazat QMainWindow, chto u nego est toolbar!!!


QTextEdit *text = new QTextEdit;
text= new QTextEdit(this);
text->setGeometry(110,30,200,420);


QTextEdit *text1 = new QTextEdit;
text1= new QTextEdit(this);
text1->setGeometry(330,30,200,420);

//QVBoxLayout *Layout = new QVBoxLayout;  //здесь я хотел добавить на форму Layout и на нем попытаться распложить текстовые поля
 // Layout->addWidget(textedit);


QVBoxLayout *lay = new QVBoxLayout(this);
lay->addWidget(text);

QVBoxLayout *lay1 = new QVBoxLayout(this);
lay1->addWidget(text1);



QVBoxLayout *layout = new QVBoxLayout;
   layout->addWidget(text);
   layout->addWidget(text1);

   this->setLayout(layout);

}

void MainWindow::okClicked(){
// a zdes realizuem kazdjy slot
    qDebug()<<"ok clicked";




}
