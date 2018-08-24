#ifndef WINDOW_H
#define WINDOW_H

#include <QDebug>
#include <QString>
#include <QWidget>
#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QSpinBox>
#include <QComboBox>
#include <QLineEdit>
#include <QFile>
#include <QTextStream>
#include <QTextBrowser>
#include <fstream>

class Window : public QWidget
{
    Q_OBJECT

private:
    QLineEdit *firstxbound;
    QLineEdit *lastxbound;
    QLineEdit *firstybound;
    QLineEdit *lastybound;
    QLineEdit *firstcoordinate;
    QLineEdit *lastcoordinate;
    QComboBox *zerolower;
    QComboBox *zeroupper;
    QComboBox *onelower;
    QComboBox *oneupper;
    QLineEdit *line1;
    QLineEdit *line2;
    QLineEdit *line3;
    QLineEdit *line4;
    QLineEdit *line5;
    QLineEdit *line6;
    QComboBox *probtype;
    QComboBox *projectiontype;
    QLineEdit *line7;
    QLineEdit *line8;
    QLineEdit *line9;
    QLineEdit *line10;
    QLineEdit *line11;
    QLineEdit *den1;
    QLineEdit *vis1;
    QLineEdit *den2;
    QLineEdit *vis2;
    QLineEdit *grav1;
    QLineEdit *grav2;
    QLineEdit *line12;
    QLineEdit *line13;




public:
    Window();
    ~Window();

private slots:
    /*
    void WriteFile()
    {
        std::ofstream GuiText("GUI.txt");

    }*/


    void WriteFile()
    {
        //QFile GUItext("/Users/Kyle/FronTierGUI/FronTierGUI/GUI.txt"); //kyle's mac
        QFile GUItext("./GUI.txt"); //lambda

        if (!GUItext.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            qDebug() << "Could not open GUI.txt\n";
            return;
        }

        QString xbounds1 = firstxbound->displayText();

        QString xbounds2 = lastxbound->displayText();

        QString ybounds1 = firstybound->displayText();

        QString ybounds2 = lastybound->displayText();

        QString coordinate1 = firstcoordinate->displayText();

        QString coordinate2 = lastcoordinate->displayText();

        QString lowerboundary0 = zerolower->currentText();

        QString upperboundary0 = zeroupper->currentText();

        QString lowerboundary1 = onelower->currentText();

        QString upperboundary1 = oneupper->currentText();

        QString max_time = line1->displayText();

        QString max_step = line2->displayText();

        QString print_interval = line3->displayText();

        QString movie_frame = line4->displayText();

        QString CFL_factor = line5->displayText();

        QString red_int = line6->displayText();

        QString problem_type = probtype->currentText();

        QString projection_type = projectiontype->currentText();

        QString mean_position = line7->displayText();

        QString sine_modes = line8->displayText();

        QString mode_frequency = line9->displayText();

        QString mode_amplitude = line10->displayText();

        QString mode_phase = line11->displayText();

        QString density_1 = den1->displayText();

        QString viscosity_1 = vis1->displayText();

        QString density_2 = den2->displayText();

        QString viscosity_2 = vis2->displayText();

        QString gravity_1 = grav1->displayText();

        QString gravity_2 = grav2->displayText();

        QString surface_tension = line12->displayText();

        QString smoothing_radius = line13->displayText();



        //Output all
        QTextStream out(&GUItext);

        out << "Domain limit in 0-th Dimension: " << xbounds1 << " " << xbounds2 << "\n";

        out << "Domain limit in 1-th Dimension: " << ybounds1 << " " << ybounds2 << "\n";

        out << "Computational Grid: " << coordinate1 << " " << coordinate2 << "\n";

        out << "Lower boundary in 0-th dimension: " << lowerboundary0 << "\n";

        out << "Upper boundary in 0-th dimension: " << upperboundary0 << "\n";

        out << "Lower boundary in 1-th dimension: " << lowerboundary1 << "\n";

        out << "Upper boundary in 1-th dimension: " << upperboundary1 << "\n";

        out << "\n";

        out << "Max time: " << max_time << "\n";

        out << "Max step: " << max_step << "\n";

        out << "Print interval: " << print_interval << "\n";

        out << "Movie frame interval: " << movie_frame << "\n";

        out << "CFL factor: " << CFL_factor << "\n";

        out << "Redistribution interval: " << red_int << "\n";

        out << "\n";

        out << "Problem type: " << problem_type << "\n";

        out << "Projection type: " << projection_type << "\n";

        out << "Mean position of fluid interface: " << mean_position << "\n";

        out << "Number of sine modes: " << sine_modes << "\n";

        out << "Frequency of mode 1: " << mode_frequency << "\n";

        out << "Amplitude of mode 1: " << mode_amplitude << "\n";

        out << "Phase of mode 1: " << mode_phase << "\n";

        out << "Density and viscosity of fluid 1: " << density_1 << " " << viscosity_1 << "\n";

        out << "Density and viscosity of fluid 2: " << density_2 << " " << viscosity_2 << "\n";

        out << "Gravity: " << gravity_1 << " " << gravity_2 << "\n";

        out << "Surface tension: " << surface_tension << "\n";

        out << "Factor of smoothing radius: " << smoothing_radius << "\n";


         //Tried to open the file on the spot vut doesnt format well
        /*QTextBrowser *inputfile = new QTextBrowser;
            inputfile->setText(GUItext.readAll());
            inputfile->show();*/



    }

};

#endif // WINDOW_H
