
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QMouseEvent"
#include "QPainter"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);
    virtual void paintEvent(QPaintEvent *event);


private slots:
    void on_actionSave_triggered();

    void on_actionClear_triggered();

    void on_action3_px_triggered();

    void on_action5_px_triggered();

    void on_action7_px_triggered();

    void on_action9_px_triggered();

    void on_actionBlack_triggered();

    void on_actionWhite_triggered();

    void on_actionRed_triggered();

    void on_actionGreen_triggered();

    void on_actionBlue_triggered();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    QImage image;
    bool drawing;
    QPoint lastPoint;
    QColor brushColor;
    int brushSize;
};

#endif // MAINWINDOW_H
