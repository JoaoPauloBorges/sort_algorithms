#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    vetor(nullptr)
{
    ui->setupUi(this);
    QPixmap fundo("D:/OneDrive - Sociedade Goiana de Cultura/Computer Science/Data Structures II/Trabalho/41656272113.jpg");
    ui->label->setPixmap(fundo);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonVai_clicked()
{
    int tam = ui->comboBoxTamanho->currentText().toInt();
    int metodo = ui->comboBoxMetodo->currentIndex();
    QString tipo = ui->comboBoxTipo->currentText();
    QString output = "";

    std::srand(time(NULL));

    vetor = new int[tam];

    for(int i=0; i<tam;i++)
    {
        if(tipo=="Crescente")
        {
            vetor[i]=i;
        }
        else
        {
            if(tipo=="Decrescente")
            {
                vetor[i]=tam-i;
            }
            else{
                vetor[i]=rand()%tam;
            }

        }
        if(tam==10)
            output+=QString::number(vetor[i])+" ";
    }

    switch (metodo) {
    case 0:
        ED2::Bubble::bubble_sort(vetor,tam);
        break;
    case 1:
        ED2::Inserction::ins_sort(vetor,tam);
        break;
    case 2:
        ED2::Selection::Selec_sort(vetor,tam);
        break;
    case 3:
        ED2::MergeSort(vetor,0,tam-1);
        break;
    case 4:
        ED2::Quick_Sort aux;
        aux.Quick(vetor,0,tam-1);
        break;
    }

    if(metodo ==5)//não sei pq, mas o switch só aceitou 5 cases
        ED2::heapSort(vetor,tam);



    if(tam==10)
    {   output="Vetor original : "+output+"\n Novo vetor: ";

        for(int i=0;i<10;i++){
            output+=QString::number(vetor[i])+" ";}
        QMessageBox::information(this,"RESULTADO!",output);
    }else{
    QMessageBox::information(this,"RESULTADO!",QString("JÁ FOI HAHAHA"));
    }
    if(vetor){delete[] vetor;}
    vetor = nullptr;
}
