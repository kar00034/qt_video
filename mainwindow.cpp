#include "mainwindow.h"
#include "ui_mainwindow.h"
#define CS_MCP3008 28
#define SPI_CHANNEL 0
#define SPI_SPEED 1000000
#define LED1 25

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    ui->graphicsView->setScene(new QGraphicsScene(this));
    ui->graphicsView->scene()->addItem(&pixmap);
    ui->graphicsView_2->setScene(new QGraphicsScene(this));
    ui->graphicsView_2->scene()->addItem(&pixmap2);
    ui->graphicsView_3->setScene(new QGraphicsScene(this));
    ui->graphicsView_3->scene()->addItem(&pixmap3);
    ui->graphicsView_4->setScene(new QGraphicsScene(this));
    ui->graphicsView_4->scene()->addItem(&pixmap4);
    ui->graphicsView_5->setScene(new QGraphicsScene(this));
    ui->graphicsView_5->scene()->addItem(&pixmap5);
    ui->graphicsView_6->setScene(new QGraphicsScene(this));
    ui->graphicsView_6->scene()->addItem(&pixmap6);
    ui->graphicsView_7->setScene(new QGraphicsScene(this));
    ui->graphicsView_7->scene()->addItem(&pixmap7);
    ui->graphicsView_8->setScene(new QGraphicsScene(this));
    ui->graphicsView_8->scene()->addItem(&pixmap8);
    ui->graphicsView_9->setScene(new QGraphicsScene(this));
    ui->graphicsView_9->scene()->addItem(&pixmap9);
    ui->graphicsView_10->setScene(new QGraphicsScene(this));
    ui->graphicsView_10->scene()->addItem(&pixmap10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startBtn_pressed()
{
    pinMode(CS_MCP3008,OUTPUT);


    using namespace cv;

    if(video.isOpened())
    {
        ui->startBtn->setText("Start");
        video.release();
        return;
    }

    bool isCamera;
    int cameraIndex = ui->videoEdit->text().toInt(&isCamera);
    if(isCamera)
    {
        if(!video.open(cameraIndex))
        {
            QMessageBox::critical(this,
                                  "Camera Error",
                                  "Make sure you entered a correct camera index,"
                                  "<br>or that the camera is not being accessed by another program!");
            return;
        }
    }
    else
    {
        if(!video.open(ui->videoEdit->text().trimmed().toStdString()))
        {
            QMessageBox::critical(this,
                                  "Video Error",
                                  "Make sure you entered a correct and supported video file path,"
                                  "<br>or a correct RTSP feed URL!");
            return;
        }
    }
    
    ui->startBtn->setText("Stop");
    pinMode(LED1,OUTPUT);
    Mat frame2,bgr[3],RG,BG,RB,lframe;
    pinMode(CS_MCP3008, OUTPUT);
    wiringPiSPISetup(SPI_CHANNEL, SPI_SPEED);
    adcChannel = 3;
    digitalWrite(LED1,0);
    while(video.isOpened())
    {
        video >> frame;
        video >> frame2;
        split(frame, bgr);

        if(!frame.empty())
        {

            if(ui->pushButton_6-> text() == "Stop"){
                CascadeClassifier face_cascade;
                load_cascade(face_cascade,"haarcascade_frontalface_alt2.xml");
                vector<Rect> faces;
                face_cascade.detectMultiScale(frame2,faces);

                for(Rect rc:faces){
                    rectangle(frame2,faces[0],Scalar(0,255,0),2);
                }
            }

            if (ui->tabWidget->currentIndex()==0){
                QImage qimg(frame.data,
                            frame.cols,
                            frame.rows,
                            frame.step,
                            QImage::Format_RGB888);
                pixmap.setPixmap( QPixmap::fromImage(qimg.rgbSwapped()) );
                ui->graphicsView->fitInView(&pixmap);
            }

            if (ui->tabWidget->currentIndex()==1){
                QImage qimg8(frame.data,
                             frame.cols,
                             frame.rows,
                             frame.step,
                             QImage::Format_RGB888);
                pixmap8.setPixmap( QPixmap::fromImage(qimg8.rgbSwapped()) );
                ui->graphicsView_8->fitInView(&pixmap8,Qt::KeepAspectRatio);
            }

            if (ui->tabWidget->currentIndex()==2){
            adcValue = read_mcp3008_adc(adcChannel);
            adcValue =200-(adcValue*0.8);
            
            frame.convertTo(lframe, -1, 1, adcValue);
                QImage qimg9(frame2.data,
                             frame2.cols,
                             frame2.rows,
                             frame2.step,
                             QImage::Format_RGB888);
                QImage qimg10(lframe.data,
                              lframe.cols,
                              lframe.rows,
                              lframe.step,
                              QImage::Format_RGB888);

                pixmap9.setPixmap( QPixmap::fromImage(qimg9.rgbSwapped()) );
                pixmap10.setPixmap( QPixmap::fromImage(qimg10.rgbSwapped()));
                ui->graphicsView_9->fitInView(&pixmap9);
                ui->graphicsView_10->fitInView(&pixmap10, Qt::KeepAspectRatio);
            }

            if (ui->tabWidget_2->currentIndex()==0){
                QImage qimg2(bgr[2].data,
                             bgr[2].cols,
                             bgr[2].rows,
                             bgr[2].step,
                             QImage::Format_Grayscale8);
                QImage qimg3(bgr[1].data,
                             bgr[1].cols,
                             bgr[1].rows,
                             bgr[1].step,
                             QImage::Format_Grayscale8);
                QImage qimg4(bgr[0].data,
                             bgr[0].cols,
                             bgr[0].rows,
                             bgr[0].step,
                             QImage::Format_Grayscale8);
                pixmap2.setPixmap( QPixmap::fromImage(qimg2));
                pixmap3.setPixmap( QPixmap::fromImage(qimg3) );
                pixmap4.setPixmap( QPixmap::fromImage(qimg4) );
                ui->graphicsView_2->fitInView(&pixmap2);
                ui->graphicsView_3->fitInView(&pixmap3);
                ui->graphicsView_4->fitInView(&pixmap4);
            }

            if (ui->tabWidget_2->currentIndex()==1){
                BG = bgr[0]/2+bgr[1]/2;
                RG = bgr[1]/2+bgr[2]/2;
                RB = bgr[2]/2+bgr[0]/2;

                QImage qimg5(BG.data,
                             BG.cols,
                             BG.rows,
                             BG.step,
                             QImage::Format_Grayscale8);
                QImage qimg6(RG.data,
                             RG.cols,
                             RG.rows,
                             RG.step,
                             QImage::Format_Grayscale8);
                QImage qimg7(RB.data,
                             RB.cols,
                             RB.rows,
                             RB.step,
                             QImage::Format_Grayscale8);
                pixmap5.setPixmap( QPixmap::fromImage(qimg5) );
                pixmap6.setPixmap( QPixmap::fromImage(qimg6) );
                pixmap7.setPixmap( QPixmap::fromImage(qimg7) );
                ui->graphicsView_5->fitInView(&pixmap5);
                ui->graphicsView_6->fitInView(&pixmap6);
                ui->graphicsView_7->fitInView(&pixmap7);
            }
        }
        qApp->processEvents();
        
    }
    
    ui->startBtn->setText("Start");

}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if(video.isOpened())
    {
        QMessageBox::warning(this,
                             "Warning",
                             "Stop the video before closing the application!");
        event->ignore();
    }
    else
    {
        event->accept();
    }
}

