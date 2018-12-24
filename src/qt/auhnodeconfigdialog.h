#ifndef AUHNODECONFIGDIALOG_H
#define AUHNODECONFIGDIALOG_H

#include <QDialog>

namespace Ui {
    class AuhNodeConfigDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class AuhNodeConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AuhNodeConfigDialog(QWidget *parent = 0, QString nodeAddress = "123.456.789.123:28666", QString privkey="MASTERNODEPRIVKEY");
    ~AuhNodeConfigDialog();

private:
    Ui::AuhNodeConfigDialog *ui;
};

#endif // AUHNODECONFIGDIALOG_H
