#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QImage>
#include <QPixmap>
#include <QCloseEvent>
#include <QMessageBox>
#include <time.h>
#include "opencv2/opencv.hpp"
#include <iostream>
#include <QThread>
#include <wiringPi.h>
#include <wiringPiSPI.h>

using namespace cv;
using namespace std;
void translation(Mat img, Mat& dst, Point pt);
void record(Mat frame);

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Mat frame;
    int adcChannel=0;
    int adcValue=0;
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event);
    
private:
    int read_mcp3008_adc(int adcChannel);
    void load_cascade(CascadeClassifier& cascade, string frame);
    
private slots:
    void on_startBtn_pressed();
    void on_pushButton_clicked();
    void on_left_clicked();

    void on_clockwise_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::MainWindow *ui;

    QGraphicsPixmapItem pixmap;
    QGraphicsPixmapItem pixmap2;
    QGraphicsPixmapItem pixmap3;
    QGraphicsPixmapItem pixmap4;
    QGraphicsPixmapItem pixmap5;
    QGraphicsPixmapItem pixmap6;
    QGraphicsPixmapItem pixmap7;
    QGraphicsPixmapItem pixmap8;
    QGraphicsPixmapItem pixmap9;
    QGraphicsPixmapItem pixmap10;

    VideoCapture video;
};

#endif // MAINWINDOW_H
