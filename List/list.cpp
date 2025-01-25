#include "list.h"
#include <QString>

List::List(QWidget *parent)
    : QWidget{parent}
{

    left_list_name = new QLabel("Обычные животные");
    left_list_name->setFont(QFont("Courier New", 17, 1, 1));

    right_list_name = new QLabel("Крутые животные");
    right_list_name->setFont(QFont("Courier New", 17, 1, 1));

    left_btn = new QPushButton("<-");
    left_btn->setStyleSheet("background-color: rgb(232, 205, 170);");
    connect (left_btn, &QPushButton::clicked, this, &List::lSlot);

    right_btn = new QPushButton("->");
    right_btn->setStyleSheet("background-color: rgb(232, 205, 170);");
    connect (right_btn, &QPushButton::clicked, this, &List::rSlot);

    addItem = new QPushButton("Добавить животное");
    addItem->setStyleSheet("background-color: rgb(232, 205, 170);");
    connect (addItem, &QCheckBox::clicked, this, &List::addSlot);

    multi_sel = new QCheckBox("Выбрать несколько");
    connect (multi_sel, &QCheckBox::clicked, this, &List::mulSlot);

    pictogram = new QCheckBox("Режим пиктограмм");
    connect (pictogram, &QCheckBox::clicked, this, &List::pictSlot);

    remove = new QPushButton("Удалить");
    remove->setStyleSheet("background-color: rgb(232, 205, 170);");
    connect (remove, &QPushButton::clicked, this, &List::removeSlot);


    left_l = new QListWidget();
    item5 = new QListWidgetItem(QIcon("C:/Users/Asus/Desktop/QT/List/cat.PNG"), "Котик");
    left_l->addItem(item5);
    item6 = new QListWidgetItem(QIcon("C:/Users/Asus/Desktop/QT/List/monkey.PNG"), "Обезьянка");
    left_l->addItem(item6);
    item7 = new QListWidgetItem(QIcon("C:/Users/Asus/Desktop/QT/List/caw.PNG"), "Коровка");
    left_l->addItem(item7);
    left_l->setStyleSheet("background-color: rgb(232, 205, 170);");
    connect (left_l, &QListWidget::itemDoubleClicked, this, &List::editSlot);

    right_l = new QListWidget();
    item1 = new QListWidgetItem(QIcon("C:/Users/Asus/Desktop/QT/List/seal.png"), "Тюлень");
    right_l->addItem(item1);
    item2 = new QListWidgetItem(QIcon("C:/Users/Asus/Desktop/QT/List/2seal.png"), "Много тюленей");
    right_l->addItem(item2);
    item3 = new QListWidgetItem(QIcon("C:/Users/Asus/Desktop/QT/List/3seal.png"), "Очень много тюленей");
    right_l->addItem(item3);
    item4 = new QListWidgetItem(QIcon("C:/Users/Asus/Desktop/QT/List/seals.png"), "Стая тюленей");
    right_l->addItem(item4);
    right_l->setStyleSheet("background-color: rgb(232, 205, 170);");
    connect (right_l, &QListWidget::itemDoubleClicked, this, &List::editSlot);

    sort_l = new QPushButton("Сортировать");
    sort_l->setStyleSheet("background-color: rgb(232, 205, 170);");
    connect (sort_l, &QPushButton::clicked, this, &List::lSort);

    sort_r = new QPushButton("Сортировать");
    sort_r->setStyleSheet("background-color: rgb(232, 205, 170);");
    connect (sort_r, &QPushButton::clicked, this, &List::rSort);

    clear_left = new QPushButton("Очистить");
    clear_left->setStyleSheet("background-color: rgb(232, 205, 170);");
    connect (clear_left, &QPushButton::clicked, this, &List::clearLeft);


    clear_right = new QPushButton("Очистить");
    clear_right->setStyleSheet("background-color: rgb(232, 205, 170);");
    connect (clear_right, &QPushButton::clicked, this, &List::clearRight);


    under_btn_cont_left = new QHBoxLayout;
    under_btn_cont_left->addWidget(sort_l);
    under_btn_cont_left->addWidget(clear_left);

    under_btn_cont_right = new QHBoxLayout;
    under_btn_cont_right->addWidget(sort_r);
    under_btn_cont_right->addWidget(clear_right);

    left_list_cont = new QVBoxLayout;
    left_list_cont->addWidget(left_list_name);
    left_list_cont->addWidget(left_l);
    left_list_cont->addLayout(under_btn_cont_left);

    right_list_cont = new QVBoxLayout;
    right_list_cont->addWidget(right_list_name);
    right_list_cont->addWidget(right_l);
    right_list_cont->addLayout(under_btn_cont_right);

    btn_cont = new QVBoxLayout();
    btn_cont->addWidget(right_btn);
    btn_cont->addWidget(addItem);
    btn_cont->addWidget(multi_sel);
    btn_cont->addWidget(pictogram);
    btn_cont->addWidget(remove);
    btn_cont->addWidget(left_btn);

    list_container = new QHBoxLayout();
    list_container->addLayout(left_list_cont);
    list_container->addLayout(btn_cont);
    list_container->addLayout(right_list_cont);


    setLayout(list_container);
}

