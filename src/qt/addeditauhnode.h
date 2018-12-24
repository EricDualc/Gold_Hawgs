#ifndef ADDEDITAUHNODE_H
#define ADDEDITAUHNODE_H

#include <QDialog>

namespace Ui {
class AddEditAuhNode;
}


class AddEditAuhNode : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditAuhNode(QWidget *parent = 0);
    ~AddEditAuhNode();

protected:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

signals:

private:
    Ui::AddEditAuhNode *ui;
};

#endif // ADDEDITAUHNODE_H
