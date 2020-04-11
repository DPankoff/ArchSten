#ifndef START_H
#define START_H

#include <QMainWindow>
#include <preview/uimodel.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    uiModel  *model;
};

#endif // START_H
