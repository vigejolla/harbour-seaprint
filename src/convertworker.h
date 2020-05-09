#ifndef CONVERTWORKER_H
#define CONVERTWORKER_H
#include <QObject>
#include <QtNetwork>

class ConvertWorker : public QObject
{
    Q_OBJECT

public slots:
    void convertPdf(QNetworkRequest request, QString filename, QTemporaryFile* tempfile,
                    bool urf, quint32 Colors, quint32 Quality,
                    quint32 HwResX, quint32 HwResY, bool TwoSided, bool Tumble);
    //convertImage();

signals:
    void done(QNetworkRequest request, QTemporaryFile* data);
    void failed();
};

#endif // CONVERTWORKER_H
