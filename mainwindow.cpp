#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include <QtGui>
#include <QMessageBox>
#include <QCloseEvent>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMessageBox::about(this, "Прочти перед использованием", "В этом приложении есть пара нюансов, которые будут устранены в будущем, но пока что они есть.\nВо-первых, удалять строки ты можещь, но старайся не косячить с самой первой строкой в таблице. Она не удалится, а просто станет пустой. И если ты захочешь её заполнить, то придётся сделать это вручную.\nВо-вторых, строка удалится в таблице человека, только если ты укажешь этого человека в ячейке 'Заплатила:'. Иначе программа тебя проигнорирует.\nПомни, что программа может посчитать тебе общак, если ты в соотетствующих строчках напишешь сумму всего чека а потом номера продуктов, которые ты из него хочешь вычесть. Конпка 'заполнить' закинет полученную разницу в нужню ячейку, напишет 'Общак' и ткнёт за тебя конпку 'общее'.\nИ ещё, если нажмёшь на галочку 'общее', то остальные галочки будут проигнорированы.\nВот и всё! Успешного пользования!");
    QRegExpValidator *chislo = new QRegExpValidator(QRegExp("[0-9]{0,7}(,|\\.)[0-9]{4}"), this);
    ui->summa->setValidator(chislo);
    QRegExpValidator *stroka = new QRegExpValidator(QRegExp("([0-9]{0,2}( ))+"), this);
    ui->chto_vichitat->setValidator(stroka);
    ui->TABL_V->setColumnCount(5);
    ui->TABL_V->setHorizontalHeaderLabels(QStringList() <<"Название"<<"Сумма"<<"Саша"<<"Оля"<<"Аня");
    ui->TABL_S->setColumnCount(5);
    ui->TABL_S->setHorizontalHeaderLabels(QStringList() <<"Название"<<"Сумма"<<"Вика"<<"Оля"<<"Аня");
    ui->TABL_A->setColumnCount(5);
    ui->TABL_A->setHorizontalHeaderLabels(QStringList() <<"Название"<<"Сумма"<<"Вика"<<"Саша"<<"Оля");
    ui->TABL_O->setColumnCount(5);
    ui->TABL_O->setHorizontalHeaderLabels(QStringList() <<"Название"<<"Сумма"<<"Вика"<<"Саша"<<"Аня");
    ui->itog->setColumnCount(4);
    ui->itog->setRowCount(4);
    ui->itog->setHorizontalHeaderLabels(QStringList() <<"Вика"<<"Саша"<<"Оля"<<"Аня");
    ui->itog->setVerticalHeaderLabels(QStringList() <<"Вике"<<"Саше"<<"Оле"<<"Ане");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_V_TABLITZU_clicked()
{
    float k=0.0;
    float c =0.0;
    bool flag=false;
    int index=ui->kto_platil->currentIndex();
    QString product = ui->product->text();
    float sum = 0.0;
    if (ui->summa)
        sum = ui->summa->text().toFloat();
    if (ui->vse->isChecked())
    {
        k=3.0;
        flag=true;
    }
    else
        k=k+ui->vika->isChecked()+ui->olya->isChecked()+ui->anya->isChecked()+ui->sasha->isChecked();
    if (((ui->product)and(ui->summa))and (k>0))
    {
        c=sum/k;
        QString string = QString("%1").arg(c);
        QString string2 = QString("%1").arg(sum);
        QTableWidgetItem *nazvanie = new QTableWidgetItem(product);
        QTableWidgetItem *summa = new QTableWidgetItem(string2);
        QTableWidgetItem *dolzhnavika = new QTableWidgetItem(string);
        QTableWidgetItem *dolzhnasasha = new QTableWidgetItem(string);
        QTableWidgetItem *dolzhnaolya = new QTableWidgetItem(string);
        QTableWidgetItem *dolzhnaanya = new QTableWidgetItem(string);

        if (index==0)
        {
            ui->TABL_V->setRowCount(ui->TABL_V->rowCount() + 1);

            ui->TABL_V->setItem(str_v,0,nazvanie);
            ui->TABL_V->setItem(str_v,1,summa);
            if ((ui->sasha->isChecked()) or flag)
            {
                ui->TABL_V->setItem(str_v,2,dolzhnasasha);
            }
            if (ui->olya->isChecked())
            {
                ui->TABL_V->setItem(str_v,3,dolzhnaolya);
            }
            if ((ui->anya->isChecked())or flag)
            {
                ui->TABL_V->setItem(str_v,4,dolzhnaanya);
            }
            str_v=str_v+1;
        }
        if (index==1)
        {
            ui->TABL_S->setRowCount(ui->TABL_S->rowCount() + 1);
            ui->TABL_S->setItem(str_s,0,nazvanie);
            ui->TABL_S->setItem(str_s,1,summa);
            if ((ui->vika->isChecked())or flag)
            {
                ui->TABL_S->setItem(str_s,2,dolzhnavika);
            }
            if (ui->olya->isChecked())
            {
                ui->TABL_S->setItem(str_s,3,dolzhnaolya);
            }
            if ((ui->anya->isChecked())or flag)
            {
                ui->TABL_S->setItem(str_s,4,dolzhnaanya);
            }
            str_s=str_s+1;
        }
        if (index==2)
        {
            ui->TABL_O->setRowCount(ui->TABL_O->rowCount() + 1);
            ui->TABL_O->setItem(str_o,0,nazvanie);
            ui->TABL_O->setItem(str_o,1,summa);
            if ((ui->vika->isChecked())or flag)
            {
                ui->TABL_O->setItem(str_o,2,dolzhnavika);
                vo+=c;
            }
            if ((ui->sasha->isChecked())or flag)
            {
                ui->TABL_O->setItem(str_o,3,dolzhnasasha);
            }
            if ((ui->anya->isChecked())or flag)
            {
                ui->TABL_O->setItem(str_o,4,dolzhnaanya);
            }
            str_o=str_o+1;
        }
        if (index==3)
        {
            ui->TABL_A->setRowCount(ui->TABL_A->rowCount() + 1);
            ui->TABL_A->setItem(str_a,0,nazvanie);
            ui->TABL_A->setItem(str_a,1,summa);
            if ((ui->vika->isChecked())or flag)
            {
                ui->TABL_A->setItem(str_a,2,dolzhnavika);
            }
            if ((ui->sasha->isChecked())or flag)
            {
                ui->TABL_A->setItem(str_a,3,dolzhnasasha);
            }
            if (ui->olya->isChecked())
            {
                ui->TABL_A->setItem(str_a,4,dolzhnaolya);
            }
            str_a=str_a+1;
        }
    }
    ui->product->setText("");
    ui->summa->setText("");
    ui->vika->setChecked(false);
    ui->sasha->setChecked(false);
    ui->olya->setChecked(false);
    ui->anya->setChecked(false);
    ui->vse->setChecked(false);
}


