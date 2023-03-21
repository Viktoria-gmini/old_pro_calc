#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int str_v=0, str_s=0, str_o=0, str_a=0;
    float vs=0,vo=0,va=0,so=0,sa=0,oa=0;
protected:
    void closeEvent(QCloseEvent *event) override;
private slots:
    void on_V_TABLITZU_clicked();
    void on_itogg_clicked();
    void on_vichest_clicked();

    void on_delete_row_clicked();

    void on_zapolnit_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
