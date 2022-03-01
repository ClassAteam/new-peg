#ifndef DIALOG_H
#define DIALOG_H

#include <qdialog.h>
#include <qsharedmemory.h>
#include "ui_dialog.h"

//! [0]
class Dialog : public QDialog
{
    Q_OBJECT

  public:
    Dialog(QWidget *parent = 0);

  public slots:
    void loadFromFile();
    void loadFromMemory();

 private:
    void detach();

  private:
    Ui::Dialog ui;
    QSharedMemory sharedMemory;
};

#endif

