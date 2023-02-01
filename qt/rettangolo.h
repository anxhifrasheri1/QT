#ifndef RETTANGOLO_H
#define RETTANGOLO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Rettangolo; }
QT_END_NAMESPACE

class Rettangolo : public QMainWindow
{
    Q_OBJECT

public:
    Rettangolo(QWidget *parent = nullptr);
    ~Rettangolo();

private slots:
    void on_btnCalcola_clicked();

private:
    Ui::Rettangolo *ui;
};
#endif // RETTANGOLO_H
