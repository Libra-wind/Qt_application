#include <QtGui>
#include "my_wizard.h"

my_wizard::my_wizard(QWidget *parent) : QWizard(parent)
{

    page = new QWizardPage(this);


    setWizardStyle(QWizard::ModernStyle);

    setWindowTitle(tr("class Wizard"));

    setWindowIcon(QIcon(tr(":/Images/draw.png")));
    //resize(800,480);
    //title
    page->setTitle(tr("Class Information"));
    page->setSubTitle(tr("Specify basic information abou the class for which you"
                         "want to generate skeleton source code files"));
#if 1
    QPixmap banner(QSize(800, 78));
    //banner = new QPixmap(tr(":/Images/draw.png"));
    //QPixmap ber = banner.scaled(size(), Qt::KeepAspectRatio);
    banner.fill(QColor(173,173,173));
    setPixmap(QWizard::BannerPixmap, banner);
    QPixmap watermarkPixmap(tr(":/Images/banner.jpg"));
    //watermarkPixmap.load(tr(":/Images/banner.jpg"));
    //watermarkPixmap = new QPixmap(tr(":/Images/banner.jpg"));
    QPixmap ber = watermarkPixmap.scaled(QSize(300, 400), Qt::IgnoreAspectRatio);
    setPixmap(QWizard::WatermarkPixmap, ber);

    QPixmap logo(tr(":/Images/draw.png"));
    ber = logo.scaled(QSize(50, 50), Qt::IgnoreAspectRatio);
    setPixmap(QWizard::LogoPixmap, ber);


#endif
    class_name =new QLabel(tr("&class name :"));
    myPushButton = new QLineEdit;
    class_name->setBuddy(myPushButton);


    page->registerField("qclassname", myPushButton);
    addPage(page);
}
