#include "Window.h"

Window::Window()
{
    this->setWindowTitle("My Window");

    QLabel *D1 = new QLabel("Domain limit in the 1st Dimension:");
    QLabel *D2 = new QLabel("Domain limit in the 2nd Dimension:");

    QHBoxLayout *first = new QHBoxLayout;
    QLabel *XB1 = new QLabel("Enter X Bounds:");
    firstxbound = new QLineEdit;
    lastxbound = new QLineEdit;

    first->addWidget(XB1);
    first->addWidget(firstxbound);
    first->addWidget(lastxbound);

    QHBoxLayout *fourth = new QHBoxLayout;
    QLabel *YB2 = new QLabel("Enter Y Bounds:");
    firstybound = new QLineEdit;
    lastybound = new QLineEdit;

    fourth->addWidget(YB2);
    fourth->addWidget(firstybound);
    fourth->addWidget(lastybound);

    QHBoxLayout *fifth = new QHBoxLayout;
    QLabel *Coord = new QLabel("Enter Computational Grid:");
    firstcoordinate = new QLineEdit;
    lastcoordinate = new QLineEdit;

    fifth->addWidget(Coord);
    fifth->addWidget(firstcoordinate);
    fifth->addWidget(lastcoordinate);

    QLabel *ZL = new QLabel("Lower Boundary in 0th Dimension:");

    zerolower = new QComboBox;
    zerolower->addItem("PERIODIC_BOUNDARY");
    zerolower->addItem("NEUMANN_BOUNDARY");

    QHBoxLayout *zerolowerbox = new QHBoxLayout;
    zerolowerbox->addWidget(ZL);
    zerolowerbox->addWidget(zerolower);

    QLabel *ZU = new QLabel("Upper Boundary in 0th Dimension:");

    zeroupper = new QComboBox;
    zeroupper->addItem("PERIODIC_BOUNDARY");
    zeroupper->addItem("NEUMANN_BOUNDARY");

    QHBoxLayout *zeroupperbox = new QHBoxLayout;
    zeroupperbox->addWidget(ZU);
    zeroupperbox->addWidget(zeroupper);

    QLabel *OL = new QLabel("Lower Boundary in 1st Dimension:");

    onelower = new QComboBox;
    onelower->addItem("PERIODIC_BOUNDARY");
    onelower->addItem("NEUMANN_BOUNDARY");

    QHBoxLayout *onelowerbox = new QHBoxLayout;
    onelowerbox->addWidget(OL);
    onelowerbox->addWidget(onelower);

    QLabel *OU = new QLabel("Upper Boundary in 1st Dimension:");

    oneupper = new QComboBox;
    oneupper->addItem("PERIODIC_BOUNDARY");
    oneupper->addItem("NEUMANN_BOUNDARY");

    QHBoxLayout *oneupperbox = new QHBoxLayout;
    oneupperbox->addWidget(OU);
    oneupperbox->addWidget(oneupper);

    QHBoxLayout *sixth = new QHBoxLayout;
    QLabel *maxtime = new QLabel("Enter max time:");
    line1 = new QLineEdit;

    sixth->addWidget(maxtime);
    sixth->addWidget(line1);

    QHBoxLayout *seventh = new QHBoxLayout;
    QLabel *maxstep = new QLabel("Enter max step:");
    line2 = new QLineEdit;

    seventh->addWidget(maxstep);
    seventh->addWidget(line2);

    QHBoxLayout *eighth = new QHBoxLayout;
    QLabel *printinterval = new QLabel("Print interval:");
    line3 = new QLineEdit;

    eighth->addWidget(printinterval);
    eighth->addWidget(line3);

    QHBoxLayout *ninth = new QHBoxLayout;
    QLabel *movie = new QLabel("Movie frame interval:");
    line4 = new QLineEdit;

    ninth->addWidget(movie);
    ninth->addWidget(line4);

    QHBoxLayout *tenth = new QHBoxLayout;
    QLabel *CFL = new QLabel("CFL factor:");
    line5 = new QLineEdit;

    tenth->addWidget(CFL);
    tenth->addWidget(line5);

    QHBoxLayout *eleventh = new QHBoxLayout;
    QLabel *redinterval = new QLabel("Redistribution interval:");
    line6 = new QLineEdit;

    eleventh->addWidget(redinterval);
    eleventh->addWidget(line6);

    QHBoxLayout *twelfth = new QHBoxLayout;
    QLabel *ptype = new QLabel("Enter the problem type:");
    probtype = new QComboBox;
    probtype->addItem("TWO_FLUID_BUBBLE");
    probtype->addItem("TWO_FLUID_RT");
    probtype->addItem("TWO_FLUID_KH");
    probtype->addItem("FLUID_SOLID_CIRCLE");

    twelfth->addWidget(ptype);
    twelfth->addWidget(probtype);

    QHBoxLayout *thirteenth = new QHBoxLayout;
    QLabel *proj_type = new QLabel("Enter the projection type:");
    projectiontype = new QComboBox;
    projectiontype->addItem("SIMPLE");
    projectiontype->addItem("BELL_COLELLA");
    projectiontype->addItem("KIM_MOIN");
    projectiontype->addItem("PEROT_BOTELLA");

    thirteenth->addWidget(proj_type);
    thirteenth->addWidget(projectiontype);

    QHBoxLayout *fourteenth = new QHBoxLayout;
    QLabel *meanpos = new QLabel("Enter mean position of fluid interface:");
    line7 = new QLineEdit;

    fourteenth->addWidget(meanpos);
    fourteenth->addWidget(line7);

    QHBoxLayout *fifteenth = new QHBoxLayout;
    QLabel *sinemodes = new QLabel("Enter number of sine modes:");
    line8 = new QLineEdit;

    fifteenth->addWidget(sinemodes);
    fifteenth->addWidget(line8);

    QHBoxLayout *sixteenth = new QHBoxLayout;
    QLabel *freq = new QLabel("Enter frequency of mode 1:");
    line9 = new QLineEdit;

    sixteenth->addWidget(freq);
    sixteenth->addWidget(line9);

    QHBoxLayout *seventeenth = new QHBoxLayout;
    QLabel *amp = new QLabel("Ente amplitude of mode 1:");
    line10 = new QLineEdit;

    seventeenth->addWidget(amp);
    seventeenth->addWidget(line10);

    QHBoxLayout *eighteenth = new QHBoxLayout;
    QLabel *phase = new QLabel("Enter phase of mode 1:");
    line11 = new QLineEdit;

    eighteenth->addWidget(phase);
    eighteenth->addWidget(line11);

    QHBoxLayout *nineteenth = new QHBoxLayout;
    QLabel *dandv1 = new QLabel("Enter density and viscosity of fluid 1:");
    den1 = new QLineEdit;
    vis1 = new QLineEdit;

    nineteenth->addWidget(dandv1);
    nineteenth->addWidget(den1);
    nineteenth->addWidget(vis1);

    QHBoxLayout *twenty = new QHBoxLayout;
    QLabel *dandv2 = new QLabel("Enter density and viscosity of fluid 2:");
    den2 = new QLineEdit;
    vis2 = new QLineEdit;

    twenty->addWidget(dandv2);
    twenty->addWidget(den2);
    twenty->addWidget(vis2);

    QHBoxLayout *twentyone = new QHBoxLayout;
    QLabel *gravity = new QLabel("Enter gravity:");
    grav1 = new QLineEdit;
    grav2 = new QLineEdit;

    twentyone->addWidget(gravity);
    twentyone->addWidget(grav1);
    twentyone->addWidget(grav2);

    QHBoxLayout *twentytwo = new QHBoxLayout;
    QLabel *surftension = new QLabel("Enter surface tension:");
    line12 = new QLineEdit;

    twentytwo->addWidget(surftension);
    twentytwo->addWidget(line12);

    QHBoxLayout *twentythree = new QHBoxLayout;
    QLabel *smoothrad = new QLabel("Enter factor of smoothing radius:");
    line13 = new QLineEdit;

    twentythree->addWidget(smoothrad);
    twentythree->addWidget(line13);


    //main layout with vertical alignment

    QPushButton *quitbutton = new QPushButton("Quit");
    QPushButton *okbutton = new QPushButton("OK");

    QObject::connect(quitbutton,SIGNAL(clicked()), qApp, SLOT(quit()));
    //QObject::connect(okbutton,SIGNAL(clicked()), qApp, SLOT(quit()));
    QObject::connect(okbutton,SIGNAL(clicked()), this, SLOT(WriteFile()));

    QVBoxLayout *vert1 = new QVBoxLayout;
    vert1->addWidget(D1);
    vert1->addLayout(first);
    vert1->addWidget(D2);
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

    QVBoxLayout *vert6 = new QVBoxLayout;
    vert6->addLayout(fourteenth);
    vert6->addLayout(fifteenth);
    vert6->addLayout(sixteenth);
    vert6->addLayout(seventeenth);
    vert6->addLayout(eighteenth);

    QVBoxLayout *vert7 = new QVBoxLayout;
    vert7->addLayout(nineteenth);
    vert7->addLayout(twenty);
    vert7->addLayout(twentyone);
    vert7->addLayout(twentytwo);
    vert7->addLayout(twentythree);

    QGridLayout *grid = new QGridLayout;
    grid->addLayout(vert1,0,0);
    grid->addLayout(vert2,1,0);
    grid->addLayout(vert3,0,2);
    grid->addLayout(vert4,1,2);
    grid->addLayout(vert5,4,1);
    grid->addLayout(vert6,3,0);
    grid->addLayout(vert7,3,2);


    this->setLayout(grid);

}

Window::~Window()
{

}