void MainWindow::on_itogg_clicked()
{
    //tabl_/v
    int rows=ui->TABL_V->rowCount();
    bool ok;
    float c;
    vs=0;vo=0;va=0;so=0;sa=0;oa=0;
    for (int i=0;i<rows;i++)
    {
        if (ui->TABL_V->item(i,2))
        {
            c = ui->TABL_V->item(i,2)->text().toFloat(&ok);
            if (ok)
            {
                vs-=c; ;
            }
        }
        if (ui->TABL_V->item(i,3))
        {
            c = ui->TABL_V->item(i,3)->text().toFloat(&ok);
            if (ok)
            {
                vo-=c;
            }
        }
        if (ui->TABL_V->item(i,4))
        {

            c = ui->TABL_V->item(i,4)->text().toFloat(&ok);
            if (ok)
            {
                va-=c;
             }
        }
    }
//    tabl_s
    rows=ui->TABL_S->rowCount();
    for (int i=0;i<rows;i++)
    {
        if (ui->TABL_S->item(i,2))
        {
            c = ui->TABL_S->item(i,2)->text().toFloat(&ok);
            if (ok)
            {
                vs+=c; ;
            }
        }
        if (ui->TABL_S->item(i,3))
        {
            c = ui->TABL_S->item(i,3)->text().toFloat(&ok);
            if (ok)
            {
                so-=c;
            }
        }
        if (ui->TABL_S->item(i,4))
        {
            c = ui->TABL_S->item(i,4)->text().toFloat(&ok);
            if (ok)
            {
                sa-=c;
             }
        }
    }
    //tabl_o
    rows=ui->TABL_O->rowCount();
    for (int i=0;i<rows;i++)
    {
        if (ui->TABL_O->item(i,2))
        {
            c = ui->TABL_O->item(i,2)->text().toFloat(&ok);
            if (ok)
            {
                vo+=c; ;
            }
        }
        if (ui->TABL_O->item(i,3))
        {
            c = ui->TABL_O->item(i,3)->text().toFloat(&ok);
            if (ok)
            {
                so+=c;
            }
        }

        if (ui->TABL_O->item(i,4))
        {
            c = ui->TABL_O->item(i,4)->text().toFloat(&ok);
            if (ok)
            {
                oa-=c;
            }
        }
    }
    //tabl_a
    rows=ui->TABL_A->rowCount();
    for (int i=0;i<rows;i++)
    {
        if (ui->TABL_A->item(i,2))
        {
            c = ui->TABL_A->item(i,2)->text().toFloat(&ok);
            if (ok)
            {
                va+=c; ;
            }
        }
        if (ui->TABL_A->item(i,3))
        {
            c = ui->TABL_A->item(i,3)->text().toFloat(&ok);
            if (ok)
            {
                sa+=c;
            }
        }
        if (ui->TABL_A->item(i,4))
        {

            c = ui->TABL_A->item(i,4)->text().toFloat(&ok);
            if (ok)
            {
                oa+=c;
             }
        }
    }
    if (vs>0)
    {
        QString string = QString("%1").arg(vs);
        QTableWidgetItem *v_s = new QTableWidgetItem(string);
        ui->itog->setItem(1,0,v_s);
        QString string2 = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string2);
        ui->itog->setItem(0,1,zero);
    }
    else if(vs==0)
    {
        QString string = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string);
        ui->itog->setItem(1,0,zero);
        QTableWidgetItem *zero2 = new QTableWidgetItem(string);
        ui->itog->setItem(0,1,zero2);
    }
    else
    {
        QString string = QString("%1").arg(-vs);
        QTableWidgetItem *v_s = new QTableWidgetItem(string);
        ui->itog->setItem(0,1,v_s);
        QString string2 = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string2);
        ui->itog->setItem(1,0,zero);
    }
    if (vo>0)
    {
        QString string = QString("%1").arg(vo);
        QTableWidgetItem *v_o = new QTableWidgetItem(string);
        ui->itog->setItem(2,0,v_o);
        QString string2 = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string2);
        ui->itog->setItem(0,2,zero);
    }
    else if(vo==0)
    {
        QString string = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string);
        ui->itog->setItem(2,0,zero);
        QTableWidgetItem *zero2 = new QTableWidgetItem(string);
        ui->itog->setItem(0,2,zero2);
    }
    else
    {
        QString string = QString("%1").arg(-vo);
        QTableWidgetItem *v_o = new QTableWidgetItem(string);
        ui->itog->setItem(0,2,v_o);
        QString string2 = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string2);
        ui->itog->setItem(2,0,zero);
    }
    if (va>0)
    {
        QString string = QString("%1").arg(va);
        QTableWidgetItem *v_a = new QTableWidgetItem(string);
        ui->itog->setItem(3,0,v_a);
        QString string2 = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string2);
        ui->itog->setItem(0,3,zero);
    }
    else if(va==0)
    {
        QString string = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string);
        ui->itog->setItem(3,0,zero);
        QTableWidgetItem *zero2 = new QTableWidgetItem(string);
        ui->itog->setItem(0,3,zero2);
    }
    else
    {
        QString string = QString("%1").arg(-va);
        QTableWidgetItem *v_a = new QTableWidgetItem(string);
        ui->itog->setItem(0,3,v_a);
        QString string2 = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string2);
        ui->itog->setItem(3,0,zero);
    }
    if (so>0)
    {
        QString string = QString("%1").arg(so);
        QTableWidgetItem *s_o = new QTableWidgetItem(string);
        ui->itog->setItem(2,1,s_o);
        QString string2 = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string2);
        ui->itog->setItem(1,2,zero);
    }
    else if(so==0)
    {
        QString string = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string);
        ui->itog->setItem(1,2,zero);
        QTableWidgetItem *zero2 = new QTableWidgetItem(string);
        ui->itog->setItem(2,1,zero2);
    }
    else
    {
        QString string = QString("%1").arg(-so);
        QTableWidgetItem *s_o = new QTableWidgetItem(string);
        ui->itog->setItem(1,2,s_o);
        QString string2 = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string2);
        ui->itog->setItem(2,1,zero);
    }
    if (sa>0)
    {
        QString string = QString("%1").arg(sa);
        QTableWidgetItem *s_a = new QTableWidgetItem(string);
        ui->itog->setItem(3,1,s_a);
        QString string2 = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string2);
        ui->itog->setItem(1,3,zero);
    }
    else if(sa==0)
    {
        QString string = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string);
        ui->itog->setItem(1,3,zero);
        QTableWidgetItem *zero2 = new QTableWidgetItem(string);
        ui->itog->setItem(3,1,zero2);
    }
    else
    {
        QString string = QString("%1").arg(-sa);
        QTableWidgetItem *s_a = new QTableWidgetItem(string);
        ui->itog->setItem(1,3,s_a);
        QString string2 = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string2);
        ui->itog->setItem(3,1,zero);
    }
    if (oa>0)
    {
        QString string = QString("%1").arg(oa);
        QTableWidgetItem *o_a = new QTableWidgetItem(string);
        ui->itog->setItem(3,2,o_a);
        QString string2 = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string2);
        ui->itog->setItem(2,3,zero);
    }
    else if(oa==0)
    {
        QString string = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string);
        ui->itog->setItem(2,3,zero);
        QTableWidgetItem *zero2 = new QTableWidgetItem(string);
        ui->itog->setItem(3,2,zero2);
    }
    else
    {
        QString string = QString("%1").arg(-oa);
        QTableWidgetItem *o_a = new QTableWidgetItem(string);
        ui->itog->setItem(2,3,o_a);
        QString string2 = "";
        QTableWidgetItem *zero = new QTableWidgetItem(string2);
        ui->itog->setItem(3,2,zero);
    }


}

