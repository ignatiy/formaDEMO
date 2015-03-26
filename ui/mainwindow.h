#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
class MainWindow : public QMainWindow
{
Q_OBJECT
public:
explicit MainWindow(QWidget *parent = 0);
signals:
public slots:
// vot zdes objyavlyaem slot
    void okClicked();
};
#endif // MAINWINDOW_H