void MainWindow::on_pushButton_clicked()
{
    
    if(ui->pushButton-> text() == "Record")
    {
        ui->pushButton->setText("Recording");       
        VideoWriter writer;
        double fps = 29.97;
        int delay = cvRound(1000.0/fps);
        Size size(frame.cols,frame.rows);
        int fourcc = VideoWriter::fourcc('D','X','5','0'); 
        writer.set(CAP_PROP_FRAME_WIDTH, 240);
        writer.set(CAP_PROP_FRAME_HEIGHT, 160);   
        writer.open("./video_file.avi",fourcc,6,size);
        CV_Assert(video.isOpened());
        for (;;){
	    video.read(frame);
            digitalWrite(LED1, 1);
            writer << frame;
            imshow("record",frame); 
	    digitalWrite(LED1, 0);
            if(waitKey(delay) >= 0) {
                digitalWrite(LED1, 0);
                break;
            }
        }
	destroyAllWindows();
        ui->pushButton->setText("Record"); 
    }
}

void MainWindow::on_left_clicked()
{
    ui->graphicsView_8->move(ui->graphicsView_8->x()-30,ui->graphicsView_8->y());
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->graphicsView_8->move(ui->graphicsView_8->x()+30,ui->graphicsView_8->y());
}


void MainWindow::on_clockwise_clicked()
{
    ui->graphicsView_8->rotate(5);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->graphicsView_8->rotate(-5);
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->graphicsView_8->move(ui->graphicsView_8->x(),ui->graphicsView_8->y()+30);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->graphicsView_8->move(ui->graphicsView_8->x(),ui->graphicsView_8->y()-30);
}

void MainWindow::load_cascade(CascadeClassifier& cascade, string fname){

    String path = "/usr/local/share/opencv4/haarcascades/";
    String full_name = path + fname;

    CV_Assert(cascade.load(full_name));

}

void MainWindow::on_pushButton_6_clicked()
{
    if(ui->pushButton_6-> text() == "detect") ui->pushButton_6->setText("Stop");
    else ui->pushButton_6->setText("detect");
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->graphicsView_8->resize(ui->graphicsView_8->width()+16,ui->graphicsView_8->height()+12);
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->graphicsView_8->resize(ui->graphicsView_8->width()-16,ui->graphicsView_8->height()-12);
}

int MainWindow::read_mcp3008_adc(int adcChannel){
    unsigned char buff[3];
    int adcValue=0;
    buff[0]=0x01;
    buff[1]=0x80|((adcChannel & 0x07)<<4);
    buff[2]=0x00;
    digitalWrite(CS_MCP3008, 0);
    wiringPiSPIDataRW(SPI_CHANNEL,buff,3);
    buff[1]=0x03 & buff[1];
    adcValue=(buff[1]<<8)|buff[2];
    digitalWrite(CS_MCP3008,1);
    return adcValue;
}
