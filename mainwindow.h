#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <time.h>
#include <QMessageBox>
#include <QPixmap>
#include <Bubble.h>
#include <Inserction.h>
#include <Selection.h>
#include <Merge_Sort.h>
#include <Quick_Sort.h>
#include <heap_sort.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonVai_clicked();

private:
    Ui::MainWindow *ui;
    int *vetor;
};

#endif // MAINWINDOW_H
