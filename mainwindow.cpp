#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "particle.h"

#include "QPainter"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(0, 0, 800, 600, this);
    ui->graphicsView->setScene(scene);
    scene->addRect(scene->sceneRect());

    int count_of_particles;
    std::cout << "Please enter the number of particles you want to add: ";
    std::cin >> count_of_particles;
    std::cout << std::endl;
    Particle *Particles[count_of_particles];
    for(int i = 0; i < count_of_particles; i++)
    {
        Particles[i] = new Particle(qrand(), qrand());
        scene->addItem(Particles[i]);            //????????????????????????????
    }

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), scene, SLOT(advance()));
    timer->start(1000/10);
}

MainWindow::~MainWindow()
{
    delete ui;
}
