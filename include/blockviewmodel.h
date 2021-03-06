#ifndef BLOCKVIEWMODEL_H
#define BLOCKVIEWMODEL_H

#include <QAbstractTableModel>
#include <QImage>

class BlockViewModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    BlockViewModel();
    int	columnCount(const QModelIndex &parent) const;
    int rowCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    void AddBlock(QString name, QString type);
    QString GetNameOf(int block);
    QString GetTypeOf(int block);
private:
    QStringList BlockNames;
    QStringList BlockTypes;
    int ActiveBlock = 0;
    int BlocksCount = 0;
signals:
public slots:
};

#endif // BLOCKVIEWMODEL_H