void MainWindow::on_vichest_clicked()
{
    QString s = ui->chto_vichitat->text();
    QStringList tokens= s.split(" ");
    float vichit=0;
    int index=ui->kto_platil->currentIndex();
    switch (index)
    {
    case 0:
    {
        for (int i=0; i!=tokens.size();i++)
            if (ui->TABL_V->item(tokens[i].toInt()-1,1))
            {
                vichit+=ui->TABL_V->item(tokens[i].toInt()-1,1)->text().toFloat();
            }
        break;
    }
    case 1:
    {
        for (int i=0; i!=tokens.size();i++)
            if (ui->TABL_S->item(tokens[i].toInt()-1,1))
            {
                vichit+=ui->TABL_S->item(tokens[i].toInt()-1,1)->text().toFloat();
            }
        break;
    }
    case 2:
    {
        for (int i=0; i!=tokens.size();i++)
            if (ui->TABL_O->item(tokens[i].toInt()-1,1))
            {
                vichit+=ui->TABL_O->item(tokens[i].toInt()-1,1)->text().toFloat();
            }
        break;
    }
    case 3:
    {
        for (int i=0; i!=tokens.size();i++)
            if (ui->TABL_A->item(tokens[i].toInt()-1,1))
            {
                vichit+=ui->TABL_A->item(tokens[i].toInt()-1,1)->text().toFloat();
            }
        break;
    }
    }
    float umenshaemoe = ui->iz_chego_vichitat->text().toFloat();
    QString string = QString("%1").arg((umenshaemoe-vichit));
    ui->raznitza->setText(string);
}

