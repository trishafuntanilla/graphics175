#include "objectmodel.h"

ObjectModel::ObjectModel()
{
    name = " ";
    originFile = " ";

    projection.setToIdentity();
    view.setToIdentity();
    model.setToIdentity();

    xTrans = 10; yTrans = 15; zTrans = 20;
    xRot = 0; yRot = 0; zRot = 0;
    xScale = 30; yScale = 30; zScale = 30;

}

ObjectModel::~ObjectModel()
{
	
}

void ObjectModel::setNameAndIndex(QString n, QString f, int i)
{
    name = n;
    originFile = f;
    index = i;
}

void ObjectModel::setPropertiesValues(int xT, int yT, int zT, int xR, int yR, int zR, int xS, int yS, int zS)
{

	xTrans = xT; yTrans = yT; zTrans = zT;
	xRot = xR; yRot = yR; zRot = zR;
	xScale = xS; yScale = yS; zScale = zS;

}

void ObjectModel::setModel(QMatrix4x4 matrix)
{
    model = matrix;
}

void ObjectModel::setProjection(QMatrix4x4 matrix)
{
    projection = matrix;
}

void ObjectModel::setView(QMatrix4x4 matrix)
{
    view = matrix;
}


QString ObjectModel::getName()
{
    return name;
}

QString ObjectModel::getOriginFile()
{
    return originFile;
}

QMatrix4x4 ObjectModel::getProjection()
{

	return projection;

}

QMatrix4x4 ObjectModel::getView()
{
    return view;
}

QMatrix4x4 ObjectModel::getModel()
{
    return model;
}