void List::lSlot()
{
    if (right_l->currentItem() == nullptr)
        return;
    for (auto i : right_l->selectedItems())
    {
        left_l->addItem(i->clone());
        delete i;
    }
    right_l->setCurrentItem(nullptr);
}

void List::rSlot()
{
    if (left_l->currentItem() == nullptr)
        return;
    for (auto i : left_l->selectedItems())
    {
        right_l->addItem(i->clone());
        delete i;
    }
    left_l->setCurrentItem(nullptr);
}

void List::mulSlot()
{
    if(multi_sel->isChecked())
    {
        right_l->setSelectionMode(QAbstractItemView::MultiSelection);
        left_l->setSelectionMode(QAbstractItemView::MultiSelection);
    } else
    {
        right_l->setSelectionMode(QAbstractItemView::SingleSelection);
        left_l->setSelectionMode(QAbstractItemView::SingleSelection);
    }
}

void List::rSort()
{
    right_l->sortItems(Qt::DescendingOrder);
}

void List::lSort()
{
    left_l->sortItems(Qt::AscendingOrder);
}

void List::clearLeft()
{
    left_l->clear();
}

void List::clearRight()
{
    right_l->clear();
}

void List::editSlot()
{
    ((QListWidget*)sender())->currentItem()->setFlags(Qt::ItemIsEnabled | Qt::ItemIsEditable | Qt::ItemIsSelectable);
}

void List::removeSlot()
{
    if (left_l->currentItem() == nullptr && right_l->currentItem() == nullptr)
        return;
    for (auto i : left_l->selectedItems())
    {
        delete i;
    }
    left_l->setCurrentItem(nullptr);

    for (auto i : right_l->selectedItems())
    {
        delete i;
    }
    right_l->setCurrentItem(nullptr);
}

void List::addSlot()
{
    QString text;
    bool isLeft;
    AddWidget add(&text, &isLeft);
    add.setModal(true);
    add.setWindowTitle("Животные");
    add.setWindowIcon(QIcon("C:/Users/Asus/Desktop/QT/List/dog.png"));
    add.exec();

    QListWidgetItem *item = new QListWidgetItem(QIcon("C:/Users/Asus/Desktop/QT/List/dog.png"), text);
    if (text == "" || text.count(' ') == text.size())
        return;
    if (isLeft)
        left_l->addItem(item);
    else
        right_l->addItem(item);
}

void List::pictSlot()
{
    if(pictogram->isChecked())
    {
        left_l->setViewMode(QListView::IconMode);
        left_l->setFlow(QListView::TopToBottom);

        right_l->setViewMode(QListView::IconMode);
        right_l->setFlow(QListView::TopToBottom);
    } else
    {
        left_l->setViewMode(QListView::ListMode);
        left_l->setCurrentItem(nullptr);
        right_l->setViewMode(QListView::ListMode);
        right_l->setCurrentItem(nullptr);
    }
}

