#include "onlineshop.h"

OnlineShop::OnlineShop(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant OnlineShop::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex OnlineShop::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex OnlineShop::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int OnlineShop::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int OnlineShop::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant OnlineShop::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
