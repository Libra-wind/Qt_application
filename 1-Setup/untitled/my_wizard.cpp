#include <QtGui>
#include "my_wizard.h"

my_wizard::my_wizard(QWidget *parent) : QWizard(parent)
{

    page = new QWizardPage(this);


    setWizardStyle(QWizard::ModernStyle);

    setWindowTitle(tr("class Wizard"));

    setWindowIcon(QIcon(tr(":/Images/draw.png")));
    resize(800,480);
    //title
    page->setTitle(tr("Class Information"));
    page->setSubTitle(tr("Specify basic information abou the class for which you"
                         "want to generate skeleton source code files"));
#if 0
//    QPixmap banner(tr(":/Images/banner.jpg"));
//    //banner = new QPixmap(tr(":/Images/draw.png"));
//    QPixmap ber = banner.scaled(size(), Qt::KeepAspectRatio);
//    setPixmap(QWizard::BannerPixmap, ber);
//    setPixmap(QWizard::WatermarkPixmap, banner);
#endif
    addPage(page);
}
