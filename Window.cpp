#include "Window.h"

Window::Window()
{
    this->setWindowTitle("My Window");

    QLabel *D1 = new QLabel("Domain limit in the 1st Dimension:");
    QLabel *D2 = new QLabel("Domain limit in the 2nd Dimension:");

    QHBoxLayout *first = new QHBoxLayout;
    QLabel *XB1 = new QLabel("Enter X Bounds:");
    QSpinBox *spinner1 = new QSpinBox;
    QSpinBox *spinner2 = new QSpinBox;
    spinner1->setRange(1,20);
    spinner2->setRange(1,20);

    first->addWidget(XB1);
    first->addWidget(spinner1);
    first->addWidget(spinner2);

    QHBoxLayout *second = new QHBoxLayout;
    QLabel *YB1 = new QLabel("Enter Y Bounds:");
    QSpinBox *spinner3 = new QSpinBox;
    QSpinBox *spinner4 = new QSpinBox;
    spinner3->setRange(1,20);
    spinner4->setRange(1,20);

    second->addWidget(YB1);
    second->addWidget(spinner3);
    second->addWidget(spinner4);

    QHBoxLayout *third = new QHBoxLayout;
    QLabel *XB2 = new QLabel("Enter X Bounds:");
    QSpinBox *spinner5 = new QSpinBox;
    QSpinBox *spinner6 = new QSpinBox;
    spinner5->setRange(1,20);
    spinner6->setRange(1,20);

    third->addWidget(XB2);
    third->addWidget(spinner5);
    third->addWidget(spinner6);

    QHBoxLayout *fourth = new QHBoxLayout;
    QLabel *YB2 = new QLabel("Enter Y Bounds:");
    QSpinBox *spinner7 = new QSpinBox;
    QSpinBox *spinner8 = new QSpinBox;
    spinner7->setRange(1,20);
    spinner8->setRange(1,20);

    fourth->addWidget(YB2);
    fourth->addWidget(spinner7);
    fourth->addWidget(spinner8);

    //TODO: TRY QLINEEDIT TO FILL IN COORDINATE GRID PARAMETERS
    QHBoxLayout *fifth = new QHBoxLayout;
    QLabel *Coord = new QLabel("Enter Coordinate Grid:");
    QSpinBox *spinner9 = new QSpinBox;
    QSpinBox *spinner10 = new QSpinBox;
    spinner9->setRange(1,20);
    spinner10->setRange(1,20);

    fifth->addWidget(Coord);
    fifth->addWidget(spinner9);
    fifth->addWidget(spinner10);

    QLabel *ZL = new QLabel("Lower Boundary in 0th Dimension:");

    QComboBox *zerolower = new QComboBox;
    zerolower->addItem("PERIODIC_BOUNDARY");
    zerolower->addItem("NEUMANN_BOUNDARY");

    QHBoxLayout *zerolowerbox = new QHBoxLayout;
    zerolowerbox->addWidget(ZL);
    zerolowerbox->addWidget(zerolower);

    QLabel *ZU = new QLabel("Upper Boundary in 0th Dimension:");

    QComboBox *zeroupper = new QComboBox;
    zeroupper->addItem("PERIODIC_BOUNDARY");
    zeroupper->addItem("NEUMANN_BOUNDARY");

    QHBoxLayout *zeroupperbox = new QHBoxLayout;
    zeroupperbox->addWidget(ZU);
    zeroupperbox->addWidget(zeroupper);

    QLabel *OL = new QLabel("Lower Boundary in 1st Dimension:");

    QComboBox *onelower = new QComboBox;
    onelower->addItem("PERIODIC_BOUNDARY");
    onelower->addItem("NEUMANN_BOUNDARY");

    QHBoxLayout *onelowerbox = new QHBoxLayout;
    onelowerbox->addWidget(OL);
    onelowerbox->addWidget(onelower);

    QLabel *OU = new QLabel("Upper Boundary in 1st Dimension:");

    QComboBox *oneupper = new QComboBox;
    oneupper->addItem("PERIODIC_BOUNDARY");
    oneupper->addItem("NEUMANN_BOUNDARY");

    QHBoxLayout *oneupperbox = new QHBoxLayout;
    oneupperbox->addWidget(OU);
    oneupperbox->addWidget(oneupper);

    QHBoxLayout *sixth = new QHBoxLayout;
    QLabel *maxtime = new QLabel("Enter max time:");
    QLineEdit *line1 = new QLineEdit;

    sixth->addWidget(maxtime);
    sixth->addWidget(line1);

    QHBoxLayout *seventh = new QHBoxLayout;
    QLabel *maxstep = new QLabel("Enter max step:");
    QLineEdit *line2 = new QLineEdit;

    seventh->addWidget(maxstep);
    seventh->addWidget(line2);

    QHBoxLayout *eighth = new QHBoxLayout;
    QLabel *printinterval = new QLabel("Print interval:");
    QLineEdit *line3 = new QLineEdit;

    eighth->addWidget(printinterval);
    eighth->addWidget(line3);

    QHBoxLayout *ninth = new QHBoxLayout;
    QLabel *movie = new QLabel("Movie frame interval:");
    QLineEdit *line4 = new QLineEdit;

    ninth->addWidget(movie);
    ninth->addWidget(line4);

    QHBoxLayout *tenth = new QHBoxLayout;
    QLabel *CFL = new QLabel("CFL factor:");
    QLineEdit *line5 = new QLineEdit;

    tenth->addWidget(CFL);
    tenth->addWidget(line5);

    QHBoxLayout *eleventh = new QHBoxLayout;
    QLabel *redinterval = new QLabel("Redistribution interval:");
    QLineEdit *line6 = new QLineEdit;

    eleventh->addWidget(redinterval);
    eleventh->addWidget(line6);

    QHBoxLayout *twelfth = new QHBoxLayout;
    QLabel *ptype = new QLabel("Enter the problem type:");
    QComboBox *probtype = new QComboBox;
    probtype->addItem("TWO_FLUID_BUBBLE");
    probtype->addItem("TWO_FLUID_RT");
    probtype->addItem("TWO_FLUID_KH");
    probtype->addItem("FLUID_SOLID_CIRCLE");

    twelfth->addWidget(ptype);
    twelfth->addWidget(probtype);

    QHBoxLayout *thirteenth = new QHBoxLayout;
    QLabel *proj_type = new QLabel("Enter the projection type:");
    QComboBox *projectiontype = new QComboBox;
    projectiontype->addItem("SIMPLE");
    projectiontype->addItem("BELL_COLELLA");
    projectiontype->addItem("KIM_MOIN");
    projectiontype->addItem("PEROT_BOTELLA");

    thirteenth->addWidget(proj_type);
    thirteenth->addWidget(projectiontype);

    //main layout with vertical alignment
    QVBoxLayout *vert1 = new QVBoxLayout;
    QPushButton *quitbutton = new QPushButton("Quit");
    QPushButton *okbutton = new QPushButton("OK");

    QObject::connect(quitbutton,SIGNAL(clicked()), qApp, SLOT(quit()));
    QObject::connect(okbutton,SIGNAL(clicked()), qApp, SLOT(quit()));

    vert1->addWidget(D1);
    vert1->addLayout(first);
    vert1->addLayout(second);
    vert1->addWidget(D2);
    vert1->addLayout(third);
    vert1->addLayout(fourth);
    vert1->addLayout(fifth);
    QVBoxLayout *vert2 = new QVBoxLayout;
    vert2->addLayout(zerolowerbox);
    vert2->addLayout(zeroupperbox);
    vert2->addLayout(onelowerbox);
    vert2->addLayout(oneupperbox);
    QVBoxLayout *vert3 = new QVBoxLayout;
    vert3->addLayout(sixth);
    vert3->addLayout(seventh);
    vert3->addLayout(eighth);
    vert3->addLayout(ninth);
    vert3->addLayout(tenth);
    vert3->addLayout(eleventh);
    QVBoxLayout *vert4 = new QVBoxLayout;
    vert4->addLayout(twelfth);
    vert4->addLayout(thirteenth);
    QVBoxLayout *vert5 = new QVBoxLayout;
    vert5->addWidget(quitbutton);
    vert5->addWidget(okbutton);

    QGridLayout *grid = new QGridLayout;
    grid->addLayout(vert1,0,0);
    grid->addLayout(vert2,1,0);
    grid->addLayout(vert3,0,2);
    grid->addLayout(vert4,1,2);
    grid->addLayout(vert5,2,1);

    this->setLayout(grid);

}

Window::~Window()
{

}