void MainWindow::on_delete_row_clicked()
{
    int index=ui->kto_platil->currentIndex();
    int row ;
    switch (index)
    {
    case 0:
    {
        row = ui->TABL_V->currentRow();
        if (row)
        {
            if (ui->TABL_V->item(row,2))
            {
                vs=vs+ui->TABL_V->item(row,2)->text().toInt();
            }
            if (ui->TABL_V->item(row,3))
            {
                vo+=ui->TABL_V->item(row,3)->text().toInt();
            }
            if (ui->TABL_V->item(row,4))
            {
                va+=ui->TABL_V->item(row,4)->text().toInt();
            }
            str_v-=1;
            if (str_v==0)
            {
                ui->TABL_V->selectionModel()->clearSelection();
            }
            ui->TABL_V->removeRow(row);
        }
        if (row==0)
        {
            for (int i=0;i<5;i++)
            {
                QString string = "";
                QTableWidgetItem *zero = new QTableWidgetItem(string);
                ui->TABL_V->setItem(0,i,zero);
            }
        }
        break;
    }
    case 1:
    {
        row = ui->TABL_S->currentRow();
        if ((ui->TABL_S->currentRow()))
        {
            if (ui->TABL_S->item(row,2))
            {
                vs-=ui->TABL_S->item(row,2)->text().toInt();
            }
            if (ui->TABL_S->item(row,3))
            {
                so+=ui->TABL_S->item(row,3)->text().toInt();
            }
            if (ui->TABL_S->item(row,4))
            {
                sa+=ui->TABL_S->item(row,4)->text().toInt();
            }
            ui->TABL_S->removeRow(row);
            str_s-=1;
            if (row==0)
            {
                ui->TABL_S->selectionModel()->clearSelection();
            }
            ui->TABL_S->removeRow(row);
        }

        if (row==0)
        {
            for (int i=0;i<5;i++)
            {
                QString string = "";
                QTableWidgetItem *zero = new QTableWidgetItem(string);
                ui->TABL_S->setItem(0,i,zero);
            }
        }
        break;
    }
    case 2:
    {
        row = ui->TABL_O->currentRow();
        if ((ui->TABL_O->currentRow()))
        {
            if (ui->TABL_O->item(row,2))
            {
                vo-=ui->TABL_O->item(row,2)->text().toInt();
            }
            if (ui->TABL_O->item(row,3))
            {
                so-=ui->TABL_O->item(row,3)->text().toInt();
            }
            if (ui->TABL_O->item(row,4))
            {
                oa+=ui->TABL_O->item(row,4)->text().toInt();
            }
            ui->TABL_O->removeRow(row);
            str_o-=1;
            if (row==0)
            {
                ui->TABL_O->selectionModel()->clearSelection();
            }
            ui->TABL_O->removeRow(row);
        }
        if (row==0)
        {
            for (int i=0;i<5;i++)
            {
                QString string = "";
                QTableWidgetItem *zero = new QTableWidgetItem(string);
                ui->TABL_O->setItem(0,i,zero);
            }
        }
        break;
    }
    case 3:
    {
        row = ui->TABL_A->currentRow();
        if (ui->TABL_A->currentRow())
        {
            if (ui->TABL_A->item(row,2))
            {
                va-=ui->TABL_A->item(row,2)->text().toInt();
            }
            if (ui->TABL_A->item(row,3))
            {
                sa-=ui->TABL_A->item(row,3)->text().toInt();
            }
            if (ui->TABL_A->item(row,4))
            {
                oa-=ui->TABL_A->item(row,4)->text().toInt();
            }
            ui->TABL_A->removeRow(row);
            str_a-=1;
            if (row==0)
            {
                ui->TABL_A->selectionModel()->clearSelection();
            }
            ui->TABL_A->removeRow(row);
        }
        if (row==0)
        {
            for (int i=0;i<5;i++)
            {
                QString string = "";
                QTableWidgetItem *zero = new QTableWidgetItem(string);
                ui->TABL_A->setItem(0,i,zero);
            }
        break;
        }
    }
    }
}

void MainWindow::on_zapolnit_clicked()
{
    if (ui->raznitza->text()!="")
    {
        ui->product->setText("Общак");
        ui->summa->setText(ui->raznitza->text());
        ui->vse->setChecked(true);
    }

}


void MainWindow::closeEvent (QCloseEvent *event)
{
    QMessageBox::StandardButton resBtn = QMessageBox::question( this, "Cheki",
                                                                tr("Уверена?\n"),
                                                                QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                                QMessageBox::Yes);
    if (resBtn != QMessageBox::Yes) {
        event->ignore();
    } else {
        event->accept();
    }
}
