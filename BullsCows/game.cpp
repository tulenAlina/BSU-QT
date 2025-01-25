#include <QMessageBox>
#include <QHeaderView>
#include <QInputDialog>
#include "game.h"

Game::Game(QWidget *parent)
    : QWidget{parent}
{
    pressStart = true;

    recordsWidget = new QWidget();
    rec_cont = new QVBoxLayout();
    records = new QTableWidget(10, 2);
    records->setHorizontalHeaderLabels(QStringList({"Попыток", "Имя"}));
    records->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //records->setEnabled(false);

    rec_cont->addWidget(records);
    recordsWidget->setLayout(rec_cont);
    recordsWidget->setWindowTitle("Рекорды");
    recordsWidget->setWindowIcon((QIcon("C:/Users/Asus/Desktop/QT/BullsCows/caw.PNG")));
    recordsWidget->setStyleSheet("background-color: rgb(250, 225, 242);");

    start_btn = new QPushButton("Новая игра");
    start_btn->setStyleSheet("background-color: rgb(247, 166, 221);");
    //QString::number(num)
    connect(start_btn, &QPushButton::clicked, this, &Game::newGameSlot);

    state_lbl = new QLabel("Игра не начата");


    records_btn = new QPushButton("Рекорды");
    records_btn->setStyleSheet("background-color: rgb(247, 166, 221);");
    connect(records_btn, &QPushButton::clicked, this, &Game::recordsSlot);


    input_lbl = new QLabel("Введите число");

    input = new QLineEdit();
    input->setEnabled(false);

    check_btn = new QPushButton("Проверить");
    check_btn->setStyleSheet("background-color: rgb(247, 166, 221);");
    check_btn->setEnabled(false);
    connect(check_btn, &QPushButton::clicked, this, &Game::checkSlot);

    numbers = new QTableWidget(n, 2);
    numbers->setHorizontalHeaderLabels(QStringList({"Число", "Результат"}));
    numbers->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    start_cont = new QHBoxLayout();
    start_cont->addWidget(start_btn);
    start_cont->addWidget(state_lbl);
    start_cont->addWidget(records_btn);

    input_cont = new QHBoxLayout();
    input_cont->addWidget(input_lbl);
    input_cont->addWidget(input);
    input_cont->addWidget(check_btn);

    //num_table_cont = new QVBoxLayout();
    //num_table_cont->addWidget(numbers_lbl);
    //num_table_cont->addWidget(numbers);

    //res_table_cont = new QVBoxLayout();
    //res_table_cont->addWidget(result_lbl);
    //res_table_cont->addWidget(result);

    //table_cont = new QHBoxLayout();
    //table_cont->addLayout(num_table_cont);
    //table_cont->addLayout(res_table_cont);

    container = new QVBoxLayout();
    container->addLayout(start_cont);
    container->addLayout(input_cont);
    //container->addLayout(table_cont);
    container->addWidget(numbers);

    setLayout(container);
}

bool Game::rep(int i)
{
    /*for (int j=0; j<3; j++) {
        for (int g = 2; g <= QString::number(i).length(); g++)
            if (i%10 == (i/(10*(g-1))%10))
                return false;
        i/=10;
    }
    return true;*/
    int a[4];
    for (int j = 0; j < 4; j++){
        a[j] = i%10;
        i/=10;
    }
    for(int j = 0; j<4;j++)
        for(int k = j+1; k<4; k++)
            if(a[j]==a[k])
                return true; //повторяется
    return false;
}

std::pair<int, int> Game::bac(int n1, int n2)
{
    std::pair<int, int> outp(0, 0);

    int a1[4];
    int a2[4];
    for (int i = 0; i < 4; i++)
    {
        a1[i] = n1 % 10; n1 /= 10;
        a2[i] = n2 % 10; n2 /= 10;
        if (a1[i] == a2[i])
            outp.second++;
    }
    for (int i = 0; i < 4; i++)
        for (int j= 0; j < 4; j++)
            if (a1[i] == a2[j])
            {
                outp.first++;
                a2[j] = -1;
                break;
            }
    outp.first -= outp.second;
    return outp;
}


void Game::checkSlot()
{
    QString text = input->text();
    int itext = text.toInt();
    QMessageBox *mes = new QMessageBox(QMessageBox::Critical, "Неверное число", "Введите число от 1000 до 9999");
    mes->setStyleSheet("background-color: rgb(250, 225, 242);");
    mes->setWindowIcon((QIcon("C:/Users/Asus/Desktop/QT/BullsCows/caw.PNG")));
    //numbers->setEnabled(true);
    //numbers->setRowCount(++n);
    if (text == "")
        return;

    if (itext >= 1000 && itext <=9999){
        if (rep(itext)){
            mes->setText("Цифры числа должны быть различны");
            mes->exec();
        } else {
        numbers->insertRow(n);
        numbers->setItem(n, 0, new QTableWidgetItem(text));
        numbers->item(n, 0)->setFlags(Qt::ItemIsEnabled);
        input->clear();
        QString b = "Быков: " + QString::number(bac(itext, num).second) + "; Коров: " + QString::number(bac(itext, num).first);
        numbers->setItem(n, 1, new QTableWidgetItem(b));
        numbers->item(n, 1)->setFlags(Qt::ItemIsEnabled);
        n++;
        }
    }
    else
        mes->exec();
    if(itext == num){
        state_lbl->setText("Победа! Число: " + QString::number(num));
        int score = numbers->rowCount();
        input->setEnabled(false);
        for (int j = 0; j <10; j++)
        if (records->item(j, 0) == nullptr || score < records->item(j,0)->text().toInt() ){
                bool ok = false;
                QInputDialog input_name = new QInputDialog();
                QString name = QInputDialog::getText(this, "Победа", "Введите своё имя:", QLineEdit::Normal, "", &ok);
                input_name.setWindowTitle("Победа");
                input_name.setWindowIcon((QIcon("C:/Users/Asus/Desktop/QT/BullsCows/caw.PNG")));
                input_name.setLabelText("Введите своё имя:");
                input_name.setStyleSheet("background-color: rgb(250, 225, 242);");
                input_name.show();
                if(ok) {
                    //for (int k = j; k<9; k++){
                        //QTableWidgetItem *buf = new QTableWidgetItem(records->item(j+1, 0)->text());
                        //records->setItem(k+1, 0, records->item(k, 0));
                        //records->setItem(k+1, 0, records->item(k, 0));
                    //}
                    records->insertRow(j);
                    records->removeRow(10);
                    records->setItem(j, 0, new QTableWidgetItem(QString::number(score)));
                    records->item(j, 0)->setFlags(Qt::ItemIsEnabled);
                    records->setItem(j, 1, new QTableWidgetItem(name));
                    records->item(j, 1)->setFlags(Qt::ItemIsEnabled);
                }
                break;
        }
    }

}

void Game::newGameSlot()
{
    if (pressStart){
    do{
        srand(time(NULL));
        num = (rand()*12386 + 86302 + rand())%9000 + 1000;}

    while (rep(num));

    //records_btn->setText(QString::number(num));

    start_btn->setText("Завершить игру");
    state_lbl->setText("Игра начата!");
    input->setEnabled(true);
    check_btn->setEnabled(true);
    pressStart = false;
    }
    else {
    while (numbers->rowCount() > 0)
        numbers->removeRow(0);
    input->clear();
    start_btn->setText("Новая игра");
    state_lbl->setText("Игра не начата");
    input->setEnabled(false);
    check_btn->setEnabled(false);
    pressStart = true;
    n = 0;
    }
}

void Game::recordsSlot()
{
    recordsWidget->show();
}

